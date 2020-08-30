# -*- coding: utf-8 -*-
# python3
# ocr库 https://github.com/JaidedAI/EasyOCR
# pip install torch==1.6.0+cpu torchvision==0.7.0+cpu -f https://download.pytorch.org/whl/torch_stable.html
# pip install easyocr
import json
import time
import os
import random
from urllib import request, parse
import easyocr

USERNAME = ""
PASSWORD = ""
CACHE_FILE = "cache.txt"
SESSION_KEY = "JSESSIONID"
SAVE_SESSION_DAY = 5 # session本地保存天数
SVR_HOST = ""
LOGIN_PAGE_URL = "{0}/pkt/login/loginPage".format(SVR_HOST)
LOGIN_PROCESS_URL = "{0}/pkt/login/loginProcess".format(SVR_HOST)
RESERVE_PAGE_URL = "{0}/pkt/service/reservePage".format(SVR_HOST)
GET_CODE_URL = "{0}/pkt/service/getCode".format(SVR_HOST)

class CacheFileData:
  def __init__(self):
    self.session = ""
    self.sessionTime = 0

  def loadFromJsonStr(self, jsonStr):
    fileDataDic = json.loads(jsonStr)
    if fileDataDic.get("session") != None:
      self.session = fileDataDic["session"]
    if fileDataDic.get("session_time") != None:
      self.sessionTime = int(fileDataDic["session_time"])

  def genJsonStr(self):
    dataDic = dict()
    dataDic["session"] = self.session
    dataDic["session_time"] = self.sessionTime
    return json.dumps(dataDic)

  def saveToFile(self, file):
    file.seek(0)
    file.truncate()
    file.write(self.genJsonStr())

CACHE_DATA = CacheFileData()

def GetCookie(sessionID):
  return "{0}={1}".format(SESSION_KEY, sessionID)

def GetSessionIdFromLoginPage(sessionID):
  req = request.Request(LOGIN_PAGE_URL)
  req.add_header("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9")
  req.add_header("Accept-Encoding", "gzip, deflate")
  req.add_header("Accept-Language", "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7")
  req.add_header("Cache-Control", "max-age=0")
  req.add_header("Connection", "keep-alive")
  req.add_header("Content-Type", "application/x-www-form-urlencoded")
  if sessionID != "":
    req.add_header("Cookie", GetCookie(sessionID))
  req.add_header("Upgrade-Insecure-Requests", "1")
  req.add_header("User-Agent", "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36")
  with request.urlopen(req) as response:
    print('GetSessionIdFromLoginPage Status:', response.status, response.reason)
    if response.status == 200:
      for k, v in response.getheaders():
        if k == "Set-Cookie":
          splitStrs = str.split(v, ";")
          for oneCookie in splitStrs:
            if str.find(oneCookie, SESSION_KEY) != -1:
              return str.split(oneCookie, "=")[1]
      # 如果本地的sessionID有效，接口不会返回新的sessionID,这里延用本地sessionID
      if sessionID != "":
        return sessionID
  return ""

def GetSessionID(bLogin):
  cacheFilePath = os.path.join(os.getcwd(), CACHE_FILE)
  with open(cacheFilePath, "r+") as sessionFile:
    CACHE_DATA.loadFromJsonStr(sessionFile.read())
    if bLogin or CACHE_DATA.session == "":
      # session已过期
      if CACHE_DATA.sessionTime < int(round(time.time())) - SAVE_SESSION_DAY * 86400:
        CACHE_DATA.session = ""
      oldSession = CACHE_DATA.session
      CACHE_DATA.session = GetSessionIdFromLoginPage(oldSession)
      if CACHE_DATA.session == "":
        print("GetSessionID session expired and get new session failed")
        return ""
      if oldSession != CACHE_DATA.session:
        CACHE_DATA.sessionTime = int(round(time.time()))
      CACHE_DATA.saveToFile(sessionFile)
  return CACHE_DATA.session

def Login():
  if GetSessionID(True) == "":
    print("login failed: sessionID is empty")
    return
  loginData = parse.urlencode([("username", USERNAME), ("password", PASSWORD)])
  req = request.Request(LOGIN_PROCESS_URL)
  req.add_header("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9")
  req.add_header("Accept-Encoding", "gzip, deflate")
  req.add_header("Accept-Language", "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7")
  req.add_header("Cache-Control", "max-age=0")
  req.add_header("Connection", "keep-alive")
  req.add_header("Content-Type", "application/x-www-form-urlencoded")
  req.add_header("Cookie", GetCookie(CACHE_DATA.session))
  req.add_header("Origin", SVR_HOST)
  req.add_header("Referer", LOGIN_PAGE_URL)
  req.add_header("Upgrade-Insecure-Requests", "1")
  req.add_header("User-Agent", "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36")
  print("start Login req")
  with request.urlopen(req, loginData.encode("utf-8")) as response:
    print('Login Status:', response.status, response.reason)
    #thePage = response.read()
    #print(thePage)
    if response.status == 302:
      print("Login OK")
      # 模拟调用一次reservePage

def GetReservePage():
  if GetSessionID(False) == "":
    print("GetReservePage failed: sessionID is empty")
    return False

  req = request.Request(RESERVE_PAGE_URL)
  req.add_header("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9")
  req.add_header("Accept-Encoding", "gzip, deflate")
  req.add_header("Accept-Language", "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7")
  req.add_header("Cache-Control", "max-age=0")
  req.add_header("Connection", "keep-alive")
  req.add_header("Cookie", GetCookie(CACHE_DATA.session))
  req.add_header("Referer", LOGIN_PAGE_URL)
  req.add_header("Upgrade-Insecure-Requests", "1")
  req.add_header("User-Agent", "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36")
  with request.urlopen(req) as response:
    print('GetReservePage url Status:', response.status, response.reason)
    if response.status == 200:
      return True
  return False

def GetCode():
  if GetSessionID(False) == "":
    print("GetCode failed: sessionID is empty")
    return ""

  # 获取验证码
  verifyCode = ""
  req = request.Request(GET_CODE_URL)
  req.add_header("Accept", "image/webp,image/apng,image/*,*/*;q=0.8")
  req.add_header("Accept-Encoding", "gzip, deflate")
  req.add_header("Accept-Language", "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7")
  req.add_header("Connection", "keep-alive")
  req.add_header("Cookie", GetCookie(CACHE_DATA.session))
  req.add_header("Referer", RESERVE_PAGE_URL)
  req.add_header("User-Agent", "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36")
  with request.urlopen(req) as response:
    print('GetCode url Status:', response.status, response.reason)
    pngData = response.read()
    pngFilePath = os.path.join(os.getcwd(), "code_{0}_{1}.png".format(int(round(time.time())), random.randint(1, 10000)))
    with open(pngFilePath, 'wb') as pngFile:
      pngFile.write(pngData)
      # 识别验证码
    verifyResult = reader.readtext(pngFilePath, detail = 0, allowlist = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    if len(verifyResult) > 0:
      verifyCode = str.lower(verifyResult[0]).replace(' ', '')
      # 判断一下长度对不对
      if len(verifyCode) != 5:
        print("GetCode verify code failed: {0}".format(verifyCode))
        verifyCode = ""
      else:
        # 识别成功，删除临时图片文件
        os.remove(pngFilePath)
  return verifyCode

def Logout():
  pass

# 只识别英文
reader = easyocr.Reader(['en'], gpu = False)
if __name__ == "__main__":
  print(GetSessionID(True))
  # if GetReservePage() == True:
  #   verifyCode = GetCode()
  #   print(verifyCode)

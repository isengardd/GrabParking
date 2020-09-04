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

USERNAME = "mabaolai"
PASSWORD = "123456"
LICENSE_PLATE = "苏E5P623"
CACHE_FILE = "cache.txt"
SESSION_KEY = "JSESSIONID"
SAVE_SESSION_TIME = 2 * 3600 # session本地保存时间
RELOGIN_TIME = 5 * 60 # 距离上次操作超过5分钟，重新登陆
SVR_HOST = "http://221.178.136.186:8090"
LOGIN_PAGE_URL = "{0}/pkt/login/loginPage".format(SVR_HOST)
LOGIN_PROCESS_URL = "{0}/pkt/login/loginProcess".format(SVR_HOST)
RESERVE_PAGE_URL = "{0}/pkt/service/reservePage".format(SVR_HOST)
GET_CODE_URL = "{0}/pkt/service/getCode".format(SVR_HOST)
QUERY_BLACKLIST_URL = "{0}/pkt/service/isBlacklist?booking_time=tomorrow&licensePlate={1}".format(SVR_HOST, parse.quote_plus(parse.quote_plus(LICENSE_PLATE)))
MY_RENT_PAGE_URL = "{0}/pkt/service/myRentPage".format(SVR_HOST)
PARKING_BOOK_URL = "{0}/pkt/service/parkingBooking".format(SVR_HOST)

USER_AGENT = "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"

class CacheFileData:
  def __init__(self):
    self.session = ""
    self.sessionTime = 0 #获取session的时间戳
    self.lastOpTime = 0 #使用该session上次调用api的时间戳

  def loadFromJsonStr(self, jsonStr):
    fileDataDic = json.loads(jsonStr)
    if fileDataDic.get("session") != None:
      self.session = fileDataDic["session"]
    if fileDataDic.get("session_time") != None:
      self.sessionTime = int(fileDataDic["session_time"])
    if fileDataDic.get("last_op_time") != None:
      self.lastOpTime = int(fileDataDic["last_op_time"])

  def genJsonStr(self):
    dataDic = dict()
    dataDic["session"] = self.session
    dataDic["session_time"] = self.sessionTime
    dataDic["last_op_time"] = self.lastOpTime
    return json.dumps(dataDic)

  def saveOpTime(self):
    self.lastOpTime = int(round(time.time()))
    self.saveToFile()

  def saveToFile(self):
    cacheFilePath = os.path.join(os.getcwd(), CACHE_FILE)
    with open(cacheFilePath, "r+") as sessionFile:
      sessionFile.seek(0)
      sessionFile.truncate()
      sessionFile.write(self.genJsonStr())

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
  req.add_header("User-Agent", USER_AGENT)
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

def GetSessionID():
  return CACHE_DATA.session

def RefreshSession():
  # session已过期
  if CACHE_DATA.sessionTime < int(round(time.time())) - SAVE_SESSION_TIME:
    CACHE_DATA.session = ""
  oldSession = CACHE_DATA.session
  CACHE_DATA.session = GetSessionIdFromLoginPage(oldSession)
  if CACHE_DATA.session == "":
    print("RefreshSession session expired and get new session failed")
    return ""
  if oldSession != CACHE_DATA.session:
    CACHE_DATA.sessionTime = int(round(time.time()))
  CACHE_DATA.saveToFile()

def Login():
  oldSession = CACHE_DATA.session
  RefreshSession()
  if GetSessionID() == "":
    print("login failed: sessionID is empty")
    return False

  if oldSession != CACHE_DATA.session or CACHE_DATA.lastOpTime < int(round(time.time())) - RELOGIN_TIME:
    CACHE_DATA.saveOpTime()

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
    req.add_header("User-Agent", USER_AGENT)
    print("start Login req")
    with request.urlopen(req, loginData.encode("utf-8")) as response:
      print('Login Status:', response.status, response.reason)
      #thePage = response.read()
      #print(thePage)
      if response.status == 302:
        print("Login OK")
        return True
      else:
        return False
  return True

def GetReservePage():
  if GetSessionID() == "":
    print("GetReservePage failed: sessionID is empty")
    return False

  CACHE_DATA.saveOpTime()

  req = request.Request(RESERVE_PAGE_URL)
  req.add_header("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9")
  req.add_header("Accept-Encoding", "gzip, deflate")
  req.add_header("Accept-Language", "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7")
  req.add_header("Cache-Control", "max-age=0")
  req.add_header("Connection", "keep-alive")
  req.add_header("Cookie", GetCookie(CACHE_DATA.session))
  req.add_header("Referer", LOGIN_PAGE_URL)
  req.add_header("Upgrade-Insecure-Requests", "1")
  req.add_header("User-Agent", USER_AGENT)
  with request.urlopen(req) as response:
    print('GetReservePage url Status:', response.status, response.reason)
    if response.status == 200:
      # 检查下数据，看是否可以预约
      # 不在时间段内，或者剩余车位是0，或者已经预约成功
      theHtmlPage = str(response.read(), "utf-8")
      if theHtmlPage.find("您已预约成功") != -1:
        print("已预约成功")
        return False
      elif theHtmlPage.find("无法预约") != -1:
        print("当前无法预约")
        return False
      else:
        # 定位车位数字信息
        searchCountStr = 'class="pkt-font" style="font-size: 30px; margin: 0; color: #ffffff">'
        countIndex = theHtmlPage.find(searchCountStr)
        if countIndex != -1:
          cutStart = countIndex + len(searchCountStr)
          countStr = theHtmlPage[cutStart : cutStart + 2].split("/")
          if (len(countStr) > 0 and int(countStr[0]) == 0) or len(countStr) == 0:
            print("车位被抢光了")
            return False
        else:
          print("无法定位剩余车位信息")
          return False
      return True
  return False

def GetCode():
  if GetSessionID() == "":
    print("GetCode failed: sessionID is empty")
    return ""

  CACHE_DATA.saveOpTime()

  # 获取验证码
  verifyCode = ""
  req = request.Request(GET_CODE_URL)
  req.add_header("Accept", "image/webp,image/apng,image/*,*/*;q=0.8")
  req.add_header("Accept-Encoding", "gzip, deflate")
  req.add_header("Accept-Language", "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7")
  req.add_header("Connection", "keep-alive")
  req.add_header("Cookie", GetCookie(CACHE_DATA.session))
  req.add_header("Referer", RESERVE_PAGE_URL)
  req.add_header("User-Agent", USER_AGENT)
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

def QueryBlackList():
  if GetSessionID() == "":
    print("QueryBlackList failed: sessionID is empty")
    return False

  CACHE_DATA.saveOpTime()

  req = request.Request(QUERY_BLACKLIST_URL)
  req.add_header("Accept", "*/*")
  req.add_header("Accept-Encoding", "gzip, deflate")
  req.add_header("Accept-Language", "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7")
  req.add_header("Connection", "keep-alive")
  req.add_header("Content-Length", "0")
  req.add_header("Content-Type", "application/x-www-form-urlencoded; charset=utf-8")
  req.add_header("Cookie", GetCookie(CACHE_DATA.session))
  req.add_header("Origin", SVR_HOST)
  req.add_header("Referer", RESERVE_PAGE_URL)
  req.add_header("User-Agent", USER_AGENT)
  req.add_header("X-Requested-With", "XMLHttpRequest")
  with request.urlopen(req, data="") as response:
    print('QueryBlackList url Status:', response.status, response.reason)
    if response.status != 200:
      print("您已在黑名单中")
      return False
    else:
      return True
  return True

def ParkBooking(verifyCode):
  if GetSessionID() == "":
    print("parkBooking failed: sessionID is empty")
    return

  CACHE_DATA.saveOpTime()

  req = request.Request(PARKING_BOOK_URL)
  req.add_header("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9")
  req.add_header("Accept-Encoding", "gzip, deflate")
  req.add_header("Accept-Language", "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7")
  req.add_header("Cache-Control", "max-age=0")
  req.add_header("Connection", "keep-alive")
  req.add_header("Content-Length", "93")
  req.add_header("Content-Type", "application/x-www-form-urlencoded")
  req.add_header("Cookie", GetCookie(CACHE_DATA.session))
  req.add_header("Origin", SVR_HOST)
  req.add_header("Referer", RESERVE_PAGE_URL)
  req.add_header("Upgrade-Insecure-Requests", "1")
  req.add_header("User-Agent", USER_AGENT)

  loginData = parse.urlencode([("user_id", 400), ("area_id", 3), ("license_plate", LICENSE_PLATE), ("booking_time", "tomorrow"), ("validateCode", verifyCode)]).encode("utf-8")
  with request.urlopen(req, loginData) as response:
    print('parkBooking Status:', response.status, response.reason)

def MyRentPage():
  if GetSessionID() == "":
    print("parkBooking failed: sessionID is empty")
    return

  CACHE_DATA.saveOpTime()

  req = request.Request(MY_RENT_PAGE_URL)
  req.add_header("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9")
  req.add_header("Accept-Encoding", "gzip, deflate")
  req.add_header("Accept-Language", "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7")
  req.add_header("Cache-Control", "max-age=0")
  req.add_header("Connection", "keep-alive")
  req.add_header("Cookie", GetCookie(CACHE_DATA.session))
  req.add_header("Referer", RESERVE_PAGE_URL)
  req.add_header("Upgrade-Insecure-Requests", "1")
  req.add_header("User-Agent", USER_AGENT)

  with request.urlopen(req) as response:
    print('MyRentPage Status:', response.status, response.reason)

def Logout():
  pass

# 只识别英文
reader = easyocr.Reader(['en'], gpu = False)
if __name__ == "__main__":
  # 读取文件数据
  cacheFilePath = os.path.join(os.getcwd(), CACHE_FILE)
  with open(cacheFilePath, "r+") as sessionFile:
    CACHE_DATA.loadFromJsonStr(sessionFile.read())

  Login()
  if GetReservePage() == True:
    pass


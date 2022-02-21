# -*- coding: utf-8 -*-
import io
import os
from time import sleep
import time
from urllib import request, parse
import zlib #gzip解压
import brotli #br解压
from parse import parse
import re
from html.parser import HTMLParser

REG_EMAIL = r'[\w\.-]+@[\w\.-]+\.\w+'
USER_AGENT = "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/97.0.4692.99 Safari/537.36"
BOOK_ID = 36836
HOST_URL = "https://www.amz123.com"
PAGE_URL = "https://www.amz123.com/forum-6-{page}.htm?orderby=lastpid"

class MessageParser(HTMLParser):
  def __init__(self):
    HTMLParser.__init__(self)
    self.msgTxt = ""

  def handle_starttag(self, tag, attrs):
    pass
    # print("Encountered a start tag:", tag)

  def handle_endtag(self, tag):
    pass
    # print("Encountered an end tag :", tag)

  def handle_data(self, data):
    self.msgTxt += data + " "
    # print("Encountered some data  :", data)

def GetDetailUrlsFromPage(pageNumber):
  req = request.Request(PAGE_URL.format(page=pageNumber))
  req.add_header("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9")
  req.add_header("Accept-Encoding", "gzip, deflate, br")
  req.add_header("Accept-Language", "en-US,en;q=0.9,zh-CN;q=0.8,zh;q=0.7")
  req.add_header("Connection", "keep-alive")
  req.add_header("Host", "www.amz123.com")
  cookie = '''bbs_sid=60754m28q2bst1j4gmt3bvhrbo; Hm_lvt_b276b2f97e0eb35a0347f6faeec9c1db=1645257339; footer_ad_25=1; Hm_lpvt_b276b2f97e0eb35a0347f6faeec9c1db=1645258744'''
  req.add_header("Cookie", cookie)
  req.add_header("Referer", "https://www.amz123.com/forum-6-104.htm?orderby=lastpid")
  req.add_header("Upgrade-Insecure-Requests", "1")
  req.add_header("User-Agent", USER_AGENT)
  req.add_header("sec-ch-ua", '''" Not;A Brand";v="99", "Google Chrome";v="97", "Chromium";v="97"''')
  req.add_header("sec-ch-ua-mobile", "?0")
  req.add_header("sec-ch-ua-platform", '''"Windows"''')
  req.add_header("Sec-Fetch-Dest", "document")
  req.add_header("Sec-Fetch-Mode", "navigate")
  req.add_header("Sec-Fetch-Site", "same-origin")
  req.add_header("Sec-Fetch-User", "?1")

  DETAIL_TAG_START = "<a href=\"thread-"
  DETAIL_TAG_END = " style="
  urlInfos = []
  with request.urlopen(req) as response:
      resHtml = response.read()
      decompressed_data=zlib.decompress(resHtml, 16+zlib.MAX_WBITS)
      theHtmlPage = decompressed_data.decode("utf-8")
      startIdx = 0
      while startIdx <= len(theHtmlPage) - 1:
        findIdx = -1
        findIdx = theHtmlPage.find(DETAIL_TAG_START, startIdx)
        if findIdx >= 0:
          endIdx = theHtmlPage.find(DETAIL_TAG_END, findIdx)
          if endIdx - findIdx < len(DETAIL_TAG_START) + 12:
            urlStr = "thread-" + theHtmlPage[findIdx+len(DETAIL_TAG_START):endIdx-1]
            startIdx = endIdx
            urlInfos.append(urlStr)
          else:
            startIdx += len(DETAIL_TAG_START)
        else:
          print("page finish, found end")
          break
  return urlInfos

def GetMailFromUrl(url):
  req = request.Request(url)
  req.add_header("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9")
  req.add_header("Accept-Encoding", "gzip, deflate, br")
  req.add_header("Accept-Language", "en-US,en;q=0.9,zh-CN;q=0.8,zh;q=0.7")
  req.add_header("Connection", "keep-alive")
  req.add_header("Host", "www.amz123.com")
  cookie = '''bbs_sid=60754m28q2bst1j4gmt3bvhrbo; Hm_lvt_b276b2f97e0eb35a0347f6faeec9c1db=1645257339; footer_ad_25=1; Hm_lpvt_b276b2f97e0eb35a0347f6faeec9c1db=1645258744'''
  req.add_header("Cookie", cookie)
  req.add_header("Referer", "https://www.amz123.com/forum-6-104.htm?orderby=lastpid")
  req.add_header("Upgrade-Insecure-Requests", "1")
  req.add_header("User-Agent", USER_AGENT)
  req.add_header("sec-ch-ua", '''" Not;A Brand";v="99", "Google Chrome";v="97", "Chromium";v="97"''')
  req.add_header("sec-ch-ua-mobile", "?0")
  req.add_header("sec-ch-ua-platform", '''"Windows"''')
  req.add_header("Sec-Fetch-Dest", "document")
  req.add_header("Sec-Fetch-Mode", "navigate")
  req.add_header("Sec-Fetch-Site", "same-origin")
  req.add_header("Sec-Fetch-User", "?1")

  emailList = []
  pushMsg = ""
  with request.urlopen(req) as response:
      resHtml = response.read()
      decompressed_data=zlib.decompress(resHtml, 16+zlib.MAX_WBITS)
      theHtmlPage = decompressed_data.decode("utf-8")
      # mailFilePath = os.path.join(os.getcwd(), "test.txt")
      # with io.open(mailFilePath, mode="w+", encoding="utf-8") as mailFile:
      #   mailFile.write(theHtmlPage)
      #   mailFile.flush()
      # qq微信支付宝等信息
      titleMatchs = re.findall("<div  class=\"form-control\" >(.*?)</div>", theHtmlPage)
      for match in titleMatchs:
        emailMatch = re.findall(REG_EMAIL, match)
        if len(emailMatch) > 0:
          emailList.extend(emailMatch)
      # 曝光原因
      PUSH_TAG_START = '''<span class="input-group-text">曝光原因和证据：</span>
					</div>'''
      PUSH_TAG_END = '''<div style="margin-top: 30px;">'''
      startIdx = theHtmlPage.find(PUSH_TAG_START)
      if startIdx >= 0:
        endIdx = theHtmlPage.find(PUSH_TAG_END, startIdx)
        pushOriginHtml = theHtmlPage[startIdx+len(PUSH_TAG_START):endIdx]
        parser = MessageParser()
        parser.feed(pushOriginHtml)
        pushMsg = parser.msgTxt.strip()
        emailMatch = re.findall(REG_EMAIL, pushMsg)
        emailList.extend(emailMatch)
      else:
        print("page not found push msg, found end")
  return (emailList, pushMsg)

if __name__ == "__main__":
  mailFilePath = os.path.join(os.getcwd(), "blackEmail.txt")
  with io.open(mailFilePath, mode="a+", encoding="utf-8") as mailFile:
    # mailFile.truncate()
    for page in range(5, 105):
      urlList = GetDetailUrlsFromPage(page)
      for threadId in urlList:
        url = HOST_URL + "/" + threadId
        emailList, pushMsg = GetMailFromUrl(url)
        if len(emailList) > 0:
          oneBlackData = "{page}|{url}|{mail}|{msg}\n".format(page=page, url=url, mail=", ".join(emailList), msg=pushMsg)
          mailFile.write(oneBlackData)
        time.sleep(1.5)
      print("page {0} ok".format(page))
    mailFile.flush()

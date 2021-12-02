# -*- coding: utf-8 -*-
import io
import os
from time import sleep
import time
from urllib import request, parse
import zlib #gzip解压
import brotli #br解压
from parse import parse

USER_AGENT = "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
BOOK_ID = 36836
HOST_URL = "https://www.biquyue.com"
BOOK_URL = "https://www.biquyue.com/book_{book_id}/".format(book_id=BOOK_ID)
BAIDU_URL = "https://www.baidu.com"
LOCAL_FILE_NAME = "{0}.txt".format(BOOK_ID)

class ChapterInfo:
  def __init__(self):
    self.chapterId = 0
    self.chapterUrl = ""
    self.chapterName = ""

def GetChaptersUrl():
  chapterInfos = []
  req = request.Request(BOOK_URL)
  req.add_header("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9")
  req.add_header("Accept-Encoding", "gzip, deflate, br")
  req.add_header("Accept-Language", "en-US,en;q=0.9,zh-CN;q=0.8,zh;q=0.7")
  req.add_header("Connection", "keep-alive")
  req.add_header("Cache-Control", "max-age=0")
  #cookie = '''UM_distinctid=17d02f1154c545-0eee759b95eeb4-57b193e-232800-17d02f1154dabb; CNZZDATA1272851176=819350733-1636573146-https%253A%252F%252Fwww.google.com.hk%252F%7C1636573146; bcolor=; font=; size=; fontcolor=; width=; hitbookid={book_id}; hitme=3'''.format(book_id=BOOK_ID)
  cookie = '''UM_distinctid=17d02f1154c545-0eee759b95eeb4-57b193e-232800-17d02f1154dabb; bcolor=; font=; size=; fontcolor=; width=; hitbookid=36836; hitme=3; CNZZDATA1272851176=819350733-1636428635-https%253A%252F%252Fwww.google.com.hk%252F%7C1636515324'''
  req.add_header("Cookie", cookie)
  req.add_header("Referer", "https://www.google.com.hk")
  req.add_header("Upgrade-Insecure-Requests", "1")
  req.add_header("User-Agent", USER_AGENT)

  CHAPTER_TAG_START = "<dd><a href="
  CHAPTER_TAG_END = "</a></dd>"
  with request.urlopen(req) as response:
      resHtml = response.read()
      theHtmlPage = resHtml.decode("gbk")
      startIdx = 0
      while startIdx <= len(theHtmlPage) - 1:
        findIdx = -1
        findIdx = theHtmlPage.find(CHAPTER_TAG_START, startIdx)
        if findIdx >= 0:
          endIdx = theHtmlPage.find(CHAPTER_TAG_END, findIdx)
          chapterStr = theHtmlPage[findIdx:endIdx+len(CHAPTER_TAG_END)]
          startIdx = endIdx
          # 写入文件
          regRes = parse('''<dd><a href="{}"  >{}</a></dd>''', chapterStr)
          chapterInfo = ChapterInfo()
          chapterInfo.chapterId = regRes[1][len("第"):regRes[1].find("章")]
          chapterInfo.chapterName = regRes[1]
          chapterInfo.chapterUrl = regRes[0]
          chapterInfos.append(chapterInfo)
        else:
          print("page finish, found end")
          break
  return chapterInfos

def GetChapterDetail(chapterInfo: ChapterInfo):
  req = request.Request(HOST_URL + chapterInfo.chapterUrl)
  req.add_header("Accept", "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9")
  req.add_header("Accept-Encoding", "gzip, deflate, br")
  req.add_header("Accept-Language", "en-US,en;q=0.9,zh-CN;q=0.8,zh;q=0.7")
  req.add_header("Connection", "keep-alive")
  req.add_header("Cache-Control", "max-age=0")
  #cookie = '''UM_distinctid=17d02f1154c545-0eee759b95eeb4-57b193e-232800-17d02f1154dabb; CNZZDATA1272851176=819350733-1636573146-https%253A%252F%252Fwww.google.com.hk%252F%7C1636573146; bcolor=; font=; size=; fontcolor=; width=; hitbookid={book_id}; hitme=3'''.format(book_id=BOOK_ID)
  cookie = '''UM_distinctid=17d02f1154c545-0eee759b95eeb4-57b193e-232800-17d02f1154dabb; bcolor=; font=; size=; fontcolor=; width=; hitbookid=36836; hitme=3; CNZZDATA1272851176=819350733-1636428635-https%253A%252F%252Fwww.google.com.hk%252F%7C1636515324'''
  req.add_header("Cookie", cookie)
  req.add_header("Referer", BOOK_URL)
  req.add_header("Upgrade-Insecure-Requests", "1")
  req.add_header("User-Agent", USER_AGENT)

  chapterDetail = ""
  with request.urlopen(req) as response:
      resHtml = response.read()
      theHtmlPage = resHtml.decode("gbk")
      STARG_TAG = '''<div id="content">'''
      END_TAG = '''<br><br></div>'''
      startIdx = theHtmlPage.find(STARG_TAG)
      endIdx = theHtmlPage.find(END_TAG)
      chapterDetail = theHtmlPage[startIdx + len(STARG_TAG): endIdx]
      chapterDetail = str.replace(chapterDetail, "&nbsp;", "")
      chapterDetail = str.replace(chapterDetail, "<br>", "  ")
  return chapterDetail
if __name__ == "__main__":
  chapters = GetChaptersUrl()
  print("len(chapters) = {0}".format(len(chapters)))
  if len(chapters) > 0:
      mailFilePath = os.path.join(os.getcwd(), LOCAL_FILE_NAME)
      with io.open(mailFilePath, mode="w+", encoding="utf-8") as mailFile:
        for v in chapters:
          chapterInfo = v
          #print("id: {0}, name: {1}, url: {2}".format(chapterInfo.chapterId, chapterInfo.chapterName, chapterInfo.chapterUrl))
          chapterDetail = GetChapterDetail(chapterInfo)
          mailFile.write("\n{0}\n".format(chapterInfo.chapterName))
          mailFile.write(chapterDetail)
          mailFile.write("\n")
          time.sleep(0.15)
        mailFile.flush()

    # chapterInfo = ChapterInfo()
    # chapterInfo.id = 1149
    # chapterInfo.chapterName = "第1149章 番外相看(5)"
    # chapterInfo.chapterUrl = "/book_36836/434515.html"
    # chapterDetail = GetChapterDetail(chapterInfo)
    # mailFile.write("\n{0}\n".format(chapterInfo.chapterName))
    # mailFile.write(chapterDetail)
    # mailFile.write("\n")

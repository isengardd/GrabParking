{
  "log": {
    "version": "1.2",
    "creator": {
      "name": "WebInspector",
      "version": "537.36"
    },
    "pages": [
      {
        "startedDateTime": "2020-09-04T14:24:04.520Z",
        "id": "page_4",
        "title": "http://221.178.136.186:8090/pkt/service/reservePage",
        "pageTimings": {
          "onContentLoad": 635.1800000011281,
          "onLoad": 671.9630000006873
        }
      },
      {
        "startedDateTime": "2020-09-04T14:23:37.742Z",
        "id": "page_3",
        "title": "http://221.178.136.186:8090/pkt/service/myPage",
        "pageTimings": {
          "onContentLoad": 502.45299999733106,
          "onLoad": 559.0199999969627
        }
      },
      {
        "startedDateTime": "2020-09-04T14:19:28.027Z",
        "id": "page_2",
        "title": "http://221.178.136.186:8090/pkt/service/parkingBooking",
        "pageTimings": {
          "onContentLoad": 604.0109999994456,
          "onLoad": 602.1479999981239
        }
      },
      {
        "startedDateTime": "2020-09-04T14:17:37.573Z",
        "id": "page_1",
        "title": "http://221.178.136.186:8090/pkt/login/loginProcess",
        "pageTimings": {
          "onContentLoad": 637.7590000010969,
          "onLoad": 690.3889999994135
        }
      }
    ],
    "entries": [
      {
        "_initiator": {
          "type": "script",
          "stack": {
            "callFrames": [
              {
                "functionName": "",
                "scriptId": "475",
                "url": "http://221.178.136.186:8090/pkt/service/myPage",
                "lineNumber": 193,
                "columnNumber": 29
              },
              {
                "functionName": "dispatch",
                "scriptId": "467",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 2,
                "columnNumber": 6443
              },
              {
                "functionName": "r.handle",
                "scriptId": "467",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 2,
                "columnNumber": 3218
              }
            ]
          }
        },
        "_priority": "VeryHigh",
        "_resourceType": "document",
        "cache": {},
        "connection": "2583",
        "pageref": "page_4",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "Upgrade-Insecure-Requests",
              "value": "1"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 584,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Content-Type",
              "value": "text/html;charset=UTF-8"
            },
            {
              "name": "Content-Language",
              "value": "zh-CN"
            },
            {
              "name": "Transfer-Encoding",
              "value": "chunked"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:24:03 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 11831,
            "mimeType": "text/html",
            "compression": -20,
            "text": "\r\n\r\n\r\n\r\n\r\n\r\n<!DOCTYPE html>\r\n<html lang=\"en\">\r\n<head>\r\n\t<meta charset=\"utf-8\">\r\n\t<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">\r\n\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, maximum-scale=1.0,minimum-scale=1.0,user-scalable=0\" />\r\n\t<!-- THE ABOVE 3 META TAGS *MUST* COME FIRST IN THE HEAD -->\r\n\t<meta name=\"description\" content=\"\">\r\n\t<meta name=\"author\" content=\"\">\r\n\t<title>预约</title>\r\n\t<!-- CORE CSS -->\r\n\t<!-- LAYER -->\r\n\t<!-- Custom styles for this template -->\r\n\t<link rel=\"stylesheet\" href=\"/pkt/resources/css/pkt.css\" />\r\n\t<link rel=\"stylesheet\" href=\"/pkt/resources/css/signin.css\" />\r\n\r\n\t<!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->\r\n\t<!--[if lt IE 9]>\r\n\t<script src=\"resources/js/html5shiv.min.js\"></script>\r\n\t<script src=\"resources/js/respond.min.js\"></script>\r\n\r\n\t<!-- CORE JAVASCRIPT -->\r\n\t<script src=\"/pkt/resources/js/phone.js\"></script>\r\n\t<script src=\"/pkt/resources/js/jquery.min.js\"></script>\r\n\t<script src=\"/pkt/resources/js/jquery.migrate.js\"></script>\r\n\t<script>\r\n\r\n\t\t// HANDLE SIDEBAR MENU COLLAPSE/EXPAND.\r\n\t\tif ($('.left-nav-toggle a')) {\r\n\t\t\t$('.left-nav-toggle a').on('click', function(event) {\r\n\t\t\t\tevent.preventDefault();\r\n\t\t\t\t$(\"body\").toggleClass(\"nav-toggle\");\r\n\t\t\t});\r\n\t\t}\r\n\r\n\t\t// FULLSCREEN\r\n\t\tif ($('#request-fullscreen')) {\r\n\t\t\t$('#request-fullscreen').click(function() {\r\n\t\t\t\tscreenfull.toggle($('#container')[0]);\r\n\t\t\t});\r\n\t\t}\r\n\t</script>\r\n\r\n\t<![endif]-->\r\n</head>\r\n\r\n<body>\r\n\t<header id=\"header\">\r\n\t\t\r\n\r\n\t</header>\r\n\r\n\t<section id=\"sidemenu\">\r\n\t\t\r\n\r\n\t</section>\r\n\r\n\t<section id=\"site-content\">\r\n\t\t\r\n\r\n\r\n\r\n\r\n\r\n<!DOCTYPE html>\r\n<html lang=\"en\">\r\n<head>\r\n    <meta charset=\"utf-8\">\r\n    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1, shrink-to-fit=no\">\r\n    <meta name=\"description\" content=\"\">\r\n    <meta name=\"author\" content=\"\">\r\n\r\n    <title>车位共享管理系统</title>\r\n\r\n</head>\r\n\r\n<style>\r\n    html {\r\n        height: 100%;\r\n        display: table;\r\n    }\r\n\r\n    body {\r\n        display: table-cell;\r\n        height: 100%;\r\n    }\r\n</style>\r\n<body>\r\n<form id=\"command\" name=\"areaForm\" action=\"area_manage\" method=\"post\">\r\n    <input type=\"hidden\" name=\"user_id\" value=\"400\">\r\n    <input type=\"hidden\" name=\"area_id\" value=\"3 \">\r\n<div class=\"pkt-container\">\r\n    <input type=\"hidden\" name=\"\" value=\"\" />\r\n    <div class=\"layers js-layers\">\r\n        <!-- Header -->\r\n        <div class=\"pkt-div pkt-black\" style=\"top: 0; left: 0; width: 100%; height: 55px;\"></div>\r\n\r\n        <!-- 预约 -->\r\n        <div class=\"pkt-div\" style=\"top: 8px; text-align:center;  width: 100%;\">\r\n            <p class=\"pkt-font\" style=\"font-size: 30px; margin: 0;\">预约</p>\r\n        </div>\r\n\r\n        <!-- 可预约背景 -->\r\n        <div class=\"pkt-div\" style=\"top: 54px; left: 0; width: 100%; height: 96px;background-color: #383D49;\">\r\n            \r\n                <!-- 可预约数 / 总数 -->\r\n\r\n                \r\n                    \r\n                        <div  style=\" text-align:center; width: 100%; height: 30px;margin-top: 10px\">\r\n                            \r\n                                \r\n                                \r\n                                    <p id=\"ratio\" class=\"pkt-font\" style=\"font-size: 30px; margin: 0; color: #ffffff\">19/28</p>\r\n                                \r\n                            \r\n                        </div>\r\n                    \r\n                    \r\n                \r\n\r\n                <div  style=\" text-align:center; width: 100%; height: 14px;margin-top: 20px\">\r\n                    <p class=\"pkt-font\" style=\"font-size: 16px; margin: 0; color: #ffffff\">剩余车位</p>\r\n                </div>\r\n        </div>\r\n\r\n        <!-- 剩余车位 Text -->\r\n\r\n        <!-- 灰色背景 下部 -->\r\n        \r\n\r\n        <!-- 白色背景 下部 -->\r\n        <div class=\"pkt-div\" style=\"top: 149px; width: 100%; height: 374px; background-color: #ffffff;\">\r\n            <!-- 预约开放时间 Text -->\r\n            <div class=\"pkt-div\" style=\"top: 22px; left: 27px; width: 93px; height: 14px;\">\r\n                <p class=\"pkt-font\" style=\"font-size: 14px; margin: 0; color: #000000\">预约开放时间</p>\r\n            </div>\r\n            <!-- 预约开放时间 -->\r\n            <div class=\"pkt-div\" style=\"top: 24px; left: 136px; width: 103px; height: 13px;\">\r\n                <p class=\"pkt-font\" style=\"font-size: 13px; margin: 0; color: #000000\">18:00 - 08:00</p>\r\n            </div>\r\n\r\n            <!-- 停车位置 Text -->\r\n            <div class=\"pkt-div\" style=\"top: 69px; left: 27px; width: 93px; height: 14px;\">\r\n                <p class=\"pkt-font\" style=\"font-size: 14px; margin: 0; color: #000000\">停车位置</p>\r\n            </div>\r\n            <!-- 停车位置 -->\r\n            <div class=\"pkt-div\" style=\"top: 71px; left: 135px; width: 118px; height: 13px;\">\r\n                <p class=\"pkt-font\" style=\"font-size: 13px; margin: 0; color: #000000\"> B016-C081</p>\r\n            </div>\r\n\r\n            <!-- 预约时间 Text -->\r\n            <div class=\"pkt-div\" style=\"top: 140px; left: 27px; width: 93px; height: 14px;\">\r\n                <p class=\"pkt-font\" style=\"font-size: 14px; margin: 0; color: #000000\">预约时间</p>\r\n            </div>\r\n            \r\n                \r\n                \r\n                    <!-- 明日 Text -->\r\n                    <div class=\"pkt-div\" style=\"top: 194px; left: 27px; width: 175px; height: 15px;\">\r\n                        <p class=\"pkt-font\" style=\"font-size: 15px; margin: 0; color: #000000\">明日(停车有效期至24点)</p>\r\n                    </div>\r\n                \r\n            \r\n\r\n            <!-- 选择车牌号 -->\r\n            <div class=\"pkt-div\" style=\"top: 251px; left: 27px; width: 78px; height: 14px;\">\r\n                <p class=\"pkt-font\" style=\"font-size: 14px; margin: 0; color: #000000\">选择车牌号</p>\r\n            </div>\r\n\r\n            <!-- 车牌号 select -->\r\n            <select class=\"pkt-div pkt-select pkt-font\"  name=\"license_plate\" style=\"top: 252px; left: 220px; width: 125px; height: 31px; color: #000000\">\r\n                \r\n                \r\n                \r\n                \r\n                    <option value=\"苏E5P623\">苏E5P623</option>\r\n                \r\n                \r\n            </select>\r\n\r\n            <!-- 车牌号下拉 -->\r\n            <div class=\"pkt-div\" style=\"top: 252px; left: 325px; width: 15px; height: 15px; pointer-events: none;\">\r\n                <img src=\"/pkt/resources/images/reserve/drilldown.png\" width=\"15px\" height=\"15px\"/>\r\n            </div>\r\n\r\n            \r\n            \r\n                \r\n            \r\n            \r\n                \r\n            \r\n\r\n            <!-- 黄点 -->\r\n            \r\n                \r\n            \r\n            \r\n                \r\n            \r\n\r\n            \r\n            \r\n                \r\n            \r\n\r\n\r\n            \r\n                \r\n                \r\n                    <!-- 明日图标 -->\r\n                    <input type=\"hidden\" name=\"booking_time\" value=\"tomorrow\">\r\n                    \r\n                        \r\n                    \r\n                \r\n            \r\n\r\n            <!-- 预约button -->\r\n            \r\n                \r\n                    <div class=\"pkt-div\" style=\"top: 320px; left: 0; text-align:center;  width: 100%; height: 59px; background-color: #3ca86e\">\r\n                        <div class=\"pkt-div\" style=\"top: 22px;text-align:center;  width: 100%;height: 15px;\">\r\n                            <a class=\"pkt-font\" style=\"font-size: 15px; margin: 0; color: #ffffff\">您已预约成功</a>\r\n                        </div>\r\n                    </div>\r\n                \r\n                \r\n                \r\n                \r\n            \r\n        </div>\r\n\r\n        <!-- 横线 -->\r\n        <div class=\"pkt-div pkt-line\" style=\"top: 272px;text-align:center;  width: 100%;\"></div>\r\n        <div class=\"pkt-div pkt-line\" style=\"top: 330px;text-align:center;  width: 100%;\"></div>\r\n        <div class=\"pkt-div pkt-line\" style=\"top: 455px;text-align:center;  width: 100%;\"></div>\r\n\r\n        <div class=\"pkt-div pkt-line\" style=\"top: 655px;text-align:center;  width: 100%;\"></div>\r\n\r\n        <div >\r\n\r\n\r\n        </div>\r\n        \r\n    </div>\r\n</div>\r\n<div>\n</div></form>\r\n</body>\r\n</html>\r\n\r\n<script type=\"text/javascript\">\r\n    var verifyCode ;\r\n    var $rentForm = $(\"[name='areaForm']\");\r\n    var contextPath = '/pkt';\r\n    $(document).ready(function() {\r\n        $buttonReserve.empty().append($buttonReserveImgH);\r\n    }); \r\n\t$(document).keydown(function(event){\r\n\t  switch(event.keyCode){\r\n\t\t case 13:return false; \r\n\t\t }\r\n\t});\r\n    if(false) {\r\n        alert(\"无车位可预约！\");\r\n    }\r\n\r\n    if(false) {\r\n        alert(\"当前系统繁忙!请重试\");\r\n    }\r\n\r\n    if(false) {\r\n        alert(\"不在预约时间,不能预约!\");\r\n    }\r\n    if(false) {\r\n        alert(\"验证码不正确或已过期!\");\r\n    }\r\n    if(false) {\r\n        alert(\"您在黑名单,不能预约！\");\r\n    }\r\n\r\n    // 预约\r\n    $('#rent').live('click', function(e) {\r\n        if(!$(\"#verifyCode\").val()){\r\n            alert(\"请输入验证码\");\r\n            return;\r\n         }\r\n        var  license_plate = $(\"[name='license_plate']\").val();\r\n        var  booking_time = $(\"[name='booking_time']\").val();\r\n        var isBlacklist = false;\r\n        $(this).attr('id','unrent');\r\n        $.ajax({\r\n            url: '/pkt/service/isBlacklist?booking_time=' + booking_time + '&licensePlate=' + encodeURI(encodeURI(license_plate)),\r\n            method: 'post',\r\n            async: false,\r\n            cache: false,\r\n            contentType: 'application/x-www-form-urlencoded; charset=utf-8',\r\n            success: function (data) {\r\n                if (!data.isSuccess) {\r\n                    isBlacklist = true;\r\n                }\r\n            },\r\n            error: function (err) {\r\n                console.log(err);\r\n            }\r\n        });\r\n\r\n        if(isBlacklist) {\r\n            alert(\"您在黑名单,不能预约！\");\r\n            window.location.reload();\r\n        } else {\r\n            $rentForm.attr(\"action\", \"parkingBooking\");\r\n            $rentForm.submit();\r\n        }\r\n    });\r\n\r\n    function reloadValidateCode(){\r\n    \tvar randomNumber = new Date()+Math.floor(Math.random() * Math.pow(10, 8));\r\n        $(\"#validateCodeImg\").attr(\"src\",\"/pkt/service/getCode?random=\"+randomNumber);\r\n    }\r\n    \r\n    \r\n    \r\n\r\n    \r\n        \r\n        \r\n        \r\n    \r\n\r\n    \r\n        \r\n        \r\n        \r\n    \r\n</script>\r\n\t</section>\r\n\r\n\t<footer id=\"footer\">\r\n\t\t\r\n\r\n\r\n\r\n<!-- 背景黑 -->\r\n<div class=\"pkt-div pkt-black\" style=\"z-index:99999; position:fixed; bottom:0; left: 0; width: 100%; height: 50px;\">\r\n    <!-- 预约 -->\r\n    <div id=\"button_reserve\" class=\"pkt-div\" style=\"cursor:pointer; width: 50%; height: 40px;text-align:center;\">\r\n        <img src=\"/pkt/resources/images/reserve/button_reserve_n.png\" width=\"40px\" height=\"40px\"/>\r\n    </div>\r\n\r\n    <!-- 我的 -->\r\n    <div id=\"button_my\" class=\"pkt-div\" style=\"cursor:pointer; width: 50%; height: 40px;right: 0;text-align:center;\">\r\n        <img src=\"/pkt/resources/images/reserve/button_my_n.png\" width=\"40px\" height=\"40px\"/>\r\n    </div>\r\n\r\n</div>\r\n\r\n\r\n\t</footer>\r\n</body>\r\n</html>\r\n\r\n<script type=\"text/javascript\">\r\n    var $buttonReserve = $('#button_reserve');\r\n    var $buttonMy = $('#button_my');\r\n\r\n    // 不能删\r\n    var $buttonReserveImgH = '<img src=\"/pkt/resources/images/reserve/button_reserve_h.png\" width=\"40px\" height=\"40px\"/>';\r\n    var $buttonMyH = '<img src=\"/pkt/resources/images/reserve/button_my_h.png\" width=\"40px\" height=\"40px\"/>';\r\n\r\n    $buttonReserve.click(function() {\r\n        window.location.href = '/pkt/service/reservePage';\r\n    });\r\n\r\n    $buttonMy.click(function() {\r\n        window.location.href = '/pkt/service/myPage';\r\n    });\r\n</script>\r\n"
          },
          "redirectURL": "",
          "headersSize": 357,
          "bodySize": 11851,
          "_transferSize": 12208,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:24:04.495Z",
        "time": 181.13000000084867,
        "timings": {
          "blocked": 24.930999999924097,
          "dns": 0,
          "ssl": -1,
          "connect": 19.237,
          "send": 1.1070000000000029,
          "wait": 68.05299999953155,
          "receive": 67.80200000139303,
          "_blocked_queueing": 24.930999999924097
        }
      },
      {
        "_initiator": {
          "type": "script",
          "stack": {
            "callFrames": [
              {
                "functionName": "",
                "scriptId": "214",
                "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
                "lineNumber": 481,
                "columnNumber": 28
              },
              {
                "functionName": "dispatch",
                "scriptId": "209",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 2,
                "columnNumber": 6443
              },
              {
                "functionName": "r.handle",
                "scriptId": "209",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 2,
                "columnNumber": 3218
              }
            ]
          }
        },
        "_priority": "VeryHigh",
        "_resourceType": "document",
        "cache": {},
        "connection": "2504",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "Upgrade-Insecure-Requests",
              "value": "1"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 583,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Content-Type",
              "value": "text/html;charset=UTF-8"
            },
            {
              "name": "Content-Language",
              "value": "zh-CN"
            },
            {
              "name": "Content-Length",
              "value": "6286"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 6286,
            "mimeType": "text/html",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 351,
          "bodySize": 6286,
          "_transferSize": 6637,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.733Z",
        "time": 97.64500000164844,
        "timings": {
          "blocked": 9.76800000343006,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 9.863000000000001,
          "wait": 42.0599999991809,
          "receive": 35.95399999903748,
          "_blocked_queueing": 8.908000003430061
        }
      },
      {
        "_initiator": {
          "type": "other"
        },
        "_priority": "VeryHigh",
        "_resourceType": "document",
        "cache": {},
        "connection": "2379",
        "pageref": "page_2",
        "request": {
          "method": "POST",
          "url": "http://221.178.136.186:8090/pkt/service/parkingBooking",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "Content-Length",
              "value": "93"
            },
            {
              "name": "Cache-Control",
              "value": "max-age=0"
            },
            {
              "name": "Upgrade-Insecure-Requests",
              "value": "1"
            },
            {
              "name": "Origin",
              "value": "http://221.178.136.186:8090"
            },
            {
              "name": "Content-Type",
              "value": "application/x-www-form-urlencoded"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 725,
          "bodySize": 93,
          "postData": {
            "mimeType": "application/x-www-form-urlencoded",
            "text": "user_id=400&area_id=3+&license_plate=%E8%8B%8FE5P623&booking_time=tomorrow&validateCode=ijnaw",
            "params": [
              {
                "name": "user_id",
                "value": "400"
              },
              {
                "name": "area_id",
                "value": "3+"
              },
              {
                "name": "license_plate",
                "value": "%E8%8B%8FE5P623"
              },
              {
                "name": "booking_time",
                "value": "tomorrow"
              },
              {
                "name": "validateCode",
                "value": "ijnaw"
              }
            ]
          }
        },
        "response": {
          "status": 302,
          "statusText": "Found",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Location",
              "value": "/pkt/service/myRentPage"
            },
            {
              "name": "Content-Language",
              "value": "zh-CN"
            },
            {
              "name": "Content-Length",
              "value": "0"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 0,
            "mimeType": "x-unknown",
            "compression": 0
          },
          "redirectURL": "/pkt/service/myRentPage",
          "headersSize": 347,
          "bodySize": 0,
          "_transferSize": 347,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.020Z",
        "time": 75.66299999962212,
        "timings": {
          "blocked": 12.01500000282633,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.2680000000000007,
          "wait": 56.807999998381824,
          "receive": 6.571999998413958,
          "_blocked_queueing": 7.391000002826331
        }
      },
      {
        "_initiator": {
          "type": "other"
        },
        "_priority": "VeryHigh",
        "_resourceType": "document",
        "cache": {},
        "connection": "2379",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "Cache-Control",
              "value": "max-age=0"
            },
            {
              "name": "Upgrade-Insecure-Requests",
              "value": "1"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 614,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Content-Type",
              "value": "text/html;charset=UTF-8"
            },
            {
              "name": "Content-Language",
              "value": "zh-CN"
            },
            {
              "name": "Transfer-Encoding",
              "value": "chunked"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 26918,
            "mimeType": "text/html",
            "compression": -36
          },
          "redirectURL": "",
          "headersSize": 357,
          "bodySize": 26954,
          "_transferSize": 27311,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.096Z",
        "time": 177.68200000136858,
        "timings": {
          "blocked": 9.374000000320608,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 1.848,
          "wait": 44.847000001705254,
          "receive": 121.61299999934272,
          "_blocked_queueing": 7.663000000320608
        }
      },
      {
        "_initiator": {
          "type": "other"
        },
        "_priority": "VeryHigh",
        "_resourceType": "document",
        "cache": {},
        "connection": "2267",
        "pageref": "page_1",
        "request": {
          "method": "POST",
          "url": "http://221.178.136.186:8090/pkt/login/loginProcess",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "Content-Length",
              "value": "33"
            },
            {
              "name": "Cache-Control",
              "value": "max-age=0"
            },
            {
              "name": "Upgrade-Insecure-Requests",
              "value": "1"
            },
            {
              "name": "Origin",
              "value": "http://221.178.136.186:8090"
            },
            {
              "name": "Content-Type",
              "value": "application/x-www-form-urlencoded"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/login/loginPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 717,
          "bodySize": 33,
          "postData": {
            "mimeType": "application/x-www-form-urlencoded",
            "text": "username=mabaolai&password=123456",
            "params": [
              {
                "name": "username",
                "value": "mabaolai"
              },
              {
                "name": "password",
                "value": "123456"
              }
            ]
          }
        },
        "response": {
          "status": 302,
          "statusText": "Found",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Location",
              "value": "/pkt/service/reservePage"
            },
            {
              "name": "Content-Language",
              "value": "zh-CN"
            },
            {
              "name": "Content-Length",
              "value": "0"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 0,
            "mimeType": "x-unknown",
            "compression": 0
          },
          "redirectURL": "/pkt/service/reservePage",
          "headersSize": 348,
          "bodySize": 0,
          "_transferSize": 348,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.570Z",
        "time": 85.40099999840487,
        "timings": {
          "blocked": 9.784999999065883,
          "dns": 0.07000000000000028,
          "ssl": -1,
          "connect": 32.032000000000004,
          "send": 0.5769999999999982,
          "wait": 35.11000000170618,
          "receive": 7.826999997632811,
          "_blocked_queueing": 3.5219999990658835
        }
      },
      {
        "_initiator": {
          "type": "other"
        },
        "_priority": "VeryHigh",
        "_resourceType": "document",
        "cache": {},
        "connection": "2267",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "Cache-Control",
              "value": "max-age=0"
            },
            {
              "name": "Upgrade-Insecure-Requests",
              "value": "1"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/login/loginPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 611,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Content-Type",
              "value": "text/html;charset=UTF-8"
            },
            {
              "name": "Content-Language",
              "value": "zh-CN"
            },
            {
              "name": "Transfer-Encoding",
              "value": "chunked"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 12998,
            "mimeType": "text/html",
            "compression": -21
          },
          "redirectURL": "",
          "headersSize": 357,
          "bodySize": 13019,
          "_transferSize": 13376,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.655Z",
        "time": 148.85900000081165,
        "timings": {
          "blocked": 16.75099999950873,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.29100000000000037,
          "wait": 65.52200000076624,
          "receive": 66.29500000053667,
          "_blocked_queueing": 8.659999999508727
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 19
        },
        "_priority": "VeryHigh",
        "_resourceType": "stylesheet",
        "cache": {},
        "connection": "2267",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/css/pkt.css",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/css,*/*;q=0.1"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 455,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"4282-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "text/css;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "4282"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 4282,
            "mimeType": "text/css",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 423,
          "bodySize": 4282,
          "_transferSize": 4705,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.823Z",
        "time": 39.92699999798788,
        "timings": {
          "blocked": 3.673000000353437,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.279,
          "wait": 34.37500000167405,
          "receive": 1.5999999959603883,
          "_blocked_queueing": 2.967000000353437
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 20
        },
        "_priority": "VeryHigh",
        "_resourceType": "stylesheet",
        "cache": {},
        "connection": "2271",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/css/signin.css",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/css,*/*;q=0.1"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 458,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"775-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "text/css;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "775"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 775,
            "mimeType": "text/css",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 421,
          "bodySize": 775,
          "_transferSize": 1196,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.825Z",
        "time": 41.940000002796296,
        "timings": {
          "blocked": 4.156000001823064,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.2340000000000002,
          "wait": 36.407999999991155,
          "receive": 1.1420000009820797,
          "_blocked_queueing": 2.520000001823064
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 28
        },
        "_priority": "High",
        "_resourceType": "script",
        "cache": {},
        "connection": "2267",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/phone.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 440,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"1899-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "1899"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 1899,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 437,
          "bodySize": 1899,
          "_transferSize": 2336,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.827Z",
        "time": 71.1699999992561,
        "timings": {
          "blocked": 37.10499999879557,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.45999999999999375,
          "wait": 32.3419999985334,
          "receive": 1.2630000019271392,
          "_blocked_queueing": 1.962999998795567
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 29
        },
        "_priority": "High",
        "_resourceType": "script",
        "cache": {},
        "connection": "2271",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 445,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"84324-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "84324"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 84324,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 439,
          "bodySize": 84324,
          "_transferSize": 84763,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.829Z",
        "time": 308.7000000014086,
        "timings": {
          "blocked": 39.477000002379526,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.9370000000000047,
          "wait": 37.18600000178814,
          "receive": 231.09999999724096,
          "_blocked_queueing": 2.930000002379529
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 30
        },
        "_priority": "High",
        "_resourceType": "script",
        "cache": {},
        "connection": "2289",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.migrate.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 449,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"7200-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "7200"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 7200,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 437,
          "bodySize": 7200,
          "_transferSize": 7637,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.830Z",
        "time": 123.012000000017,
        "timings": {
          "blocked": 27.120999999169726,
          "dns": 0,
          "ssl": -1,
          "connect": 11.635,
          "send": 0.47000000000000064,
          "wait": 42.186000000375785,
          "receive": 41.60000000047148,
          "_blocked_queueing": 27.120999999169726
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 189
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2289",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/drilldown.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 493,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"1186-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "1186"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 1186,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAABwAAAAcCAYAAAByDd+UAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpCNkNDRTRBRjU5MUUxMUU4ODhGQkIzMThDOTVDMzY3MyIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpCNkNDRTRCMDU5MUUxMUU4ODhGQkIzMThDOTVDMzY3MyI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkI2Q0NFNEFENTkxRTExRTg4OEZCQjMxOEM5NUMzNjczIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkI2Q0NFNEFFNTkxRTExRTg4OEZCQjMxOEM5NUMzNjczIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+rzVH/wAAARdJREFUeNpi/P//PwM9ARMDncGohUPfQhZkztmzZ02A1HQgVqKS+e+AuMLY2HgtVguBoA+ITajoISEgngLEa3EF6UcahOInfHFYha6ACqAcp4XAsL4MpLKpaFk30MwNeFMpUMESILWCCpZdAOJaYrNFLhCfpzB1JgId/xNdghFX4Q3MImpA6gQQC5JoGchAX6BlW0nK+EANt6CJiFQwA5dlBEsaoMYZQGolCZaBoqGU0qItC4jvEaEOFF9JQEd+pchCoAGgBBAOxF8JKM0Aqr1AlcIbaNAZIFWER8lUoJoFVK0tgAbOAlIbsUjdQC9NqFk9occnUfFGtoVAg58BKT9o/rwGxGFAseOkmME42mobtXDQWwgQYAAjaEX2GlQ7LAAAAABJRU5ErkJggg==",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 1186,
          "_transferSize": 1610,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.838Z",
        "time": 167.44499999913387,
        "timings": {
          "blocked": 123.74499999760627,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 1.662,
          "wait": 39.81899999974039,
          "receive": 2.219000001787208,
          "_blocked_queueing": 122.66099999760627
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 236
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2289",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/service/getCode",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 470,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "Thu, 01 Jan 1970 00:00:00 GMT"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Transfer-Encoding",
              "value": "chunked"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 906,
            "mimeType": "text/plain",
            "compression": -23,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAJYAAAAoCAIAAACTo5SwAAADUUlEQVR42u3bQWtUMRAA4Pff+h8U9OJP8GAP0otHaRUFT2JdsGzFkwc9tJTSQ0GwiL14UYQe6slDD1JRPG0DgSFMkslMMsnLq28Yym7ydtvuR5KZbXdYzTGFOPu5DYmmhvnVaRyH+7tuMvGIETHhqx/nJo+ev4GcVUR+yRGklZwapH7mq2Wzt+HuHBl+ScUqhAAGhFNRPP/8Lpjj+tGzyoTuEkSKnRPSVOWQB5ffUGoRKp+FPpiP2qef4mVBP85gNqFmRYp2zqmUM1UJg37BqUJCIjIJYyPM2NlZuDlRQsJPpFjiJyPc3H7xerl00450SHhnc8vNmxv3TOqehUk/piKMLB/fDaYOoQvWOSHC8yG1KtI8wmBrH8NjQg4cPF1C5KdISPi5qfK9sglRcPxoxYHpV4+wsV9XhHw/QnFg+lkqt34xt/vZRWmnGorlhEmhIsKgn0+oWI4WuiaFCgl3b225iXiCs9IlmH0NixA1EjZV/IhU9CskjAlZJDTrA49AGPSLrct6hHzFEQlNPL3xIMMvYyMVlDO+VixVCMsr1XEJzYhRhIy9R1qpHC0lVC9HVQjVz8IkITFbrihu7UV+UsXkOtMiVOwrRH41CJOKA7+QKT8URX4lFY1iX1hvCZZ3hJmEzGua7aK1W/tKhNKOUFDOTJeQOBS7Inx7eGDy0f3bkOZudkdx3QgJ17X1DZuL/Y9aflJCixe0gakWhJX8qr7xZuTcJchXVFyCrlDMBinqECKkZrVMBlVsU0V+NpiKfMJnaw+P3/+2SfvRTX1wmVbsC0fvCJOFTNCPr0j0DMjPnfIVk4SQ5mhs19rzX+LLi08mxyX0HxUk/Hq6Bxkk9NP6oTWap5jhJ/hLRYmfFVq8fFLpIEwSBh+FCIENjTAJ0ZPHttPYiWhLU/1/vCjfPK0fCIFim46QWG2+X+zJfUV3Iw0uQUIRICFjePxfv+7HYoAweLdZIDAflSYknjnmRE/pxn9BaNkgRU4zYS+EdMyEkyckypnkA4NUzfxWDT4iCmw9+8WaCk5cf0LoC/nXfzn7bnM1kUBgUr+Lkz9+9kUoClduWorEG2w0nnSqa0LfbEKK0uAIca6ZCfv1Y1459Oznj//7tWey8Q92+uEvZIeEV8vh39WN4LytAAAAAElFTkSuQmCC",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 283,
          "bodySize": 929,
          "_transferSize": 1212,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.839Z",
        "time": 219.38399999999092,
        "timings": {
          "blocked": 173.2139999994037,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.6500000000000001,
          "wait": 44.11400000118115,
          "receive": 1.405999999406049,
          "_blocked_queueing": 171.84099999940372
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 367
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2289",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/button_reserve_n.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 500,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2411-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2411"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2411,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAFQAAABUCAYAAAAcaxDBAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDozRDI5NEVCOTUwMTUxMUU4QUM2RUE4OEUzQjU0OTNFNCIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDozRDI5NEVCQTUwMTUxMUU4QUM2RUE4OEUzQjU0OTNFNCI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjNEMjk0RUI3NTAxNTExRThBQzZFQTg4RTNCNTQ5M0U0IiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjNEMjk0RUI4NTAxNTExRThBQzZFQTg4RTNCNTQ5M0U0Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+uPSflwAABeBJREFUeNrsXFuI3UQY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",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2411,
          "_transferSize": 2835,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.840Z",
        "time": 272.06200000000536,
        "timings": {
          "blocked": 227.36600000175437,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.9950000000000001,
          "wait": 41.33400000093016,
          "receive": 2.366999997320818,
          "_blocked_queueing": 225.66500000175438
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 372
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2289",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/button_my_n.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 495,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2296-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2296"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2296,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAFQAAABUCAYAAAAcaxDBAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDo2QTFENjg0RjUwMTUxMUU4QUE3NUQzNDYxQjAzREFEOSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDo2QTFENjg1MDUwMTUxMUU4QUE3NUQzNDYxQjAzREFEOSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjZBMUQ2ODRENTAxNTExRThBQTc1RDM0NjFCMDNEQUQ5IiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjZBMUQ2ODRFNTAxNTExRThBQTc1RDM0NjFCMDNEQUQ5Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+XPLFCgAABW1JREFUeNrsXF2IFEcQ7jmNvwmiUfPgH96qQUOi4kMgEIjcrmggSIKCklfZzVNeJJxKJOZBRUIC5m2XBAIRDLkXCeRBbxE5RLkYkyj+crnVmB9JIuqdORUu3qTKq/HqOjP7M7szPT9V8HE1u9PdM99UV1VXz55l27YSaZ20CQVCqBAqhIoIoUKot7wCOAS4BhgEDAEGAD8DvgCsiTKhVoTSptVE2It4XVXOwws+B9gKuCIW6i6dgDOAl2qQqej7VYDzgHfEQv8v+wA7tc9+AXQBugF3AHMA6wCbAPO0c3cADkSGUSTUIN4CjNhjch+wrUabdwEPWRts32H4Pp7ApIVOAtwCPEPH9wArKRjVEnQNvYApdIz9PAcYSbMP3cvIRCJydZKpyH9upACFMpv8cKp9KFrVs6QfAbzpo4/jgLWk/+HiX1NDKEbpHyhi4wU8D+jz0c/LgNPUD1r5kgasPFFTfh1Lj275JFORHx1k97I2rT50GdN/a7Kvvzz6TRWhTzH9YZN93Wf65LQSeo/pM5rsaybTB9JK6FmmL2iin4mAuez4p7QSeowl4ZiLrvfZzxaW3A8DTqQ5D+2jNAflMmCFjz5wzb+Q9HOUjqV2pfQh05cDPmiw/SeMTJRdUhyx7YtakWN7ne32aEWV3qgUR0xfwDyqMHE5Bljscf4yQI92/gBgllSbxgS3PMqAqeyzR4AK4EfAbYrkWNFfpLmpIWp/Pirl0KhsgWSIlGkNtOkHdFBgioyY3gJBAouUl06ts83fgN2UIUSKTCcxNhnl3/MgcoSm8x0qfvwOuERlvh4VYTFB6Cwi5QXt82HymV8BvqEp3YhgDvoR4JSPFCy2aRNG6btalMb9oc8Ac5vs+wbrs8dUlA/Thy4iX8mLId8BFgO2aWU4P3KX6a9S5pDYoISuBffdn3YmBuBjNVpxv9miMV6j5acjHUamfkhT4ag2zXcFONZVNs4wYEHSVkqva2R+HvB4uGp6wMYrJ22l9CtgPuk3yJcGLTjV97AUrD2snDVoH/oGIxOf3Nsh5rh88+79pASl3Uy/CDgZYng4zPSNSSAUI/pKdrw/5Hj7qRr/ZsmKuBOKb4JMIh13Nr8OmdBLVKl6XAQKy0qDJHQD068C/jWQZ1/Q8tRYE7qa6acMrazPMH1p3Anl27unDRH6vVaUiTWh05neZ4jQ60yfEndCJ7DE+k9DhN5WY/v/E+JOaBsjdMgQoYOM0La4E2qxFdI/hgh9wK7DijuhX6rRLYyDavwbcmFb6LdqdDegN4wBLfm9fLzW8kKoiBAqhAqhIkKoECqEigihQqgQKoQaHj+rRqtRxSbadvv8PvaE5ukGHWRdzsGbr/e9UHwI+B5+zuP7zfQ3lwRCsxp5jhVaDCj6K4fOP2OpZrX99H07QR+DX4NyuQ4HsSK0rJFX8jjH7TP8AUOBLDpfZ/+Wy2xQLudYZNWVoAg1+Y59NSl5PATVgDsopDnKt7ewryJ7KKFLUBba70GSXcPnukmF3EAj/rtE15BJioVmPHxoNZ9meSDjY+wueqDdaZzyXgGimUhcJh+a9QhslSQR2q/lohUX92Br/rCetMwtsGHfnUmy0CLdbJ4RVWDTGS3pLEt1uC/NVYnUtdImRwr0sIpxJ7SbEaP70LLH9Csyn2ep1vzOqEzIx53QHJFSqPOmK5rlcffQrHUdoH6zLEVLbGKf1SJxl0t+2t4iK010lOeVoDJLn9zW4l0qRhKWhfJp5iT9BW01k2ER22KWWWrxg1Rq/P+Nig2h+mqpwIjzEksLaCUfK6tq0hl0HhokoX6XffXUL8su59kuKVveI5UKzKfK23cJXHoKoSJCqBAqhIo8lv8EGAD34kdWIhlTwQAAAABJRU5ErkJggg==",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2296,
          "_transferSize": 2720,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:37.840Z",
        "time": 336.44499999718397,
        "timings": {
          "blocked": 290.43799999948897,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 1.2059999999999995,
          "wait": 41.4409999989022,
          "receive": 3.359999998792773,
          "_blocked_queueing": 277.66999999948894
        }
      },
      {
        "_initiator": {
          "type": "script",
          "stack": {
            "callFrames": [],
            "parent": {
              "description": "Image",
              "callFrames": [
                {
                  "functionName": "buildFragment",
                  "scriptId": "90",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 2,
                  "columnNumber": 13983
                },
                {
                  "functionName": "domManip",
                  "scriptId": "90",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 2,
                  "columnNumber": 16800
                },
                {
                  "functionName": "append",
                  "scriptId": "90",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 2,
                  "columnNumber": 14885
                },
                {
                  "functionName": "",
                  "scriptId": "93",
                  "url": "http://221.178.136.186:8090/pkt/service/reservePage",
                  "lineNumber": 276,
                  "columnNumber": 31
                },
                {
                  "functionName": "j",
                  "scriptId": "90",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 1,
                  "columnNumber": 26910
                },
                {
                  "functionName": "fireWith",
                  "scriptId": "90",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 1,
                  "columnNumber": 27723
                },
                {
                  "functionName": "ready",
                  "scriptId": "90",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 1,
                  "columnNumber": 29517
                },
                {
                  "functionName": "I",
                  "scriptId": "90",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 1,
                  "columnNumber": 29708
                }
              ]
            }
          }
        },
        "_priority": "High",
        "_resourceType": "image",
        "cache": {},
        "connection": "2289",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/button_reserve_h.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 500,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2507-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2507"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:17:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2507,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAFQAAABUCAYAAAAcaxDBAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDoyQUI5QTA1QzUwMTUxMUU4QUJFNEJCRUM3MzVGODFEMCIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDoyQUI5QTA1RDUwMTUxMUU4QUJFNEJCRUM3MzVGODFEMCI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjJBQjlBMDVBNTAxNTExRThBQkU0QkJFQzczNUY4MUQwIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjJBQjlBMDVCNTAxNTExRThBQkU0QkJFQzczNUY4MUQwIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+1DBYRAAABkBJREFUeNrsXVuIG1UY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",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2507,
          "_transferSize": 2931,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:17:38.203Z",
        "time": 54.89099999977043,
        "timings": {
          "blocked": 3.6780000004637987,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.5519999999999998,
          "wait": 48.22700000113179,
          "receive": 2.4339999981748406,
          "_blocked_queueing": 2.4730000004637986
        }
      },
      {
        "_initiator": {
          "type": "script",
          "stack": {
            "callFrames": [],
            "parent": {
              "description": "Image",
              "callFrames": [
                {
                  "functionName": "attr",
                  "scriptId": "90",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 2,
                  "columnNumber": 32133
                },
                {
                  "functionName": "e.attr",
                  "scriptId": "91",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.migrate.js",
                  "lineNumber": 1,
                  "columnNumber": 1891
                },
                {
                  "functionName": "n.access",
                  "scriptId": "90",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 1,
                  "columnNumber": 30205
                },
                {
                  "functionName": "attr",
                  "scriptId": "90",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 2,
                  "columnNumber": 31656
                },
                {
                  "functionName": "reloadValidateCode",
                  "scriptId": "93",
                  "url": "http://221.178.136.186:8090/pkt/service/reservePage",
                  "lineNumber": 338,
                  "columnNumber": 30
                },
                {
                  "functionName": "onclick",
                  "scriptId": "163",
                  "url": "http://221.178.136.186:8090/pkt/service/reservePage",
                  "lineNumber": 236,
                  "columnNumber": 179
                }
              ]
            }
          }
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2355",
        "pageref": "page_1",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/service/getCode?random=Fri%20Sep%2004%202020%2022:18:46%20GMT+0800%20(%E4%B8%AD%E5%9B%BD%E6%A0%87%E5%87%86%E6%97%B6%E9%97%B4)5121790",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [
            {
              "name": "random",
              "value": "Fri%20Sep%2004%202020%2022:18:46%20GMT+0800%20(%E4%B8%AD%E5%9B%BD%E6%A0%87%E5%87%86%E6%97%B6%E9%97%B4)5121790"
            }
          ],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 587,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "Thu, 01 Jan 1970 00:00:00 GMT"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Transfer-Encoding",
              "value": "chunked"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:18:45 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 939,
            "mimeType": "text/plain",
            "compression": -23,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAJYAAAAoCAIAAACTo5SwAAADcklEQVR42u3aMWsUQRQA4P1lqSwVu1RBDxSEHBYiKKLBLs2BREwRsFA0glHUP6BVkBACCmIRbGxMIWlSKVbnkyePx5t9b2ZnZ+d292Z4LHszk3DJx5udN3fVvLSBt6r8CwphaYWwtPn847NdjEK4yPbn1WMR4X5fv73AiFAshMnwwvtFA7na+0KYz6/NBExBTtg0EQvhggndtGuaiBbh2vYDHgn/7CvrD3kMFO/3+1PggStEtGJ/CX893+ORjXC2eU1E4Ew+9OboA4X249Ot1eu7a9PZClz/3Wyt9o6wpZ/R02kKuoSaophz/OUnBrDBlVtqfpwQwsjFgRG6fqI/ZwpqhHz0/p0JmSEbXJGTXmqEXFEjXOSzMK55CbtrGqGryP34qACrVaSVkxPiSz7t08EhBhDC1Ut4+v0MA3rofgGEtlOI4uudJxB5CNHPIERF3knJh2z/Y7aCkBxP1IXUKRqZ1RYVIZaJF1IDCdbMycXbYhUVCynhxSk2IiQ/m1B0ckIRoOg9nSHFG5s7ENN723C9enfDTUqcQMEVxVAV4teeELVsQsHWVNHwE05aCnoJDT8MY8EUipxwsr4hDtgEUgLC9gupRmiYtSQ0yoZUhG5PHCGEOOY2CN2hxITe7Ux+wpu3LlB4CV1FqjHcnBOulx6dD3yroEgAoAihJRmOQmgpqD4Lx0H47nAP2Hgn9EBo21GXkNeFtX7tCUmCdi7ERjmKExoQRj8IQ0r7jgjdJx9QaanJXUGR/57PZ28h3NMZzU8QiqFGhEJIaGl+QYTR1YV7wGYX9QkJ0c/Y5pAir+IBjyCp01hCR04Yd7odXVS0IRRsGMRpp2BaQgNM8+sdYXRpn4RQrKiBhQSPkMehKA1HSJjkXIYT1ioKQuHHO7MR2juXWvJ6whH44V40hFBLQeps5BdSGvLRRoRaCo6W0Fb0rqJtCLXjULfTa2MoLgUhKhIkL/PdmbWEl5+eszcy9n6HPqnQDrijCT3H3GMi5JACz0sIEoLQeAOB0l6eOOZqIX4JCQO/ZmHPHBCh58Om8aVgHCFKcEL7PfSIsLvW/6+saXVh/1shLISj8BNsA/LrkNDdvwzii7/4ScV8UK0qfkNv+QjL/3rY25nc6+HLfYxCmLIdH/3AyOBXe18I2/rV3nfqtySKVWa/jhQPTvYxlpDwL42WRIsOFvD6AAAAAElFTkSuQmCC",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 283,
          "bodySize": 962,
          "_transferSize": 1245,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:18:46.957Z",
        "time": 58.88499999855412,
        "timings": {
          "blocked": 18.011999999634924,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 2,
          "wait": 32.64700000122329,
          "receive": 6.225999997695908,
          "_blocked_queueing": 5.4579999996349216
        }
      },
      {
        "_initiator": {
          "type": "script",
          "stack": {
            "callFrames": [
              {
                "functionName": "send",
                "scriptId": "90",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 3,
                "columnNumber": 14764
              },
              {
                "functionName": "ajax",
                "scriptId": "90",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 3,
                "columnNumber": 10523
              },
              {
                "functionName": "",
                "scriptId": "93",
                "url": "http://221.178.136.186:8090/pkt/service/reservePage",
                "lineNumber": 311,
                "columnNumber": 10
              },
              {
                "functionName": "dispatch",
                "scriptId": "90",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 2,
                "columnNumber": 6443
              },
              {
                "functionName": "r.handle",
                "scriptId": "90",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 2,
                "columnNumber": 3218
              }
            ]
          }
        },
        "_priority": "VeryHigh",
        "_resourceType": "xhr",
        "cache": {},
        "connection": "2379",
        "pageref": "page_1",
        "request": {
          "method": "POST",
          "url": "http://221.178.136.186:8090/pkt/service/isBlacklist?booking_time=tomorrow&licensePlate=%25E8%258B%258FE5P623",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "Content-Length",
              "value": "0"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "X-Requested-With",
              "value": "XMLHttpRequest"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Content-Type",
              "value": "application/x-www-form-urlencoded; charset=utf-8"
            },
            {
              "name": "Origin",
              "value": "http://221.178.136.186:8090"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [
            {
              "name": "booking_time",
              "value": "tomorrow"
            },
            {
              "name": "licensePlate",
              "value": "%25E8%258B%258FE5P623"
            }
          ],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 650,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Content-Type",
              "value": "application/json;charset=UTF-8"
            },
            {
              "name": "Transfer-Encoding",
              "value": "chunked"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 18,
            "mimeType": "application/json",
            "compression": -11
          },
          "redirectURL": "",
          "headersSize": 339,
          "bodySize": 29,
          "_transferSize": 368,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:27.879Z",
        "time": 94.94399999852641,
        "timings": {
          "blocked": 10.24200000040815,
          "dns": 0.07000000000000028,
          "ssl": -1,
          "connect": 39.483,
          "send": 0.6730000000000018,
          "wait": 39.6319999989795,
          "receive": 4.8439999991387594,
          "_blocked_queueing": 5.557000000408152
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 33
        },
        "_priority": "High",
        "_resourceType": "image",
        "cache": {},
        "connection": "2394",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/loading.gif",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 482,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"3897-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/gif;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "3897"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 3897,
            "mimeType": "image/gif",
            "compression": 0,
            "text": "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",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 3897,
          "_transferSize": 4321,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.221Z",
        "time": 91.22999999817694,
        "timings": {
          "blocked": 8.467999999447027,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 3.545,
          "wait": 37.63500000071409,
          "receive": 41.58199999801582,
          "_blocked_queueing": 1.7499999994470272
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 47
        },
        "_priority": "High",
        "_resourceType": "image",
        "cache": {},
        "connection": "2379",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/supplementary_info/button_back.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 505,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"1249-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "1249"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 1249,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAABEAAAAgCAYAAAD0S5PyAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpFQjczM0YwOTUwMTIxMUU4OTg1N0MwOEUzRjkwOEEzNSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpFQjczM0YwQTUwMTIxMUU4OTg1N0MwOEUzRjkwOEEzNSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkVCNzMzRjA3NTAxMjExRTg5ODU3QzA4RTNGOTA4QTM1IiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkVCNzMzRjA4NTAxMjExRTg5ODU3QzA4RTNGOTA4QTM1Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+MsLhUQAAAVZJREFUeNqclbsvREEUxsd6JGtJPBKVEv+DmlKjpFJIJKKV3UbnleisyKokiEojqEWESqKXSBRCodHQIOM7MhN3j2/tnPslv8l9zP3lztwzd5z33uWgCKrgGoznEbSBI/+bhzySfV+fF6ug5v+mbBFsE8Gq3EsVrBPBVryfIlghglq2TzPBIhEcgtZUyRwRnIAO3beRYJYIzkAn688E00RwAboavbW+MAk+lOAS9P03d9mTCfCmBLegv9kXjAdjRHAHBlPqSJpRqX8luAcjqdUszQ0RDFnWVME51+3q8wqenCVhQt/JJ+2xDEeYIrVxDkoWSazST1Lm7RaJME/e6CD8EpMlQpmI9qwSYZmIqlaJC78+nU2rxIWHdNasEmGXiJaskkKYWJ2KRRJ3vWMiWrBI4v57qiRfYMa6A5bCcsjmMc9e3AuuMpLnlp8x2TMAdsAw2PgWYADavovyLd9b0AAAAABJRU5ErkJggg==",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 1249,
          "_transferSize": 1673,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.222Z",
        "time": 99.27600000082748,
        "timings": {
          "blocked": 55.18300000048615,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 1.1239999999999952,
          "wait": 37.04599999972037,
          "receive": 5.923000000620959,
          "_blocked_queueing": 6.92200000048615
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 62
        },
        "_priority": "High",
        "_resourceType": "image",
        "cache": {},
        "connection": "2408",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/parking_detail/img_time.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 498,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2142-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2142"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2142,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAADYAAAA2CAYAAACMRWrdAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDozMjVCNkM3NTUwMjgxMUU4OUE1NEY0ODQ1MUIyOTQ3MCIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDozMjVCNkM3NjUwMjgxMUU4OUE1NEY0ODQ1MUIyOTQ3MCI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjMyNUI2QzczNTAyODExRTg5QTU0RjQ4NDUxQjI5NDcwIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjMyNUI2Qzc0NTAyODExRTg5QTU0RjQ4NDUxQjI5NDcwIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+xWTl3gAABNNJREFUeNrsmndoFUEQxu9FjVE0dlEjxhJUsHfFBhq72CvB2EAEuyDiH4oNsUDEirE3DCo2sCuKGhXsvcReIHaxm0QTvyHzZDxecrt3l1yQN/Dj7va93L3vdnZ3Zja+jIwM43+0EOM/taCwoLCgsJy1/E5v0Hr7hEDNkaANqA+qgXIgnD/7Dt6AJ+AGOAmS7D7/zMAlOSNMWBHQCwwGrYQQK0sBF8FusA28ziuuSIKmgCtgC+iqIYqsIL+IOHANzAelPHVFuGFdHFaDZgE+TmN3ewpegvfgNygBIkAlEAUKi78hl50KuoOJ4HiuC4Oo0Tgs4h6TdhNsBfvBQ5CajbdEcg8PBM1BAf6sFjjCvTcX/ND9fT7dkAqCKuCwCUSLZrrJWhDPE0KajXdVkwVONrnydTAcXNWZPEI0RZXH4aBJFM1o7cEocNmmKLJ7YBZoAS6J9nr8zDo5OXkk8IOk23XmKdvK5ZuAQgrPuMPuecA09taBMNeFobfG49BWNJ0DHXiCyM7ygY3gAtgFQhUe9xb05lnWb/RiFroqDKIa4rBANNE46gn/VllzivH6RtaFZ0MVI5ceBvaItnEs2LkwiCqOwwbhBjQWekDUO9UJSsyMqdyDqpYOYsEx0bYSVHajxyaBunz+C4yAqGcOlj/dzPYrGApeifE2x5Ew9FZJHEaLpniIOu9BTJsMlonrAaCGkx7rD8qKNx3vYcC+R7h0KI8/28JixPldHl9eGT3/kLjux3GmnjC4IUUCTUXTBrhhmuGtrRHnFGe2tNNj0eKNpHBa4bWdAC/EdSc7wmSE8QA8ywPCfnDY5rc6doRFSWFww98u/bh0F8aa30rbSVvKiHM3eyuUn+vLQrTVC3wqzsPsCJMx3ReHYvwiKN/ax2PWF+A7JOosJ5ufsokjHQlLcRAtSPvJ+H98lMX3a4PDYG8Wn6eq/P4QRWFFHQj7BuYJcVb2nNOhrCzcFChr99h7cV7RoStSOHSUax1WceQdi0pVhGmW1BYm86yqLkwa9xmnVkNl7GfnitfFeXWudXhtNEYbm8oS2sJOCh+mMdYtDwhrbFqUD9oRlmTqtSHoNZ/HwmJEovoRnNYWhkiDFsudoomKopEeiqKAYbC4Pmxa07TSlgTOYP0Ldl8PhXUVuaE50tcThl6jSHqbaJoGd4zwQFR+LuT4jbL4U05rHjPF1E+bBQkQVzSXha0CjcSCP9YqmLYUhl5L5hv9zUGNzI2I3LLpYKTpRV9xVMwR4mhaXSGaBqHXlueCKHK/2eKaynBxKn+oU+KmPbBH4noMxG0y1Cq7dmwGWCquaSsqVjWfUxaGXqO4bKgpnYjlyaW0i4KoHEE7N7NMMSSV2F+p3kRrUwLiKFeiTbkbopmWAKrLT3QYU9I6RdtFiaYxRdH+IOPfUre7wlhcIk8gm0VzFbCYB3U8V49UNxVptqMNPtqmXW+KBY/ws3ZoB5VO/pcKY4zeLO1qlgjw8S0WmmT8u1VbklOPKBbVIEA2TUHBXL53usWLdl8Yi6vFU3Afw53N+mNcGriq6EHuuGIAu21klsJpJ3KdzgAX9gFsNzJ3RjuqirIKVdyyCwxFJ+2MzJ3O6pzKF+Rlwb+lRGWHz+Axpx4UHiW7mrgF/18xKCwoLCgsKEzYHwEGAJFxLAMJaDP5AAAAAElFTkSuQmCC",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2142,
          "_transferSize": 2566,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.223Z",
        "time": 120.77600000338862,
        "timings": {
          "blocked": 26.660999999876367,
          "dns": 0,
          "ssl": -1,
          "connect": 27.331,
          "send": 8.214000000000002,
          "wait": 56.74099999914877,
          "receive": 1.829000004363479,
          "_blocked_queueing": 26.660999999876367
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 67
        },
        "_priority": "High",
        "_resourceType": "image",
        "cache": {},
        "connection": "2422",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/parking_detail/img_local.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 499,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2412-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2412"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2412,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAADYAAAA2CAYAAACMRWrdAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDowMjJBOUUyNTUwMjgxMUU4OTg1NUM0MzgwRUEyRjEzNyIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDowMjJBOUUyNjUwMjgxMUU4OTg1NUM0MzgwRUEyRjEzNyI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjAyMkE5RTIzNTAyODExRTg5ODU1QzQzODBFQTJGMTM3IiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjAyMkE5RTI0NTAyODExRTg5ODU1QzQzODBFQTJGMTM3Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+iiRt4wAABeFJREFUeNrsWglsVUUU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",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2412,
          "_transferSize": 2836,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.223Z",
        "time": 163.71999999893572,
        "timings": {
          "blocked": 35.800999999494756,
          "dns": 0.06899999999999995,
          "ssl": -1,
          "connect": 51.311,
          "send": 7.553000000000004,
          "wait": 40.14399999972782,
          "receive": 28.841999999713153,
          "_blocked_queueing": 31.269999999494758
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 93
        },
        "_priority": "High",
        "_resourceType": "image",
        "cache": {},
        "connection": "2426",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/my/right.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 483,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"1834-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "1834"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 1834,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAACkAAABDCAYAAAABDyzKAAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAAJcEhZcwAADsQAAA7EAZUrDhsAAAa/SURBVGhD1dppU9RAFIXhBhQVVwRxwV2r/P8/xg8iKogboAKuqCz6dNVNxUwisySjdlVKBmYmp9++y+mOE+/fvz9M//iY/Mf1ZXn/l8gLFy6kM2fOpMnJyfTx48f07t27fO3u7qbp6en8t781JiImz507lwW9ffs2rayspM+fP6fDw8N0+fLldOPGjSzy+/fvf0VnIRKtly9fpvX19bS5uZm+ffuWRRKH8tWrV/PlfSYwzlGIJOjhw4fp1atXWcTe3l7WMTU1la87d+6ke/fuJcQJn5iYSNvb22PRWiQOkYTt7+9ngjEODg7y74TB48ePM+kvX74UkxiHykIkMseOHcuXn2MQTCRqa2trWeSvOM5CURUKXY9C5IkTJ3LMSRQ/l4USgeiPHz/Smzdv0vLyctrY2PgtLLoUWoiUEHNzc2lhYSHNzs6m06dP53JUJbqzs5OFIioExO/Zs2c7JVqokByEEXn79u1MlPA6okqVBHv69GkWaumFRFejyO64wczMTPr06VOmtbq6mpCLmllOKJPyXjX0ypUraX5+Pk9STLed9T1t8fjx4zkhkLx7924mS1Ad0a9fv6YXL17k4i+ZvBa7bY8eknVEZTWiHz58yH8OooSLWzEp6RC9dOlSJmyybRFtNBjiMTrN/fv383ISVC1PyAkPExEeW1tbub2WQ2NUso0ky0Qto5bpIoIBIaJKNMJEqLgQbaOFHmnVED1//ny6du1abovKUzU+o+ALh2fPnqXnz5/nyZhcG8X+SJJB9NSpU/mmaL5+/TonSh1REzAp4RGm5OTJk7lMDTuOJBlfHFQQvXXrVhbSFKOSTMabkOQRo6MQ7Ztkmag4i66jPUqcaowG0YsXLxZEYzUGJdo3yTJRcYmoQo6QuK22UFmPqIzXnaIzWYFBqQ4skliUZK5ef/PmzSzW67LQqKfE2oY8efIkxzLhgzr8oUSKs7BqkgNVdCSI7lQ2JUTKejSFCNc/qCkZSmSICFMik5kSYgltImrJmRIOSmVg/foZAydO3ZfaTripm0fXQRrFcuchXvwKDxMyOS2VKREGTWMkkmWihIYpIYBxriOKnsko+v4VCrGfahLZCsn4ckIRDJsndhGuIyoswpSYHKJMSR3RVkiGSMsWxlkLZfOqeybvJdqWWbYLD7XWZJqMc6skQyyhOhQR3BGilrVKNEoZkmweslZD3JZtXqskQ6RlczM3ZvN4TETrYjT8gMnEnqlqnDsRGeS0wWiL+r1aWhVLkOIuFsO4VJe9E5FB1LLxmIuLi+nBgweZKMp1RCVctM+xikTURRiqdQLL3anuBMXfOyUZApCzzLGhq5rmstC6WtmpSLUPQXXz0aNHudSIv7pSo27Kcg6r3P87JSlJCIo9PBfEDfldOXvjDErZGqtIBLlxjmdpaSmTVGrq2p/2Sdz169dzyQrHX172Vos5egwFQTqIDRnXQ3DVQ0acEsWTxilI3V6o1ZiMdqcoO3lT9wisIyjTlSSOSKcRi35XN1ohiSCBCCrK6l2cu1cJikFJon7GEnP4PtupVQuCsU1wPlQ+0i7fXOYiqAMp8jpSE8H43EgkEVROULAPlyB6sHi0xNWjFvsgSSUGLbF4FA5HjZFikgjLqatYXgKVnDqBlhk1BAn0s8zuZwxFMgjGcx8O2xKHy64SVAO5otg2iEd+st8xNEnbAKKUGca1aYkRNCkEY18jcQYZA5NEBAWFWpuTyZZbbFZ9oPeKu9j2isdB99wDt8VodaiJP4WaQFSrAuOYxUMqy2wrIXGGGX2TjGeLMtiFYhNBMRhHMcqM14PEYHUifcdkmIV46uD8sYlglBkC7a1HEdjXcruhUoEes6DlNYlDzNKqg5bX6zZGI0nxJ+hRiNMJtRBBdbAcg8xCPLXQ6mSxOuizbRzuN4okJDb6CKqFTQQZW0urzCCIftW4jkK0J3HCLOi9KMRzGlSqB0xxtiNJZDFf6PO6Tpujh2QQlL1lu1Vn+e0G+cCuCPYYjCCIArMgi3WSOj+IoK4hZgkMRz3K4f2fyBckw82wW068iCSwSlCRliTxoDQEHmW3Rln+QqR4Q9AyKzNxgFQ2CwQq6mofcWKQWUDwT+eLowj8rU7GKRfLH4+GqwJlLIEejCozEkZcdj16lpuBrf4/jCCInstSIyp+uyQYk/8tu8vPYorM+rXEYVidOXI0kqxfw9oG5aJOOgbRUbQ/salXE825oGZ5wyz8adPUhqhGg4FMCFFaiHPZNCFIoBgcJ8GeOilL0YtOE+aUSfC3YR+5tUG2bz/Zxs2G/Y6+/eSwN2jjc/+FyJ8Y01JzpjroyAAAAABJRU5ErkJggg==",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 1834,
          "_transferSize": 2258,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.226Z",
        "time": 160.4259999993043,
        "timings": {
          "blocked": 36.345999999742254,
          "dns": 0.0730000000000004,
          "ssl": -1,
          "connect": 48.495000000000005,
          "send": 8.469999999999999,
          "wait": 53.79600000094529,
          "receive": 13.245999998616753,
          "_blocked_queueing": 31.216999999742256
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 464
        },
        "_priority": "Medium",
        "_resourceType": "stylesheet",
        "cache": {},
        "connection": "2414",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/css/pkt.css",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/css,*/*;q=0.1"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 454,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"4282-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "text/css;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "4282"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 4282,
            "mimeType": "text/css",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 423,
          "bodySize": 4282,
          "_transferSize": 4705,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.277Z",
        "time": 119.01399999987916,
        "timings": {
          "blocked": 3.8870000025781337,
          "dns": 0,
          "ssl": -1,
          "connect": 25.719,
          "send": 5.4019999999999975,
          "wait": 36.06600000055833,
          "receive": 47.9399999967427,
          "_blocked_queueing": 3.8870000025781337
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 465
        },
        "_priority": "Medium",
        "_resourceType": "stylesheet",
        "cache": {},
        "connection": "2394",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/css/signin.css",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/css,*/*;q=0.1"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 457,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"775-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "text/css;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "775"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 775,
            "mimeType": "text/css",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 421,
          "bodySize": 775,
          "_transferSize": 1196,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.278Z",
        "time": 104.39100000075996,
        "timings": {
          "blocked": 44.46800000106869,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.7600000000000016,
          "wait": 47.64600000068825,
          "receive": 11.51699999900302,
          "_blocked_queueing": 35.96000000106869
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 467
        },
        "_priority": "Medium",
        "_resourceType": "script",
        "cache": {},
        "connection": "2379",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 444,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"84324-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "84324"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 84324,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 439,
          "bodySize": 84324,
          "_transferSize": 84763,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.279Z",
        "time": 276.3780000022962,
        "timings": {
          "blocked": 50.4410000025637,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.7859999999999996,
          "wait": 49.91700000127824,
          "receive": 175.23399999845424,
          "_blocked_queueing": 44.9590000025637
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 468
        },
        "_priority": "Medium",
        "_resourceType": "script",
        "cache": {},
        "connection": "2408",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.migrate.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 448,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"7200-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "7200"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 7200,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 437,
          "bodySize": 7200,
          "_transferSize": 7637,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.280Z",
        "time": 164.62999999930616,
        "timings": {
          "blocked": 69.30400000198861,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.33699999999999974,
          "wait": 48.43400000014761,
          "receive": 46.55499999716994,
          "_blocked_queueing": 64.2790000019886
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 469
        },
        "_priority": "Medium",
        "_resourceType": "script",
        "cache": {},
        "connection": "2422",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/phone.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 439,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"1899-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "1899"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 1899,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 437,
          "bodySize": 1899,
          "_transferSize": 2336,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.281Z",
        "time": 169.37900000266382,
        "timings": {
          "blocked": 116.15200000265986,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.31400000000000006,
          "wait": 44.040000001146694,
          "receive": 8.872999998857267,
          "_blocked_queueing": 107.55600000265986
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 470
        },
        "_priority": "Medium",
        "_resourceType": "script",
        "cache": {},
        "connection": "2414",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/ie10_viewport_workaround.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 458,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"414-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "414"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 414,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 435,
          "bodySize": 414,
          "_transferSize": 849,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.282Z",
        "time": 167.07099999985076,
        "timings": {
          "blocked": 115.87200000232133,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.1739999999999995,
          "wait": 40.75300000163587,
          "receive": 10.271999995893566,
          "_blocked_queueing": 107.55500000232132
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myRentPage",
          "lineNumber": 471
        },
        "_priority": "Medium",
        "_resourceType": "script",
        "cache": {},
        "connection": "2426",
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/common.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 440,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"6314-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "6314"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:19:26 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 6314,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 437,
          "bodySize": 6314,
          "_transferSize": 6751,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.282Z",
        "time": 199.04499999756808,
        "timings": {
          "blocked": 116.38199999786121,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.24499999999999922,
          "wait": 46.95399999920488,
          "receive": 35.46400000050198,
          "_blocked_queueing": 108.46599999786122
        }
      },
      {
        "_fromCache": "disk",
        "_initiator": {
          "type": "other"
        },
        "_priority": "High",
        "_resourceType": "other",
        "cache": {},
        "pageref": "page_2",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/favicon.ico",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myRentPage"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            }
          ],
          "queryString": [],
          "cookies": [],
          "headersSize": 221,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"21630-1465455412000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 09 Jun 2016 06:56:52 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/x-icon"
            },
            {
              "name": "Content-Length",
              "value": "21630"
            },
            {
              "name": "Date",
              "value": "Wed, 02 Sep 2020 15:52:11 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 21630,
            "mimeType": "image/x-icon"
          },
          "redirectURL": "",
          "headersSize": 233,
          "bodySize": 0,
          "_transferSize": 0,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:19:28.652Z",
        "time": 10.683000000426546,
        "timings": {
          "blocked": 1.9930000006088522,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0,
          "wait": 6.903999999097316,
          "receive": 1.786000000720378,
          "_blocked_queueing": 1.5600000006088521
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 19
        },
        "_priority": "VeryHigh",
        "_resourceType": "stylesheet",
        "cache": {},
        "connection": "2504",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/css/pkt.css",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/css,*/*;q=0.1"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 450,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"4282-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "text/css;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "4282"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 4282,
            "mimeType": "text/css",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 423,
          "bodySize": 4282,
          "_transferSize": 4705,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.829Z",
        "time": 40.203000000474276,
        "timings": {
          "blocked": 5.125999999626307,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.45100000000000007,
          "wait": 31.952000001460082,
          "receive": 2.6739999993878882,
          "_blocked_queueing": 3.254999999626307
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 20
        },
        "_priority": "VeryHigh",
        "_resourceType": "stylesheet",
        "cache": {},
        "connection": "2506",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/css/signin.css",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/css,*/*;q=0.1"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 453,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"775-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "text/css;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "775"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 775,
            "mimeType": "text/css",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 421,
          "bodySize": 775,
          "_transferSize": 1196,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.839Z",
        "time": 54.51499999981024,
        "timings": {
          "blocked": 11.550999999428866,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.4800000000000004,
          "wait": 34.52899999943376,
          "receive": 7.955000000947621,
          "_blocked_queueing": 3.0179999994288664
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 28
        },
        "_priority": "High",
        "_resourceType": "script",
        "cache": {},
        "connection": "2504",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/phone.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 435,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"1899-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "1899"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 1899,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 437,
          "bodySize": 1899,
          "_transferSize": 2336,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.840Z",
        "time": 69.70700000238139,
        "timings": {
          "blocked": 35.37300000058161,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 1.6559999999999988,
          "wait": 31.523000000054715,
          "receive": 1.1550000017450657,
          "_blocked_queueing": 3.462000000581611
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 29
        },
        "_priority": "High",
        "_resourceType": "script",
        "cache": {},
        "connection": "2527",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 440,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"84324-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "84324"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 84324,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 439,
          "bodySize": 84324,
          "_transferSize": 84763,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.842Z",
        "time": 316.7489999977988,
        "timings": {
          "blocked": 11.933999998291256,
          "dns": 0,
          "ssl": -1,
          "connect": 38.99,
          "send": 1.6920000000000002,
          "wait": 37.51499999890872,
          "receive": 226.61800000059884,
          "_blocked_queueing": 11.933999998291256
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 30
        },
        "_priority": "High",
        "_resourceType": "script",
        "cache": {},
        "connection": "2539",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.migrate.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 444,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"7200-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "7200"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 7200,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 437,
          "bodySize": 7200,
          "_transferSize": 7637,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.848Z",
        "time": 114.34400000210991,
        "timings": {
          "blocked": 14.21099999927613,
          "dns": 0.040999999999999925,
          "ssl": -1,
          "connect": 31.173,
          "send": 1.9720000000000013,
          "wait": 30.91900000057253,
          "receive": 36.02800000226125,
          "_blocked_queueing": 11.67899999927613
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 98
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2539",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/my/setup.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 479,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"1841-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "1841"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 1841,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAACEAAAAgCAYAAACcuBHKAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpBNTU4NDYxNjU5MDIxMUU4QTVCOEE2RUIwNzQ2RTU4MyIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpBNTU4NDYxNzU5MDIxMUU4QTVCOEE2RUIwNzQ2RTU4MyI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkE1NTg0NjE0NTkwMjExRThBNUI4QTZFQjA3NDZFNTgzIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkE1NTg0NjE1NTkwMjExRThBNUI4QTZFQjA3NDZFNTgzIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+erl/uwAAA6ZJREFUeNqsl31oj1EUx/feNntj85I0ttlkimahhky2ljI1YWPIH6OosSRkibz/seVlUt42fzARMU1jzWspMmqEjQzDZjGyWlubeXyPzlPH7T4ve7j16fd0z3nOPb977jn3PL6GYfi4HAlgOsgHd8Fejc4osBw8Bg2g3ZVlcsKBNHAadBl/jz1giNCbC94I+RdQBiY7rWEn9AP7wU/DerwHNeCBjU4POAoivTgRA3rZUD+4AxaBFeCjxYLNIA8sBfcV2UovTswCv9jABkUWDQpBBbgAToE1mn+7RTixb6BOkLHbwkCSi7OjY4wIZzuIc3IiEKSDbaBROHAW+Ht0gjgmbL3lsEwEg3VOlGti/FDJAC9Q6O4pdumMPQdDpRMZitJXUCK91RACJoDZIAVE2OhSeI9o0nyr6QSlYi1P9oEcMMLG4EhwUKkJNFrBZYe6MBasFufkM+00CcaLLCh32No54INYuA084Vibg9J6k4OdSqGf68MvmLuQavNiFuhmXSpQ2SIlQ/hQV6hbbUG6+ON1NFEvnFhm8dIw/tcGh8LXZoH1rEeLTLPQyeDD+Wc3fThl+niiAwzXvLSD5Y9cputF1q/WyEJBgyjpBaagSGzjEuWlAE4nGgUu03IG70SHpoqmirWKZYoGgSYWlCkvRbExOtEJLp0I5HvE0GTLQp6n8xVPc358o/eCNn4OV2570gmgWx/0uew9SO8bP0cqsgj+7QbfzQVoxIEUfm5WXuoBnexIoksnYkA86AetiuwT/0aBJLOp8eOb0Bxpmu29xbLjLsNRJK72IEU2mg8kjTO0Pk2eFA7c4HiqRnNYTmV3poMDsaLf2GWhUyLWXEwTV0W6JNsctFpRarMt9KaCp6zXZHP5BYtEyKOJTFFcshzuDNnGVXO1zQXrwHlxJ7SASTa2KMt+cImPpYlw8I5frnLY6gguzXZ9ZxXH3c7OTta9JOvERmHkAJjnYIQKTim4Am5ySA/zte7UuVPT1MlrZUonYjTNa61ZTP4Dg8AJxX6NeQdJRfLqOngpFJvM7ucfCGO7BoexnlvGWLtGl/J6rbjUKrmWeHViu+gv0wba8h8SOxJnoePPWx1sIQ/lLzEaC7x8d+QIJ0qVsCRzz/iMv8Je8xnKUcJQKIpctBcnEkUjY/aQ9AGzW3RYunEObAavxNw1uz7EKZ7j+FR3aRarA6tAPn8cd2p0GrmxDfP6QazuSjGf7BbOdbXFmwJesJy67vlOi5v8FmAAYZV83bAx9DgAAAAASUVORK5CYII=",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 1841,
          "_transferSize": 2265,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.852Z",
        "time": 242.82300000049872,
        "timings": {
          "blocked": 208.68500000037113,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.484,
          "wait": 31.70699999947264,
          "receive": 1.9470000006549526,
          "_blocked_queueing": 207.66100000037113
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 107
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2539",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/my/myInfo.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 480,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2103-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2103"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2103,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAADYAAAA2CAYAAACMRWrdAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpEOUZDMTNBMjU5MDIxMUU4QURCQUU3MDkwNTVCM0Y1MCIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpEOUZDMTNBMzU5MDIxMUU4QURCQUU3MDkwNTVCM0Y1MCI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkQ5RkMxM0EwNTkwMjExRThBREJBRTcwOTA1NUIzRjUwIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkQ5RkMxM0ExNTkwMjExRThBREJBRTcwOTA1NUIzRjUwIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+7zTCaAAABKxJREFUeNrsmmmITWEYx8/lhrHvW5aGZF/Lkl1CdqFESfYl+/IBk4kI2fkieynLkDWRIlHIlsj6wRouxm7GOvf4P/xPvd3ucs4975kz6T71657uPffc8z/P+z7bTMA0TeN/tELGf2opYSlhKWHeWtDtBTrtnxH5VjHQGHQFfUE6KAV+gNfgIjgBroJ3wFVYvjBsgzfCIqwDWAg689pFQED5vDpoCkaDEFgDtlN0wfIYrSiYDeaB0qAw339BL70BJUA1UBMUB3XAStAPzAQPC5owucklYDxFiR0EW8AD8Av85n6W36sIBoApoCroCfaBceBGQRImT3siKAmeggXgLD0Vbf+IFx+DQ2AV6A1agnVgErjne1RE4BhCYSLqPpgADnD/xAsKn8Edeu0w3+sIRile90cYRJXDiwirBF6B1eA0l55dewLmgGu8l7EU6KvH+oBePD4GspK8jizLjVyisv96cN/6Jqw7KA9eglPgi4tryX67zeNuoIUvwrAMSzF0i11m0nVjOeAWCIOGoL5fHqsByvD4HvOUWxNh2UzqZfwSVoFlkhXhdNgLllhWWeaLsDwuG53VSyGl/DL9EiZL7xOPKysllBury2uJffNLmOStDzxuyptyex/tGWVzWLXkvzC0Crksn2RJtgJdNJR2IUbYreCmn7XiSVbm6UyqBxUvOrWfYH5Bqe5PsYSSqnwQK/nlIDfG+RIY0iL6M9VMEohzTrTv5GoVhuVoIlHvxWE70JyVueyNXeBrjPZmjI5ySTFpUNdHfYpuB6YQNxIv0p+XYzSTPbICvGdBbHlCeq/nurt2POCAV/3YbibU1Ww5poPBYCc4Dh4x8YYptjL31Kck81WAXi/B63k6GtjGfmwzaMSSS2Yf01i5Z0acf4593GuH9xBm7yftTUZ+zDzqs40pG5FKirP8ijRZsm/jPfE49k0pDrwRhv1Vl0+uP0WkKR+HWP/dT5A/W3N6FU6Qb19yZGfaqXSCLkTNZSSswSmVwZ4qi2ngDaPW1zihWmwxaGPjJ69wVdjal8EkBFXiEGYAI+Hf4AQ2scXPdth0loyxXKOdZ9jNcUGHotIZ/frSS9lMykc5v8hLopybxVQQjuGNAM8NeSIMoqrQUwO5xqWuW8ZRW66LrXrd8MCceGw5S6fCLKcykRyvRJnd2zXLO7W4pBMFD6lDn2ndY7h5GZGNoCjJQQshyu3U1rrBDJvDG6n4J2gTBlEN8DKVe0pGZcs0iFKtLWhm47yiupdiBkO62FpwXpMgKwisZLXyO8F93nXSQwYTeKsxk2+QQSIL3vqpWdiefA0eECU/PJkFrmzsNcoUSaeVZdViKh75yBGBJ1FRkuZQ49+cTzbuDXgrT6MgS8gULkVTyVlHjORH5gmFNVMqi92GuxF2PGHDQZOIz957Kcz6q4c0i2fgrRzNwqw9dojtyy9lfHDJywTdjcsw5MHeUsunTIffzbNTusUTVpul0iuHNaDdOlE64O/K6CDSm7FqwjS3HtvBPXZX4/6ybrYeu+AvhrMpcpirqFOigjgYZ0iy1MP0ItXMIi/TVdDIPzPZfOr8P8KYA9pA6v8VU8JSwlLCUsIU+yPAAECXKyULALpnAAAAAElFTkSuQmCC",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2103,
          "_transferSize": 2527,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.852Z",
        "time": 298.9159999997355,
        "timings": {
          "blocked": 255.83899999862095,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.5640000000000001,
          "wait": 39.287000000391856,
          "receive": 3.2260000007227063,
          "_blocked_queueing": 253.33799999862094
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 117
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2539",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/my/myRent.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 480,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2177-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2177"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2177,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAADYAAAA2CAYAAACMRWrdAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpFQ0E5NTk1QzU5MDIxMUU4ODYxREVBQjIyRDM3MTE5NSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpFQ0E5NTk1RDU5MDIxMUU4ODYxREVBQjIyRDM3MTE5NSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkVDQTk1OTVBNTkwMjExRTg4NjFERUFCMjJEMzcxMTk1IiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkVDQTk1OTVCNTkwMjExRTg4NjFERUFCMjJEMzcxMTk1Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+vUfmdgAABPZJREFUeNrsWltsVFUUvdMOLUVALFqKAgmSCJKAqMRIBCEmRAv8YAQsiTYxQHgoNQY1YJoYa2qBKvDBww9++JCXiUBAhISEZ0gEhSoESKAtFELS+KilFnDoXNdO140n13vnvs5tJ83sZOXcns7MOWvvffbZe88kTNM0eqPkGb1UcsRyxHLE4pVkmDdN2VlZhWE+cA2YDaRCrv8wcBB4BDgBLAr6ASfmbdBHDDICGAMUAomIin0G6AfczgZXtCx0P+L6cone4/M/uTMWIzFLu+mImm6j1UQedFvwQJCQc/QsUKq4jshEjo8CKyJsSs5WEZ9HAe/zzIqLXwbOAHe0EgOpzzF8CBRkeH8JsFaTkkWJ62xzV4A3gAtaiIHULAyfKFN/2w68RMM+dMW7EcgkaDEZO5XPkrl8YDSwVbYU1OXdLPY2R1nsXeCAEtaFTA3wFtAIvBryHjN5fx0DBgEn+ZkyXwxsBCYDL/BKOKOD2FCOLaIxXIIpm0X/UoLItQgW+5OKEukAmvl8E9hJYup+IkdFU7FYocP/C5WxIAKxAuX9hQ5uGltKlXBZoIXava4oIYyItRrokre6k5ibVAO13Fgqwvri0pPoOd13j2VIPO9b6RTOW9SUqqMnMg8zokWiSGecFpO7pARWae8BYgPiJDYEOB8xQISVvnESy2PE6mlJ6CYmUesLDXVX2PP/JDBNucS1EWtDBFztUQHETbAPoTUq5mHjA3rYDVNhroSkkR0yHJjOhPcp4CG6/0XgOPAD88p4iMF6ktdVAP0zRMo8VgNXfDaFVgJvMsP/35LAYqZv0o7a5LdMCmqxvlygyON1v/sgJmS+smXuzbRMitX1Y6zSxaJ1wFxgKfCTbmJp1mClHq/zKufXsQ1gyXYq7CLPU5oBQ/qOrwAfAc/TVaX/WA7s1UlMKumXfASdTJnKAoWUKGAhay+noPEbsAvYB6wB3qO3bANeBC5pIYbQL+eqNUK4t1zK6kqV8zyqob2a7nkI+Ibz0ntczv0uAQYCXwIzwoZ73bKM7mXwfB1wyE0r2JqY6vD+D4Bf+VxG79ET7mGhpI8Up9MhWyji4bcK1VoPN77n8D+Z+wzYrfRmTukI93K/7GdybGbI66TX+L1tXhoyI/m818e95FZ4HmRPZBjwnC6L5dP8XilOicPcOOX5mI+1xLoTlL+P8vxJADtLYoN0EZNsoEY5J24Wq3eYH6g8/+HR4DG48WHK/F3bPWlkUnDQqCjEPg0ZFTt8FJHi3k1UjmkLck0OSnoQlFhCWSitKSI22txyl4tHlJGIadtPSiE5xkFZvsJ9Wolkuq6EeuO/VvkMD8u287UW2pWaUJTyNJ9vBLWY5GIvA4OBr+Fu34ZsDyS4qcNG1zeWMs5mNJuvXMBBZJWy7x1BiUmAkJ78WGYH5RGtNYuXcRWtJV3fLcBV4McAn1Ol3IVnXVIxd1dEkJAc7TVqpFWDG0qWUcwkt04JIN/RM/zIx7ycrTyy0sjQGkx4/ZYKbvgEhseNaC1nsdAv7KEkqenXlWxiAy3Y5KD4SazZZirzUrpsphHCEfORjYRtrUmGPsdW6vxsdH3J18qEWS7o8bZUTbKa9Yp3ZVVrQKw0DzjNWquUrjnVJfkVOWd0fcN6JNt7HiYLTiky3+GZHsKsJslMQ/LJBp71PS6JcTyumK2S+51HjliOWI5YKPlXgAEAJRU0SduHDbQAAAAASUVORK5CYII=",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2177,
          "_transferSize": 2601,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.852Z",
        "time": 344.15200000148616,
        "timings": {
          "blocked": 307.20099999900117,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.5960000000000001,
          "wait": 32.512000000250524,
          "receive": 3.8430000022344757,
          "_blocked_queueing": 304.11499999900116
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 127
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2527",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/my/right.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 479,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"1834-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "1834"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 1834,
            "mimeType": "image/png",
            "compression": 0,
            "text": "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",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 1834,
          "_transferSize": 2258,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.853Z",
        "time": 357.2779999994964,
        "timings": {
          "blocked": 314.8179999989008,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 1.4540000000000002,
          "wait": 36.152999998409996,
          "receive": 4.853000002185581,
          "_blocked_queueing": 313.9259999989008
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 137
        },
        "_priority": "Medium",
        "_resourceType": "script",
        "cache": {},
        "connection": "2539",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/ie10_viewport_workaround.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 454,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"414-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "414"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 414,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 435,
          "bodySize": 414,
          "_transferSize": 849,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.853Z",
        "time": 156.5279999995255,
        "timings": {
          "blocked": 119.2419999984589,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 1.686,
          "wait": 32.61899999961164,
          "receive": 2.9810000014549587,
          "_blocked_queueing": 115.6139999984589
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 138
        },
        "_priority": "Medium",
        "_resourceType": "script",
        "cache": {},
        "connection": "2539",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/common.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 436,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"6314-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "6314"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 6314,
            "mimeType": "application/javascript",
            "compression": 0
          },
          "redirectURL": "",
          "headersSize": 437,
          "bodySize": 6314,
          "_transferSize": 6751,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.853Z",
        "time": 199.58200000110082,
        "timings": {
          "blocked": 165.34099999940116,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.41100000000000003,
          "wait": 31.562000001514097,
          "receive": 2.268000000185566,
          "_blocked_queueing": 164.00699999940116
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 169
        },
        "_priority": "High",
        "_resourceType": "image",
        "cache": {},
        "connection": "2527",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/button_reserve_n.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 495,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2411-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2411"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2411,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAFQAAABUCAYAAAAcaxDBAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDozRDI5NEVCOTUwMTUxMUU4QUM2RUE4OEUzQjU0OTNFNCIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDozRDI5NEVCQTUwMTUxMUU4QUM2RUE4OEUzQjU0OTNFNCI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjNEMjk0RUI3NTAxNTExRThBQzZFQTg4RTNCNTQ5M0U0IiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjNEMjk0RUI4NTAxNTExRThBQzZFQTg4RTNCNTQ5M0U0Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+uPSflwAABeBJREFUeNrsXFuI3UQY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",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2411,
          "_transferSize": 2835,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.854Z",
        "time": 425.4589999982272,
        "timings": {
          "blocked": 379.69200000045845,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 1.4379999999999988,
          "wait": 37.01599999952037,
          "receive": 7.312999998248415,
          "_blocked_queueing": 371.03600000045844
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/myPage",
          "lineNumber": 174
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2539",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/button_my_n.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 490,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2296-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2296"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2296,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAFQAAABUCAYAAAAcaxDBAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDo2QTFENjg0RjUwMTUxMUU4QUE3NUQzNDYxQjAzREFEOSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDo2QTFENjg1MDUwMTUxMUU4QUE3NUQzNDYxQjAzREFEOSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjZBMUQ2ODRENTAxNTExRThBQTc1RDM0NjFCMDNEQUQ5IiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjZBMUQ2ODRFNTAxNTExRThBQTc1RDM0NjFCMDNEQUQ5Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+XPLFCgAABW1JREFUeNrsXF2IFEcQ7jmNvwmiUfPgH96qQUOi4kMgEIjcrmggSIKCklfZzVNeJJxKJOZBRUIC5m2XBAIRDLkXCeRBbxE5RLkYkyj+crnVmB9JIuqdORUu3qTKq/HqOjP7M7szPT9V8HE1u9PdM99UV1VXz55l27YSaZ20CQVCqBAqhIoIoUKot7wCOAS4BhgEDAEGAD8DvgCsiTKhVoTSptVE2It4XVXOwws+B9gKuCIW6i6dgDOAl2qQqej7VYDzgHfEQv8v+wA7tc9+AXQBugF3AHMA6wCbAPO0c3cADkSGUSTUIN4CjNhjch+wrUabdwEPWRts32H4Pp7ApIVOAtwCPEPH9wArKRjVEnQNvYApdIz9PAcYSbMP3cvIRCJydZKpyH9upACFMpv8cKp9KFrVs6QfAbzpo4/jgLWk/+HiX1NDKEbpHyhi4wU8D+jz0c/LgNPUD1r5kgasPFFTfh1Lj275JFORHx1k97I2rT50GdN/a7Kvvzz6TRWhTzH9YZN93Wf65LQSeo/pM5rsaybTB9JK6FmmL2iin4mAuez4p7QSeowl4ZiLrvfZzxaW3A8DTqQ5D+2jNAflMmCFjz5wzb+Q9HOUjqV2pfQh05cDPmiw/SeMTJRdUhyx7YtakWN7ne32aEWV3qgUR0xfwDyqMHE5Bljscf4yQI92/gBgllSbxgS3PMqAqeyzR4AK4EfAbYrkWNFfpLmpIWp/Pirl0KhsgWSIlGkNtOkHdFBgioyY3gJBAouUl06ts83fgN2UIUSKTCcxNhnl3/MgcoSm8x0qfvwOuERlvh4VYTFB6Cwi5QXt82HymV8BvqEp3YhgDvoR4JSPFCy2aRNG6btalMb9oc8Ac5vs+wbrs8dUlA/Thy4iX8mLId8BFgO2aWU4P3KX6a9S5pDYoISuBffdn3YmBuBjNVpxv9miMV6j5acjHUamfkhT4ag2zXcFONZVNs4wYEHSVkqva2R+HvB4uGp6wMYrJ22l9CtgPuk3yJcGLTjV97AUrD2snDVoH/oGIxOf3Nsh5rh88+79pASl3Uy/CDgZYng4zPSNSSAUI/pKdrw/5Hj7qRr/ZsmKuBOKb4JMIh13Nr8OmdBLVKl6XAQKy0qDJHQD068C/jWQZ1/Q8tRYE7qa6acMrazPMH1p3Anl27unDRH6vVaUiTWh05neZ4jQ60yfEndCJ7DE+k9DhN5WY/v/E+JOaBsjdMgQoYOM0La4E2qxFdI/hgh9wK7DijuhX6rRLYyDavwbcmFb6LdqdDegN4wBLfm9fLzW8kKoiBAqhAqhIkKoECqEigihQqgQKoQaHj+rRqtRxSbadvv8PvaE5ukGHWRdzsGbr/e9UHwI+B5+zuP7zfQ3lwRCsxp5jhVaDCj6K4fOP2OpZrX99H07QR+DX4NyuQ4HsSK0rJFX8jjH7TP8AUOBLDpfZ/+Wy2xQLudYZNWVoAg1+Y59NSl5PATVgDsopDnKt7ewryJ7KKFLUBba70GSXcPnukmF3EAj/rtE15BJioVmPHxoNZ9meSDjY+wueqDdaZzyXgGimUhcJh+a9QhslSQR2q/lohUX92Br/rCetMwtsGHfnUmy0CLdbJ4RVWDTGS3pLEt1uC/NVYnUtdImRwr0sIpxJ7SbEaP70LLH9Csyn2ep1vzOqEzIx53QHJFSqPOmK5rlcffQrHUdoH6zLEVLbGKf1SJxl0t+2t4iK010lOeVoDJLn9zW4l0qRhKWhfJp5iT9BW01k2ER22KWWWrxg1Rq/P+Nig2h+mqpwIjzEksLaCUfK6tq0hl0HhokoX6XffXUL8su59kuKVveI5UKzKfK23cJXHoKoSJCqBAqhIo8lv8EGAD34kdWIhlTwQAAAABJRU5ErkJggg==",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2296,
          "_transferSize": 2720,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:37.854Z",
        "time": 416.1439999988943,
        "timings": {
          "blocked": 382.08999999882235,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.45999999999999996,
          "wait": 31.554000000674975,
          "receive": 2.0399999993969686,
          "_blocked_queueing": 377.89799999882234
        }
      },
      {
        "_initiator": {
          "type": "script",
          "stack": {
            "callFrames": [],
            "parent": {
              "description": "Image",
              "callFrames": [
                {
                  "functionName": "buildFragment",
                  "scriptId": "467",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 2,
                  "columnNumber": 13983
                },
                {
                  "functionName": "domManip",
                  "scriptId": "467",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 2,
                  "columnNumber": 16800
                },
                {
                  "functionName": "append",
                  "scriptId": "467",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 2,
                  "columnNumber": 14885
                },
                {
                  "functionName": "",
                  "scriptId": "474",
                  "url": "http://221.178.136.186:8090/pkt/service/myPage",
                  "lineNumber": 141,
                  "columnNumber": 26
                },
                {
                  "functionName": "j",
                  "scriptId": "467",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 1,
                  "columnNumber": 26910
                },
                {
                  "functionName": "fireWith",
                  "scriptId": "467",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 1,
                  "columnNumber": 27723
                },
                {
                  "functionName": "ready",
                  "scriptId": "467",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 1,
                  "columnNumber": 29517
                },
                {
                  "functionName": "I",
                  "scriptId": "467",
                  "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                  "lineNumber": 1,
                  "columnNumber": 29708
                }
              ]
            }
          }
        },
        "_priority": "High",
        "_resourceType": "image",
        "cache": {},
        "connection": "2504",
        "pageref": "page_3",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/button_my_h.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/myPage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 490,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2470-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2470"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:23:36 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2470,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAFQAAABUCAYAAAAcaxDBAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDo1MjQ1NEQyRjUwMTUxMUU4ODUwQ0QxN0REODMxN0IyRCIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDo1MjQ1NEQzMDUwMTUxMUU4ODUwQ0QxN0REODMxN0IyRCI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjUyNDU0RDJENTAxNTExRTg4NTBDRDE3REQ4MzE3QjJEIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjUyNDU0RDJFNTAxNTExRTg4NTBDRDE3REQ4MzE3QjJEIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+aJea/QAABhtJREFUeNrsnV2IVVUU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",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2470,
          "_transferSize": 2894,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:23:38.242Z",
        "time": 40.55800000060117,
        "timings": {
          "blocked": 2.2969999999266584,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 1.144,
          "wait": 31.769999998599292,
          "receive": 5.3470000020752195,
          "_blocked_queueing": 1.5149999999266583
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 19
        },
        "_priority": "VeryHigh",
        "_resourceType": "stylesheet",
        "cache": {},
        "connection": "2583",
        "pageref": "page_4",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/css/pkt.css",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/css,*/*;q=0.1"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 455,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"4282-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "text/css;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "4282"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:24:03 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 4282,
            "mimeType": "text/css",
            "compression": 0,
            "text": ".pkt-div {\r\n    position: absolute;\r\n}\r\n\r\n.pkt-font {\r\n    font-family: 'Microsoft YaHei', monospace;\r\n}\r\n\r\n.pkt-container {\r\n    top: 0;\r\n    left: 0;\r\n    /*width: 375px;*/\r\n    width: 100%;\r\n    /*height: 667px;*/\r\n    color: #FFFFFF;\r\n    position: absolute;\r\n    background-color: #FFFFFF;\r\n}\r\n\r\n.pkt-black {\r\n    background-color: #323641;\r\n}\r\n\r\n.pkt-input {\r\n    width: 121px;\r\n    height: 15px !important;\r\n    outline: none !important;\r\n    box-shadow:none;\r\n    border: none !important;\r\n    -webkit-appearance: none;\r\n}\r\n\r\n.pkt-line {\r\n    height: 1px;\r\n    background-color: #e5e5e5;\r\n}\r\n\r\n.pkt-p {\r\n    font-size: 15px;\r\n    color: #0f0f0f;\r\n    margin: 0;\r\n}\r\n\r\n.parking-info-container {\r\n     top: 373px;\r\n     left: 0;\r\n     /*width: 375px;*/\r\n     width:100%;\r\n     /*height: 246px;*/\r\n     background-color: #edf0f4;\r\n     overflow-x: hidden;\r\n     overflow-y: auto;\r\n }\r\n\r\n.parking-info-container::-webkit-scrollbar {\r\n    width: 8px;\r\n    height: 20px;\r\n}\r\n\r\n.parking-info-container::-webkit-scrollbar-thumb {\r\n    background: #FFFFFF;\r\n    border-radius: 2px;\r\n}\r\n\r\n.parking-info {\r\n    /*left: 10px;*/\r\n    /*width: 356px;*/\r\n    width: 100%;\r\n    /*height: 84px;*/\r\n    background-color: #FFFFFF;\r\n    -webkit-border-radius: 4px;\r\n    border-radius: 4px;\r\n    -moz-box-shadow:2px 2px 10px #ccc;\r\n    -webkit-box-shadow:2px 2px 10px #ccc;\r\n    box-shadow:2px 2px 10px #ccc;\r\n}\r\n\r\n.rent-info {\r\n    margin-left: 0;\r\n    width:100%;\r\n    /*width: 375px;*/\r\n    /*height: 53px;*/\r\n    background-color: #ffffff;\r\n}\r\n\r\n.rent-info-container {\r\n    top: 175px;\r\n    left: 0;\r\n    width:100%;\r\n    /*width: 375px;*/\r\n    /*height: 224px;*/\r\n    overflow-x: hidden;\r\n    overflow-y: auto;\r\n}\r\n\r\n.rent-info-container::-webkit-scrollbar {\r\n    width: 8px;\r\n    height: 20px;\r\n}\r\n\r\n.rent-info-container::-webkit-scrollbar-thumb {\r\n    background: #FFFFFF;\r\n    border-radius: 2px;\r\n}\r\n\r\n.parking-num-div {\r\n    position: absolute;\r\n    top: 17px;\r\n    left: 12px;\r\n    width: 81px;\r\n    height: 42px;\r\n    background-color: #517cce;\r\n    -webkit-border-radius: 4px;\r\n    border-radius: 4px;\r\n}\r\n\r\n.parking-num {\r\n    margin-top: 11px;\r\n    margin-left: 12px;\r\n    font-size: 16px;\r\n    color: #f1f2f9;\r\n}\r\n\r\n.price {\r\n    font-size: 10px;\r\n    margin: 0;\r\n    color: #fe0000\r\n}\r\n\r\n.total-price {\r\n    font-size: 10px;\r\n    margin: 0;\r\n    color: #fe0000\r\n}\r\n\r\n.price-unit {\r\n    font-size: 10px;\r\n    margin: 0;\r\n    color: #666666\r\n}\r\n\r\n.reserve-parking {\r\n    bottom: 0;\r\n    left: 0;\r\n    width: 178px;\r\n    height: 49px;\r\n}\r\n\r\n/*.view-detail {\r\n    bottom: 0;\r\n    right: 0;\r\n    width: 178px;\r\n    height: 49px;\r\n}*/\r\n\r\n.back {\r\n    top: 33px;\r\n    left: 11px;\r\n    width: 35px;\r\n    height: 30px;\r\n    cursor:pointer;\r\n}\r\n\r\n.pkt-file-left {\r\n    top: 127px;\r\n    left: 24px;\r\n    width: 116px;\r\n    height: 116px;\r\n}\r\n\r\n.pkt-file-right {\r\n    top: 127px;\r\n    left: 164px;\r\n    width: 116px;\r\n    height: 116px;\r\n}\r\n\r\n.title1 {\r\n    top: 112px;\r\n    left: 0;\r\n    width: 375px;\r\n    height: 602px;\r\n}\r\n\r\n.title2 {\r\n    top: 65px;\r\n    left: 0;\r\n    width: 375px;\r\n    height: 602px;\r\n}\r\n\r\n.pkt-select {\r\n    appearance: none;\r\n    -moz-appearance: none;\r\n    -webkit-appearance: none;\r\n}\r\n\r\n.publish-begin {\r\n    top: 24px;\r\n    left: 114px;\r\n    width: 50px;\r\n    height: 12px;\r\n}\r\n\r\n.publish-begin-m {\r\n    top: 43px;\r\n    left: 122px;\r\n    width: 25px;\r\n    height: 12px;\r\n}\r\n\r\n.publish-end {\r\n    top: 24px;\r\n    left: 297px;\r\n    width: 50px;\r\n    height: 12px;\r\n}\r\n\r\n.publish-end-m {\r\n    top: 43px;\r\n    left: 307px;\r\n    width: 25px;\r\n    height: 12px;\r\n}\r\n\r\n.publisher {\r\n    font-size: 14px;\r\n    margin: 0;\r\n    color: #666666;\r\n}\r\n\r\n.rent-date-range-div {\r\n    top: 15px;\r\n    left: 13px;\r\n    width: 80px;\r\n    height: 15px;\r\n}\r\n\r\n.rent-date-range {\r\n    font-size: 15px;\r\n    margin: 0;\r\n    color: #000000;\r\n}\r\n\r\n.delete-div {\r\n    top: 15px;\r\n    left: 332px;\r\n    width: 32px;\r\n    height: 15px;\r\n}\r\n\r\n.delete {\r\n    font-size: 15px;\r\n    margin: 0;\r\n    color: #3ca86e;\r\n}\r\n\r\nselect {\r\n    background-color: #ffffff;\r\n}\r\n\r\n.date-border {\r\n    top: 9px;\r\n    width: 66px;\r\n    height: 34px;\r\n    border: 1px solid #3ca86e;\r\n    background-color: #ffffff;\r\n}\r\n\r\n.date-p-div {\r\n    top: 7px;\r\n    left: 16px;\r\n    width: 30px;\r\n    height: 15px;\r\n}\r\n"
          },
          "redirectURL": "",
          "headersSize": 423,
          "bodySize": 4282,
          "_transferSize": 4705,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:24:04.683Z",
        "time": 38.03599999810103,
        "timings": {
          "blocked": 2.7449999987750777,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.794,
          "wait": 32.80500000132411,
          "receive": 1.6919999980018474,
          "_blocked_queueing": 1.790999998775078
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 20
        },
        "_priority": "VeryHigh",
        "_resourceType": "stylesheet",
        "cache": {},
        "connection": "2585",
        "pageref": "page_4",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/css/signin.css",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "text/css,*/*;q=0.1"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 458,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"775-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "text/css;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "775"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:24:03 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 775,
            "mimeType": "text/css",
            "compression": 0,
            "text": "body {\n  /*padding-top: 40px;*/\n  padding-bottom: 40px;\n  background-color: #eee;\n  margin: 0;\n}\n\n.form-signin {\n  max-width: 375px;\n  padding: 15px;\n  margin: 0 auto;\n}\n.form-signin .form-signin-heading,\n.form-signin .checkbox {\n  margin-bottom: 10px;\n}\n.form-signin .checkbox {\n  font-weight: normal;\n}\n.form-signin .form-control {\n  position: relative;\n  height: auto;\n  -webkit-box-sizing: border-box;\n          box-sizing: border-box;\n  padding: 10px;\n  font-size: 16px;\n}\n.form-signin .form-control:focus {\n  z-index: 2;\n}\n.form-signin input[type=\"text\"] {\n  margin-bottom: -1px;\n  border-bottom-right-radius: 0;\n  border-bottom-left-radius: 0;\n}\n.form-signin input[type=\"password\"] {\n  margin-bottom: 10px;\n  border-top-left-radius: 0;\n  border-top-right-radius: 0;\n}\n"
          },
          "redirectURL": "",
          "headersSize": 421,
          "bodySize": 775,
          "_transferSize": 1196,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:24:04.686Z",
        "time": 52.93100000199047,
        "timings": {
          "blocked": 9.741000000541796,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.3860000000000001,
          "wait": 41.56500000037043,
          "receive": 1.2390000010782387,
          "_blocked_queueing": 3.838000000541797
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 28
        },
        "_priority": "High",
        "_resourceType": "script",
        "cache": {},
        "connection": "2583",
        "pageref": "page_4",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/phone.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 440,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"1899-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "1899"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:24:03 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 1899,
            "mimeType": "application/javascript",
            "compression": 0,
            "text": "var view_timer = null;\r\nfunction viewPort(userAgent, pageWidth) {\r\n    var oView = document.getElementById('viewport');\r\n    if (oView) {\r\n        document.head.removeChild(oView);\r\n    }\r\n    if (!pageWidth) {\r\n        pageWidth = 375;//手机页面设计图的宽度，宽度多少设置多少\r\n    }\r\n    var screen_w = parseInt(window.screen.width),\r\n        scale = screen_w / pageWidth;\r\n    if (/Android (\\d+\\.\\d+)/.test(userAgent)) {\r\n        var creat_meta = document.createElement('meta');\r\n        creat_meta.name = 'viewport';\r\n        creat_meta.id = 'viewport';\r\n        var version = parseFloat(RegExp.$1);\r\n        if (version > 2.3) {\r\n            creat_meta.content = 'width=' + pageWidth + ', initial-scale = ' + scale + ',user-scalable=1, minimum-scale = ' + scale + ', maximum-scale = ' + scale + '';\r\n        } else {\r\n            creat_meta.content = '\"width=' + pageWidth + '';\r\n        }\r\n        document.head.appendChild(creat_meta);\r\n    } else {\r\n        var creat_meta = document.createElement('meta');\r\n        creat_meta.name = 'viewport';\r\n        creat_meta.id = 'viewport';\r\n        if(window.orientation=='-90' || window.orientation == '90'){//判断移动设备横屏竖屏\r\n            scale = window.screen.height / pageWidth;\r\n            creat_meta.content = 'width=' + pageWidth + ', initial-scale = ' + scale + ' ,minimum-scale = ' + scale + ', maximum-scale = ' + scale + ', user-scalable=no';\r\n        }\r\n        else{\r\n            creat_meta.content = 'width=' + pageWidth + ', initial-scale = ' + scale + ' ,minimum-scale = ' + scale + ', maximum-scale = ' + scale + ', user-scalable=no';\r\n        }\r\n        document.head.appendChild(creat_meta);\r\n    }\r\n}\r\nviewPort(navigator.userAgent);\r\n\r\nwindow.onresize = function() {\r\n    clearTimeout(view_timer);\r\n    view_timer = setTimeout(function(){\r\n        viewPort(navigator.userAgent);\r\n    }, 500);\r\n}"
          },
          "redirectURL": "",
          "headersSize": 437,
          "bodySize": 1899,
          "_transferSize": 2336,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:24:04.688Z",
        "time": 85.02800000132993,
        "timings": {
          "blocked": 34.587000000478696,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.6879999999999988,
          "wait": 48.056000001156704,
          "receive": 1.6969999996945262,
          "_blocked_queueing": 5.4390000004787
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 29
        },
        "_priority": "High",
        "_resourceType": "script",
        "cache": {},
        "connection": "2585",
        "pageref": "page_4",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 445,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"84324-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "84324"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:24:03 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 84324,
            "mimeType": "application/javascript",
            "compression": 0,
            "text": "/*! jQuery v2.1.3 | (c) 2005, 2014 jQuery Foundation, Inc. | jquery.org/license */\r\n!function(a,b){\"object\"==typeof module&&\"object\"==typeof module.exports?module.exports=a.document?b(a,!0):function(a){if(!a.document)throw new Error(\"jQuery requires a window with a document\");return b(a)}:b(a)}(\"undefined\"!=typeof window?window:this,function(a,b){var c=[],d=c.slice,e=c.concat,f=c.push,g=c.indexOf,h={},i=h.toString,j=h.hasOwnProperty,k={},l=a.document,m=\"2.1.3\",n=function(a,b){return new n.fn.init(a,b)},o=/^[\\s\\uFEFF\\xA0]+|[\\s\\uFEFF\\xA0]+$/g,p=/^-ms-/,q=/-([\\da-z])/gi,r=function(a,b){return b.toUpperCase()};n.fn=n.prototype={jquery:m,constructor:n,selector:\"\",length:0,toArray:function(){return d.call(this)},get:function(a){return null!=a?0>a?this[a+this.length]:this[a]:d.call(this)},pushStack:function(a){var b=n.merge(this.constructor(),a);return b.prevObject=this,b.context=this.context,b},each:function(a,b){return n.each(this,a,b)},map:function(a){return this.pushStack(n.map(this,function(b,c){return a.call(b,c,b)}))},slice:function(){return this.pushStack(d.apply(this,arguments))},first:function(){return this.eq(0)},last:function(){return this.eq(-1)},eq:function(a){var b=this.length,c=+a+(0>a?b:0);return this.pushStack(c>=0&&b>c?[this[c]]:[])},end:function(){return this.prevObject||this.constructor(null)},push:f,sort:c.sort,splice:c.splice},n.extend=n.fn.extend=function(){var a,b,c,d,e,f,g=arguments[0]||{},h=1,i=arguments.length,j=!1;for(\"boolean\"==typeof g&&(j=g,g=arguments[h]||{},h++),\"object\"==typeof g||n.isFunction(g)||(g={}),h===i&&(g=this,h--);i>h;h++)if(null!=(a=arguments[h]))for(b in a)c=g[b],d=a[b],g!==d&&(j&&d&&(n.isPlainObject(d)||(e=n.isArray(d)))?(e?(e=!1,f=c&&n.isArray(c)?c:[]):f=c&&n.isPlainObject(c)?c:{},g[b]=n.extend(j,f,d)):void 0!==d&&(g[b]=d));return g},n.extend({expando:\"jQuery\"+(m+Math.random()).replace(/\\D/g,\"\"),isReady:!0,error:function(a){throw new Error(a)},noop:function(){},isFunction:function(a){return\"function\"===n.type(a)},isArray:Array.isArray,isWindow:function(a){return null!=a&&a===a.window},isNumeric:function(a){return!n.isArray(a)&&a-parseFloat(a)+1>=0},isPlainObject:function(a){return\"object\"!==n.type(a)||a.nodeType||n.isWindow(a)?!1:a.constructor&&!j.call(a.constructor.prototype,\"isPrototypeOf\")?!1:!0},isEmptyObject:function(a){var b;for(b in a)return!1;return!0},type:function(a){return null==a?a+\"\":\"object\"==typeof a||\"function\"==typeof a?h[i.call(a)]||\"object\":typeof a},globalEval:function(a){var b,c=eval;a=n.trim(a),a&&(1===a.indexOf(\"use strict\")?(b=l.createElement(\"script\"),b.text=a,l.head.appendChild(b).parentNode.removeChild(b)):c(a))},camelCase:function(a){return a.replace(p,\"ms-\").replace(q,r)},nodeName:function(a,b){return a.nodeName&&a.nodeName.toLowerCase()===b.toLowerCase()},each:function(a,b,c){var d,e=0,f=a.length,g=s(a);if(c){if(g){for(;f>e;e++)if(d=b.apply(a[e],c),d===!1)break}else for(e in a)if(d=b.apply(a[e],c),d===!1)break}else if(g){for(;f>e;e++)if(d=b.call(a[e],e,a[e]),d===!1)break}else for(e in a)if(d=b.call(a[e],e,a[e]),d===!1)break;return a},trim:function(a){return null==a?\"\":(a+\"\").replace(o,\"\")},makeArray:function(a,b){var c=b||[];return null!=a&&(s(Object(a))?n.merge(c,\"string\"==typeof a?[a]:a):f.call(c,a)),c},inArray:function(a,b,c){return null==b?-1:g.call(b,a,c)},merge:function(a,b){for(var c=+b.length,d=0,e=a.length;c>d;d++)a[e++]=b[d];return a.length=e,a},grep:function(a,b,c){for(var d,e=[],f=0,g=a.length,h=!c;g>f;f++)d=!b(a[f],f),d!==h&&e.push(a[f]);return e},map:function(a,b,c){var d,f=0,g=a.length,h=s(a),i=[];if(h)for(;g>f;f++)d=b(a[f],f,c),null!=d&&i.push(d);else for(f in a)d=b(a[f],f,c),null!=d&&i.push(d);return e.apply([],i)},guid:1,proxy:function(a,b){var c,e,f;return\"string\"==typeof b&&(c=a[b],b=a,a=c),n.isFunction(a)?(e=d.call(arguments,2),f=function(){return a.apply(b||this,e.concat(d.call(arguments)))},f.guid=a.guid=a.guid||n.guid++,f):void 0},now:Date.now,support:k}),n.each(\"Boolean Number String Function Array Date RegExp Object Error\".split(\" \"),function(a,b){h[\"[object \"+b+\"]\"]=b.toLowerCase()});function s(a){var b=a.length,c=n.type(a);return\"function\"===c||n.isWindow(a)?!1:1===a.nodeType&&b?!0:\"array\"===c||0===b||\"number\"==typeof b&&b>0&&b-1 in a}var t=function(a){var b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u=\"sizzle\"+1*new Date,v=a.document,w=0,x=0,y=hb(),z=hb(),A=hb(),B=function(a,b){return a===b&&(l=!0),0},C=1<<31,D={}.hasOwnProperty,E=[],F=E.pop,G=E.push,H=E.push,I=E.slice,J=function(a,b){for(var c=0,d=a.length;d>c;c++)if(a[c]===b)return c;return-1},K=\"checked|selected|async|autofocus|autoplay|controls|defer|disabled|hidden|ismap|loop|multiple|open|readonly|required|scoped\",L=\"[\\\\x20\\\\t\\\\r\\\\n\\\\f]\",M=\"(?:\\\\\\\\.|[\\\\w-]|[^\\\\x00-\\\\xa0])+\",N=M.replace(\"w\",\"w#\"),O=\"\\\\[\"+L+\"*(\"+M+\")(?:\"+L+\"*([*^$|!~]?=)\"+L+\"*(?:'((?:\\\\\\\\.|[^\\\\\\\\'])*)'|\\\"((?:\\\\\\\\.|[^\\\\\\\\\\\"])*)\\\"|(\"+N+\"))|)\"+L+\"*\\\\]\",P=\":(\"+M+\")(?:\\\\((('((?:\\\\\\\\.|[^\\\\\\\\'])*)'|\\\"((?:\\\\\\\\.|[^\\\\\\\\\\\"])*)\\\")|((?:\\\\\\\\.|[^\\\\\\\\()[\\\\]]|\"+O+\")*)|.*)\\\\)|)\",Q=new RegExp(L+\"+\",\"g\"),R=new RegExp(\"^\"+L+\"+|((?:^|[^\\\\\\\\])(?:\\\\\\\\.)*)\"+L+\"+$\",\"g\"),S=new RegExp(\"^\"+L+\"*,\"+L+\"*\"),T=new RegExp(\"^\"+L+\"*([>+~]|\"+L+\")\"+L+\"*\"),U=new RegExp(\"=\"+L+\"*([^\\\\]'\\\"]*?)\"+L+\"*\\\\]\",\"g\"),V=new RegExp(P),W=new RegExp(\"^\"+N+\"$\"),X={ID:new RegExp(\"^#(\"+M+\")\"),CLASS:new RegExp(\"^\\\\.(\"+M+\")\"),TAG:new RegExp(\"^(\"+M.replace(\"w\",\"w*\")+\")\"),ATTR:new RegExp(\"^\"+O),PSEUDO:new RegExp(\"^\"+P),CHILD:new RegExp(\"^:(only|first|last|nth|nth-last)-(child|of-type)(?:\\\\(\"+L+\"*(even|odd|(([+-]|)(\\\\d*)n|)\"+L+\"*(?:([+-]|)\"+L+\"*(\\\\d+)|))\"+L+\"*\\\\)|)\",\"i\"),bool:new RegExp(\"^(?:\"+K+\")$\",\"i\"),needsContext:new RegExp(\"^\"+L+\"*[>+~]|:(even|odd|eq|gt|lt|nth|first|last)(?:\\\\(\"+L+\"*((?:-\\\\d)?\\\\d*)\"+L+\"*\\\\)|)(?=[^-]|$)\",\"i\")},Y=/^(?:input|select|textarea|button)$/i,Z=/^h\\d$/i,$=/^[^{]+\\{\\s*\\[native \\w/,_=/^(?:#([\\w-]+)|(\\w+)|\\.([\\w-]+))$/,ab=/[+~]/,bb=/'|\\\\/g,cb=new RegExp(\"\\\\\\\\([\\\\da-f]{1,6}\"+L+\"?|(\"+L+\")|.)\",\"ig\"),db=function(a,b,c){var d=\"0x\"+b-65536;return d!==d||c?b:0>d?String.fromCharCode(d+65536):String.fromCharCode(d>>10|55296,1023&d|56320)},eb=function(){m()};try{H.apply(E=I.call(v.childNodes),v.childNodes),E[v.childNodes.length].nodeType}catch(fb){H={apply:E.length?function(a,b){G.apply(a,I.call(b))}:function(a,b){var c=a.length,d=0;while(a[c++]=b[d++]);a.length=c-1}}}function gb(a,b,d,e){var f,h,j,k,l,o,r,s,w,x;if((b?b.ownerDocument||b:v)!==n&&m(b),b=b||n,d=d||[],k=b.nodeType,\"string\"!=typeof a||!a||1!==k&&9!==k&&11!==k)return d;if(!e&&p){if(11!==k&&(f=_.exec(a)))if(j=f[1]){if(9===k){if(h=b.getElementById(j),!h||!h.parentNode)return d;if(h.id===j)return d.push(h),d}else if(b.ownerDocument&&(h=b.ownerDocument.getElementById(j))&&t(b,h)&&h.id===j)return d.push(h),d}else{if(f[2])return H.apply(d,b.getElementsByTagName(a)),d;if((j=f[3])&&c.getElementsByClassName)return H.apply(d,b.getElementsByClassName(j)),d}if(c.qsa&&(!q||!q.test(a))){if(s=r=u,w=b,x=1!==k&&a,1===k&&\"object\"!==b.nodeName.toLowerCase()){o=g(a),(r=b.getAttribute(\"id\"))?s=r.replace(bb,\"\\\\$&\"):b.setAttribute(\"id\",s),s=\"[id='\"+s+\"'] \",l=o.length;while(l--)o[l]=s+rb(o[l]);w=ab.test(a)&&pb(b.parentNode)||b,x=o.join(\",\")}if(x)try{return H.apply(d,w.querySelectorAll(x)),d}catch(y){}finally{r||b.removeAttribute(\"id\")}}}return i(a.replace(R,\"$1\"),b,d,e)}function hb(){var a=[];function b(c,e){return a.push(c+\" \")>d.cacheLength&&delete b[a.shift()],b[c+\" \"]=e}return b}function ib(a){return a[u]=!0,a}function jb(a){var b=n.createElement(\"div\");try{return!!a(b)}catch(c){return!1}finally{b.parentNode&&b.parentNode.removeChild(b),b=null}}function kb(a,b){var c=a.split(\"|\"),e=a.length;while(e--)d.attrHandle[c[e]]=b}function lb(a,b){var c=b&&a,d=c&&1===a.nodeType&&1===b.nodeType&&(~b.sourceIndex||C)-(~a.sourceIndex||C);if(d)return d;if(c)while(c=c.nextSibling)if(c===b)return-1;return a?1:-1}function mb(a){return function(b){var c=b.nodeName.toLowerCase();return\"input\"===c&&b.type===a}}function nb(a){return function(b){var c=b.nodeName.toLowerCase();return(\"input\"===c||\"button\"===c)&&b.type===a}}function ob(a){return ib(function(b){return b=+b,ib(function(c,d){var e,f=a([],c.length,b),g=f.length;while(g--)c[e=f[g]]&&(c[e]=!(d[e]=c[e]))})})}function pb(a){return a&&\"undefined\"!=typeof a.getElementsByTagName&&a}c=gb.support={},f=gb.isXML=function(a){var b=a&&(a.ownerDocument||a).documentElement;return b?\"HTML\"!==b.nodeName:!1},m=gb.setDocument=function(a){var b,e,g=a?a.ownerDocument||a:v;return g!==n&&9===g.nodeType&&g.documentElement?(n=g,o=g.documentElement,e=g.defaultView,e&&e!==e.top&&(e.addEventListener?e.addEventListener(\"unload\",eb,!1):e.attachEvent&&e.attachEvent(\"onunload\",eb)),p=!f(g),c.attributes=jb(function(a){return a.className=\"i\",!a.getAttribute(\"className\")}),c.getElementsByTagName=jb(function(a){return a.appendChild(g.createComment(\"\")),!a.getElementsByTagName(\"*\").length}),c.getElementsByClassName=$.test(g.getElementsByClassName),c.getById=jb(function(a){return o.appendChild(a).id=u,!g.getElementsByName||!g.getElementsByName(u).length}),c.getById?(d.find.ID=function(a,b){if(\"undefined\"!=typeof b.getElementById&&p){var c=b.getElementById(a);return c&&c.parentNode?[c]:[]}},d.filter.ID=function(a){var b=a.replace(cb,db);return function(a){return a.getAttribute(\"id\")===b}}):(delete d.find.ID,d.filter.ID=function(a){var b=a.replace(cb,db);return function(a){var c=\"undefined\"!=typeof a.getAttributeNode&&a.getAttributeNode(\"id\");return c&&c.value===b}}),d.find.TAG=c.getElementsByTagName?function(a,b){return\"undefined\"!=typeof b.getElementsByTagName?b.getElementsByTagName(a):c.qsa?b.querySelectorAll(a):void 0}:function(a,b){var c,d=[],e=0,f=b.getElementsByTagName(a);if(\"*\"===a){while(c=f[e++])1===c.nodeType&&d.push(c);return d}return f},d.find.CLASS=c.getElementsByClassName&&function(a,b){return p?b.getElementsByClassName(a):void 0},r=[],q=[],(c.qsa=$.test(g.querySelectorAll))&&(jb(function(a){o.appendChild(a).innerHTML=\"<a id='\"+u+\"'></a><select id='\"+u+\"-\\f]' msallowcapture=''><option selected=''></option></select>\",a.querySelectorAll(\"[msallowcapture^='']\").length&&q.push(\"[*^$]=\"+L+\"*(?:''|\\\"\\\")\"),a.querySelectorAll(\"[selected]\").length||q.push(\"\\\\[\"+L+\"*(?:value|\"+K+\")\"),a.querySelectorAll(\"[id~=\"+u+\"-]\").length||q.push(\"~=\"),a.querySelectorAll(\":checked\").length||q.push(\":checked\"),a.querySelectorAll(\"a#\"+u+\"+*\").length||q.push(\".#.+[+~]\")}),jb(function(a){var b=g.createElement(\"input\");b.setAttribute(\"type\",\"hidden\"),a.appendChild(b).setAttribute(\"name\",\"D\"),a.querySelectorAll(\"[name=d]\").length&&q.push(\"name\"+L+\"*[*^$|!~]?=\"),a.querySelectorAll(\":enabled\").length||q.push(\":enabled\",\":disabled\"),a.querySelectorAll(\"*,:x\"),q.push(\",.*:\")})),(c.matchesSelector=$.test(s=o.matches||o.webkitMatchesSelector||o.mozMatchesSelector||o.oMatchesSelector||o.msMatchesSelector))&&jb(function(a){c.disconnectedMatch=s.call(a,\"div\"),s.call(a,\"[s!='']:x\"),r.push(\"!=\",P)}),q=q.length&&new RegExp(q.join(\"|\")),r=r.length&&new RegExp(r.join(\"|\")),b=$.test(o.compareDocumentPosition),t=b||$.test(o.contains)?function(a,b){var c=9===a.nodeType?a.documentElement:a,d=b&&b.parentNode;return a===d||!(!d||1!==d.nodeType||!(c.contains?c.contains(d):a.compareDocumentPosition&&16&a.compareDocumentPosition(d)))}:function(a,b){if(b)while(b=b.parentNode)if(b===a)return!0;return!1},B=b?function(a,b){if(a===b)return l=!0,0;var d=!a.compareDocumentPosition-!b.compareDocumentPosition;return d?d:(d=(a.ownerDocument||a)===(b.ownerDocument||b)?a.compareDocumentPosition(b):1,1&d||!c.sortDetached&&b.compareDocumentPosition(a)===d?a===g||a.ownerDocument===v&&t(v,a)?-1:b===g||b.ownerDocument===v&&t(v,b)?1:k?J(k,a)-J(k,b):0:4&d?-1:1)}:function(a,b){if(a===b)return l=!0,0;var c,d=0,e=a.parentNode,f=b.parentNode,h=[a],i=[b];if(!e||!f)return a===g?-1:b===g?1:e?-1:f?1:k?J(k,a)-J(k,b):0;if(e===f)return lb(a,b);c=a;while(c=c.parentNode)h.unshift(c);c=b;while(c=c.parentNode)i.unshift(c);while(h[d]===i[d])d++;return d?lb(h[d],i[d]):h[d]===v?-1:i[d]===v?1:0},g):n},gb.matches=function(a,b){return gb(a,null,null,b)},gb.matchesSelector=function(a,b){if((a.ownerDocument||a)!==n&&m(a),b=b.replace(U,\"='$1']\"),!(!c.matchesSelector||!p||r&&r.test(b)||q&&q.test(b)))try{var d=s.call(a,b);if(d||c.disconnectedMatch||a.document&&11!==a.document.nodeType)return d}catch(e){}return gb(b,n,null,[a]).length>0},gb.contains=function(a,b){return(a.ownerDocument||a)!==n&&m(a),t(a,b)},gb.attr=function(a,b){(a.ownerDocument||a)!==n&&m(a);var e=d.attrHandle[b.toLowerCase()],f=e&&D.call(d.attrHandle,b.toLowerCase())?e(a,b,!p):void 0;return void 0!==f?f:c.attributes||!p?a.getAttribute(b):(f=a.getAttributeNode(b))&&f.specified?f.value:null},gb.error=function(a){throw new Error(\"Syntax error, unrecognized expression: \"+a)},gb.uniqueSort=function(a){var b,d=[],e=0,f=0;if(l=!c.detectDuplicates,k=!c.sortStable&&a.slice(0),a.sort(B),l){while(b=a[f++])b===a[f]&&(e=d.push(f));while(e--)a.splice(d[e],1)}return k=null,a},e=gb.getText=function(a){var b,c=\"\",d=0,f=a.nodeType;if(f){if(1===f||9===f||11===f){if(\"string\"==typeof a.textContent)return a.textContent;for(a=a.firstChild;a;a=a.nextSibling)c+=e(a)}else if(3===f||4===f)return a.nodeValue}else while(b=a[d++])c+=e(b);return c},d=gb.selectors={cacheLength:50,createPseudo:ib,match:X,attrHandle:{},find:{},relative:{\">\":{dir:\"parentNode\",first:!0},\" \":{dir:\"parentNode\"},\"+\":{dir:\"previousSibling\",first:!0},\"~\":{dir:\"previousSibling\"}},preFilter:{ATTR:function(a){return a[1]=a[1].replace(cb,db),a[3]=(a[3]||a[4]||a[5]||\"\").replace(cb,db),\"~=\"===a[2]&&(a[3]=\" \"+a[3]+\" \"),a.slice(0,4)},CHILD:function(a){return a[1]=a[1].toLowerCase(),\"nth\"===a[1].slice(0,3)?(a[3]||gb.error(a[0]),a[4]=+(a[4]?a[5]+(a[6]||1):2*(\"even\"===a[3]||\"odd\"===a[3])),a[5]=+(a[7]+a[8]||\"odd\"===a[3])):a[3]&&gb.error(a[0]),a},PSEUDO:function(a){var b,c=!a[6]&&a[2];return X.CHILD.test(a[0])?null:(a[3]?a[2]=a[4]||a[5]||\"\":c&&V.test(c)&&(b=g(c,!0))&&(b=c.indexOf(\")\",c.length-b)-c.length)&&(a[0]=a[0].slice(0,b),a[2]=c.slice(0,b)),a.slice(0,3))}},filter:{TAG:function(a){var b=a.replace(cb,db).toLowerCase();return\"*\"===a?function(){return!0}:function(a){return a.nodeName&&a.nodeName.toLowerCase()===b}},CLASS:function(a){var b=y[a+\" \"];return b||(b=new RegExp(\"(^|\"+L+\")\"+a+\"(\"+L+\"|$)\"))&&y(a,function(a){return b.test(\"string\"==typeof a.className&&a.className||\"undefined\"!=typeof a.getAttribute&&a.getAttribute(\"class\")||\"\")})},ATTR:function(a,b,c){return function(d){var e=gb.attr(d,a);return null==e?\"!=\"===b:b?(e+=\"\",\"=\"===b?e===c:\"!=\"===b?e!==c:\"^=\"===b?c&&0===e.indexOf(c):\"*=\"===b?c&&e.indexOf(c)>-1:\"$=\"===b?c&&e.slice(-c.length)===c:\"~=\"===b?(\" \"+e.replace(Q,\" \")+\" \").indexOf(c)>-1:\"|=\"===b?e===c||e.slice(0,c.length+1)===c+\"-\":!1):!0}},CHILD:function(a,b,c,d,e){var f=\"nth\"!==a.slice(0,3),g=\"last\"!==a.slice(-4),h=\"of-type\"===b;return 1===d&&0===e?function(a){return!!a.parentNode}:function(b,c,i){var j,k,l,m,n,o,p=f!==g?\"nextSibling\":\"previousSibling\",q=b.parentNode,r=h&&b.nodeName.toLowerCase(),s=!i&&!h;if(q){if(f){while(p){l=b;while(l=l[p])if(h?l.nodeName.toLowerCase()===r:1===l.nodeType)return!1;o=p=\"only\"===a&&!o&&\"nextSibling\"}return!0}if(o=[g?q.firstChild:q.lastChild],g&&s){k=q[u]||(q[u]={}),j=k[a]||[],n=j[0]===w&&j[1],m=j[0]===w&&j[2],l=n&&q.childNodes[n];while(l=++n&&l&&l[p]||(m=n=0)||o.pop())if(1===l.nodeType&&++m&&l===b){k[a]=[w,n,m];break}}else if(s&&(j=(b[u]||(b[u]={}))[a])&&j[0]===w)m=j[1];else while(l=++n&&l&&l[p]||(m=n=0)||o.pop())if((h?l.nodeName.toLowerCase()===r:1===l.nodeType)&&++m&&(s&&((l[u]||(l[u]={}))[a]=[w,m]),l===b))break;return m-=e,m===d||m%d===0&&m/d>=0}}},PSEUDO:function(a,b){var c,e=d.pseudos[a]||d.setFilters[a.toLowerCase()]||gb.error(\"unsupported pseudo: \"+a);return e[u]?e(b):e.length>1?(c=[a,a,\"\",b],d.setFilters.hasOwnProperty(a.toLowerCase())?ib(function(a,c){var d,f=e(a,b),g=f.length;while(g--)d=J(a,f[g]),a[d]=!(c[d]=f[g])}):function(a){return e(a,0,c)}):e}},pseudos:{not:ib(function(a){var b=[],c=[],d=h(a.replace(R,\"$1\"));return d[u]?ib(function(a,b,c,e){var f,g=d(a,null,e,[]),h=a.length;while(h--)(f=g[h])&&(a[h]=!(b[h]=f))}):function(a,e,f){return b[0]=a,d(b,null,f,c),b[0]=null,!c.pop()}}),has:ib(function(a){return function(b){return gb(a,b).length>0}}),contains:ib(function(a){return a=a.replace(cb,db),function(b){return(b.textContent||b.innerText||e(b)).indexOf(a)>-1}}),lang:ib(function(a){return W.test(a||\"\")||gb.error(\"unsupported lang: \"+a),a=a.replace(cb,db).toLowerCase(),function(b){var c;do if(c=p?b.lang:b.getAttribute(\"xml:lang\")||b.getAttribute(\"lang\"))return c=c.toLowerCase(),c===a||0===c.indexOf(a+\"-\");while((b=b.parentNode)&&1===b.nodeType);return!1}}),target:function(b){var c=a.location&&a.location.hash;return c&&c.slice(1)===b.id},root:function(a){return a===o},focus:function(a){return a===n.activeElement&&(!n.hasFocus||n.hasFocus())&&!!(a.type||a.href||~a.tabIndex)},enabled:function(a){return a.disabled===!1},disabled:function(a){return a.disabled===!0},checked:function(a){var b=a.nodeName.toLowerCase();return\"input\"===b&&!!a.checked||\"option\"===b&&!!a.selected},selected:function(a){return a.parentNode&&a.parentNode.selectedIndex,a.selected===!0},empty:function(a){for(a=a.firstChild;a;a=a.nextSibling)if(a.nodeType<6)return!1;return!0},parent:function(a){return!d.pseudos.empty(a)},header:function(a){return Z.test(a.nodeName)},input:function(a){return Y.test(a.nodeName)},button:function(a){var b=a.nodeName.toLowerCase();return\"input\"===b&&\"button\"===a.type||\"button\"===b},text:function(a){var b;return\"input\"===a.nodeName.toLowerCase()&&\"text\"===a.type&&(null==(b=a.getAttribute(\"type\"))||\"text\"===b.toLowerCase())},first:ob(function(){return[0]}),last:ob(function(a,b){return[b-1]}),eq:ob(function(a,b,c){return[0>c?c+b:c]}),even:ob(function(a,b){for(var c=0;b>c;c+=2)a.push(c);return a}),odd:ob(function(a,b){for(var c=1;b>c;c+=2)a.push(c);return a}),lt:ob(function(a,b,c){for(var d=0>c?c+b:c;--d>=0;)a.push(d);return a}),gt:ob(function(a,b,c){for(var d=0>c?c+b:c;++d<b;)a.push(d);return a})}},d.pseudos.nth=d.pseudos.eq;for(b in{radio:!0,checkbox:!0,file:!0,password:!0,image:!0})d.pseudos[b]=mb(b);for(b in{submit:!0,reset:!0})d.pseudos[b]=nb(b);function qb(){}qb.prototype=d.filters=d.pseudos,d.setFilters=new qb,g=gb.tokenize=function(a,b){var c,e,f,g,h,i,j,k=z[a+\" \"];if(k)return b?0:k.slice(0);h=a,i=[],j=d.preFilter;while(h){(!c||(e=S.exec(h)))&&(e&&(h=h.slice(e[0].length)||h),i.push(f=[])),c=!1,(e=T.exec(h))&&(c=e.shift(),f.push({value:c,type:e[0].replace(R,\" \")}),h=h.slice(c.length));for(g in d.filter)!(e=X[g].exec(h))||j[g]&&!(e=j[g](e))||(c=e.shift(),f.push({value:c,type:g,matches:e}),h=h.slice(c.length));if(!c)break}return b?h.length:h?gb.error(a):z(a,i).slice(0)};function rb(a){for(var b=0,c=a.length,d=\"\";c>b;b++)d+=a[b].value;return d}function sb(a,b,c){var d=b.dir,e=c&&\"parentNode\"===d,f=x++;return b.first?function(b,c,f){while(b=b[d])if(1===b.nodeType||e)return a(b,c,f)}:function(b,c,g){var h,i,j=[w,f];if(g){while(b=b[d])if((1===b.nodeType||e)&&a(b,c,g))return!0}else while(b=b[d])if(1===b.nodeType||e){if(i=b[u]||(b[u]={}),(h=i[d])&&h[0]===w&&h[1]===f)return j[2]=h[2];if(i[d]=j,j[2]=a(b,c,g))return!0}}}function tb(a){return a.length>1?function(b,c,d){var e=a.length;while(e--)if(!a[e](b,c,d))return!1;return!0}:a[0]}function ub(a,b,c){for(var d=0,e=b.length;e>d;d++)gb(a,b[d],c);return c}function vb(a,b,c,d,e){for(var f,g=[],h=0,i=a.length,j=null!=b;i>h;h++)(f=a[h])&&(!c||c(f,d,e))&&(g.push(f),j&&b.push(h));return g}function wb(a,b,c,d,e,f){return d&&!d[u]&&(d=wb(d)),e&&!e[u]&&(e=wb(e,f)),ib(function(f,g,h,i){var j,k,l,m=[],n=[],o=g.length,p=f||ub(b||\"*\",h.nodeType?[h]:h,[]),q=!a||!f&&b?p:vb(p,m,a,h,i),r=c?e||(f?a:o||d)?[]:g:q;if(c&&c(q,r,h,i),d){j=vb(r,n),d(j,[],h,i),k=j.length;while(k--)(l=j[k])&&(r[n[k]]=!(q[n[k]]=l))}if(f){if(e||a){if(e){j=[],k=r.length;while(k--)(l=r[k])&&j.push(q[k]=l);e(null,r=[],j,i)}k=r.length;while(k--)(l=r[k])&&(j=e?J(f,l):m[k])>-1&&(f[j]=!(g[j]=l))}}else r=vb(r===g?r.splice(o,r.length):r),e?e(null,g,r,i):H.apply(g,r)})}function xb(a){for(var b,c,e,f=a.length,g=d.relative[a[0].type],h=g||d.relative[\" \"],i=g?1:0,k=sb(function(a){return a===b},h,!0),l=sb(function(a){return J(b,a)>-1},h,!0),m=[function(a,c,d){var e=!g&&(d||c!==j)||((b=c).nodeType?k(a,c,d):l(a,c,d));return b=null,e}];f>i;i++)if(c=d.relative[a[i].type])m=[sb(tb(m),c)];else{if(c=d.filter[a[i].type].apply(null,a[i].matches),c[u]){for(e=++i;f>e;e++)if(d.relative[a[e].type])break;return wb(i>1&&tb(m),i>1&&rb(a.slice(0,i-1).concat({value:\" \"===a[i-2].type?\"*\":\"\"})).replace(R,\"$1\"),c,e>i&&xb(a.slice(i,e)),f>e&&xb(a=a.slice(e)),f>e&&rb(a))}m.push(c)}return tb(m)}function yb(a,b){var c=b.length>0,e=a.length>0,f=function(f,g,h,i,k){var l,m,o,p=0,q=\"0\",r=f&&[],s=[],t=j,u=f||e&&d.find.TAG(\"*\",k),v=w+=null==t?1:Math.random()||.1,x=u.length;for(k&&(j=g!==n&&g);q!==x&&null!=(l=u[q]);q++){if(e&&l){m=0;while(o=a[m++])if(o(l,g,h)){i.push(l);break}k&&(w=v)}c&&((l=!o&&l)&&p--,f&&r.push(l))}if(p+=q,c&&q!==p){m=0;while(o=b[m++])o(r,s,g,h);if(f){if(p>0)while(q--)r[q]||s[q]||(s[q]=F.call(i));s=vb(s)}H.apply(i,s),k&&!f&&s.length>0&&p+b.length>1&&gb.uniqueSort(i)}return k&&(w=v,j=t),r};return c?ib(f):f}return h=gb.compile=function(a,b){var c,d=[],e=[],f=A[a+\" \"];if(!f){b||(b=g(a)),c=b.length;while(c--)f=xb(b[c]),f[u]?d.push(f):e.push(f);f=A(a,yb(e,d)),f.selector=a}return f},i=gb.select=function(a,b,e,f){var i,j,k,l,m,n=\"function\"==typeof a&&a,o=!f&&g(a=n.selector||a);if(e=e||[],1===o.length){if(j=o[0]=o[0].slice(0),j.length>2&&\"ID\"===(k=j[0]).type&&c.getById&&9===b.nodeType&&p&&d.relative[j[1].type]){if(b=(d.find.ID(k.matches[0].replace(cb,db),b)||[])[0],!b)return e;n&&(b=b.parentNode),a=a.slice(j.shift().value.length)}i=X.needsContext.test(a)?0:j.length;while(i--){if(k=j[i],d.relative[l=k.type])break;if((m=d.find[l])&&(f=m(k.matches[0].replace(cb,db),ab.test(j[0].type)&&pb(b.parentNode)||b))){if(j.splice(i,1),a=f.length&&rb(j),!a)return H.apply(e,f),e;break}}}return(n||h(a,o))(f,b,!p,e,ab.test(a)&&pb(b.parentNode)||b),e},c.sortStable=u.split(\"\").sort(B).join(\"\")===u,c.detectDuplicates=!!l,m(),c.sortDetached=jb(function(a){return 1&a.compareDocumentPosition(n.createElement(\"div\"))}),jb(function(a){return a.innerHTML=\"<a href='#'></a>\",\"#\"===a.firstChild.getAttribute(\"href\")})||kb(\"type|href|height|width\",function(a,b,c){return c?void 0:a.getAttribute(b,\"type\"===b.toLowerCase()?1:2)}),c.attributes&&jb(function(a){return a.innerHTML=\"<input/>\",a.firstChild.setAttribute(\"value\",\"\"),\"\"===a.firstChild.getAttribute(\"value\")})||kb(\"value\",function(a,b,c){return c||\"input\"!==a.nodeName.toLowerCase()?void 0:a.defaultValue}),jb(function(a){return null==a.getAttribute(\"disabled\")})||kb(K,function(a,b,c){var d;return c?void 0:a[b]===!0?b.toLowerCase():(d=a.getAttributeNode(b))&&d.specified?d.value:null}),gb}(a);n.find=t,n.expr=t.selectors,n.expr[\":\"]=n.expr.pseudos,n.unique=t.uniqueSort,n.text=t.getText,n.isXMLDoc=t.isXML,n.contains=t.contains;var u=n.expr.match.needsContext,v=/^<(\\w+)\\s*\\/?>(?:<\\/\\1>|)$/,w=/^.[^:#\\[\\.,]*$/;function x(a,b,c){if(n.isFunction(b))return n.grep(a,function(a,d){return!!b.call(a,d,a)!==c});if(b.nodeType)return n.grep(a,function(a){return a===b!==c});if(\"string\"==typeof b){if(w.test(b))return n.filter(b,a,c);b=n.filter(b,a)}return n.grep(a,function(a){return g.call(b,a)>=0!==c})}n.filter=function(a,b,c){var d=b[0];return c&&(a=\":not(\"+a+\")\"),1===b.length&&1===d.nodeType?n.find.matchesSelector(d,a)?[d]:[]:n.find.matches(a,n.grep(b,function(a){return 1===a.nodeType}))},n.fn.extend({find:function(a){var b,c=this.length,d=[],e=this;if(\"string\"!=typeof a)return this.pushStack(n(a).filter(function(){for(b=0;c>b;b++)if(n.contains(e[b],this))return!0}));for(b=0;c>b;b++)n.find(a,e[b],d);return d=this.pushStack(c>1?n.unique(d):d),d.selector=this.selector?this.selector+\" \"+a:a,d},filter:function(a){return this.pushStack(x(this,a||[],!1))},not:function(a){return this.pushStack(x(this,a||[],!0))},is:function(a){return!!x(this,\"string\"==typeof a&&u.test(a)?n(a):a||[],!1).length}});var y,z=/^(?:\\s*(<[\\w\\W]+>)[^>]*|#([\\w-]*))$/,A=n.fn.init=function(a,b){var c,d;if(!a)return this;if(\"string\"==typeof a){if(c=\"<\"===a[0]&&\">\"===a[a.length-1]&&a.length>=3?[null,a,null]:z.exec(a),!c||!c[1]&&b)return!b||b.jquery?(b||y).find(a):this.constructor(b).find(a);if(c[1]){if(b=b instanceof n?b[0]:b,n.merge(this,n.parseHTML(c[1],b&&b.nodeType?b.ownerDocument||b:l,!0)),v.test(c[1])&&n.isPlainObject(b))for(c in b)n.isFunction(this[c])?this[c](b[c]):this.attr(c,b[c]);return this}return d=l.getElementById(c[2]),d&&d.parentNode&&(this.length=1,this[0]=d),this.context=l,this.selector=a,this}return a.nodeType?(this.context=this[0]=a,this.length=1,this):n.isFunction(a)?\"undefined\"!=typeof y.ready?y.ready(a):a(n):(void 0!==a.selector&&(this.selector=a.selector,this.context=a.context),n.makeArray(a,this))};A.prototype=n.fn,y=n(l);var B=/^(?:parents|prev(?:Until|All))/,C={children:!0,contents:!0,next:!0,prev:!0};n.extend({dir:function(a,b,c){var d=[],e=void 0!==c;while((a=a[b])&&9!==a.nodeType)if(1===a.nodeType){if(e&&n(a).is(c))break;d.push(a)}return d},sibling:function(a,b){for(var c=[];a;a=a.nextSibling)1===a.nodeType&&a!==b&&c.push(a);return c}}),n.fn.extend({has:function(a){var b=n(a,this),c=b.length;return this.filter(function(){for(var a=0;c>a;a++)if(n.contains(this,b[a]))return!0})},closest:function(a,b){for(var c,d=0,e=this.length,f=[],g=u.test(a)||\"string\"!=typeof a?n(a,b||this.context):0;e>d;d++)for(c=this[d];c&&c!==b;c=c.parentNode)if(c.nodeType<11&&(g?g.index(c)>-1:1===c.nodeType&&n.find.matchesSelector(c,a))){f.push(c);break}return this.pushStack(f.length>1?n.unique(f):f)},index:function(a){return a?\"string\"==typeof a?g.call(n(a),this[0]):g.call(this,a.jquery?a[0]:a):this[0]&&this[0].parentNode?this.first().prevAll().length:-1},add:function(a,b){return this.pushStack(n.unique(n.merge(this.get(),n(a,b))))},addBack:function(a){return this.add(null==a?this.prevObject:this.prevObject.filter(a))}});function D(a,b){while((a=a[b])&&1!==a.nodeType);return a}n.each({parent:function(a){var b=a.parentNode;return b&&11!==b.nodeType?b:null},parents:function(a){return n.dir(a,\"parentNode\")},parentsUntil:function(a,b,c){return n.dir(a,\"parentNode\",c)},next:function(a){return D(a,\"nextSibling\")},prev:function(a){return D(a,\"previousSibling\")},nextAll:function(a){return n.dir(a,\"nextSibling\")},prevAll:function(a){return n.dir(a,\"previousSibling\")},nextUntil:function(a,b,c){return n.dir(a,\"nextSibling\",c)},prevUntil:function(a,b,c){return n.dir(a,\"previousSibling\",c)},siblings:function(a){return n.sibling((a.parentNode||{}).firstChild,a)},children:function(a){return n.sibling(a.firstChild)},contents:function(a){return a.contentDocument||n.merge([],a.childNodes)}},function(a,b){n.fn[a]=function(c,d){var e=n.map(this,b,c);return\"Until\"!==a.slice(-5)&&(d=c),d&&\"string\"==typeof d&&(e=n.filter(d,e)),this.length>1&&(C[a]||n.unique(e),B.test(a)&&e.reverse()),this.pushStack(e)}});var E=/\\S+/g,F={};function G(a){var b=F[a]={};return n.each(a.match(E)||[],function(a,c){b[c]=!0}),b}n.Callbacks=function(a){a=\"string\"==typeof a?F[a]||G(a):n.extend({},a);var b,c,d,e,f,g,h=[],i=!a.once&&[],j=function(l){for(b=a.memory&&l,c=!0,g=e||0,e=0,f=h.length,d=!0;h&&f>g;g++)if(h[g].apply(l[0],l[1])===!1&&a.stopOnFalse){b=!1;break}d=!1,h&&(i?i.length&&j(i.shift()):b?h=[]:k.disable())},k={add:function(){if(h){var c=h.length;!function g(b){n.each(b,function(b,c){var d=n.type(c);\"function\"===d?a.unique&&k.has(c)||h.push(c):c&&c.length&&\"string\"!==d&&g(c)})}(arguments),d?f=h.length:b&&(e=c,j(b))}return this},remove:function(){return h&&n.each(arguments,function(a,b){var c;while((c=n.inArray(b,h,c))>-1)h.splice(c,1),d&&(f>=c&&f--,g>=c&&g--)}),this},has:function(a){return a?n.inArray(a,h)>-1:!(!h||!h.length)},empty:function(){return h=[],f=0,this},disable:function(){return h=i=b=void 0,this},disabled:function(){return!h},lock:function(){return i=void 0,b||k.disable(),this},locked:function(){return!i},fireWith:function(a,b){return!h||c&&!i||(b=b||[],b=[a,b.slice?b.slice():b],d?i.push(b):j(b)),this},fire:function(){return k.fireWith(this,arguments),this},fired:function(){return!!c}};return k},n.extend({Deferred:function(a){var b=[[\"resolve\",\"done\",n.Callbacks(\"once memory\"),\"resolved\"],[\"reject\",\"fail\",n.Callbacks(\"once memory\"),\"rejected\"],[\"notify\",\"progress\",n.Callbacks(\"memory\")]],c=\"pending\",d={state:function(){return c},always:function(){return e.done(arguments).fail(arguments),this},then:function(){var a=arguments;return n.Deferred(function(c){n.each(b,function(b,f){var g=n.isFunction(a[b])&&a[b];e[f[1]](function(){var a=g&&g.apply(this,arguments);a&&n.isFunction(a.promise)?a.promise().done(c.resolve).fail(c.reject).progress(c.notify):c[f[0]+\"With\"](this===d?c.promise():this,g?[a]:arguments)})}),a=null}).promise()},promise:function(a){return null!=a?n.extend(a,d):d}},e={};return d.pipe=d.then,n.each(b,function(a,f){var g=f[2],h=f[3];d[f[1]]=g.add,h&&g.add(function(){c=h},b[1^a][2].disable,b[2][2].lock),e[f[0]]=function(){return e[f[0]+\"With\"](this===e?d:this,arguments),this},e[f[0]+\"With\"]=g.fireWith}),d.promise(e),a&&a.call(e,e),e},when:function(a){var b=0,c=d.call(arguments),e=c.length,f=1!==e||a&&n.isFunction(a.promise)?e:0,g=1===f?a:n.Deferred(),h=function(a,b,c){return function(e){b[a]=this,c[a]=arguments.length>1?d.call(arguments):e,c===i?g.notifyWith(b,c):--f||g.resolveWith(b,c)}},i,j,k;if(e>1)for(i=new Array(e),j=new Array(e),k=new Array(e);e>b;b++)c[b]&&n.isFunction(c[b].promise)?c[b].promise().done(h(b,k,c)).fail(g.reject).progress(h(b,j,i)):--f;return f||g.resolveWith(k,c),g.promise()}});var H;n.fn.ready=function(a){return n.ready.promise().done(a),this},n.extend({isReady:!1,readyWait:1,holdReady:function(a){a?n.readyWait++:n.ready(!0)},ready:function(a){(a===!0?--n.readyWait:n.isReady)||(n.isReady=!0,a!==!0&&--n.readyWait>0||(H.resolveWith(l,[n]),n.fn.triggerHandler&&(n(l).triggerHandler(\"ready\"),n(l).off(\"ready\"))))}});function I(){l.removeEventListener(\"DOMContentLoaded\",I,!1),a.removeEventListener(\"load\",I,!1),n.ready()}n.ready.promise=function(b){return H||(H=n.Deferred(),\"complete\"===l.readyState?setTimeout(n.ready):(l.addEventListener(\"DOMContentLoaded\",I,!1),a.addEventListener(\"load\",I,!1))),H.promise(b)},n.ready.promise();var J=n.access=function(a,b,c,d,e,f,g){var h=0,i=a.length,j=null==c;if(\"object\"===n.type(c)){e=!0;for(h in c)n.access(a,b,h,c[h],!0,f,g)}else if(void 0!==d&&(e=!0,n.isFunction(d)||(g=!0),j&&(g?(b.call(a,d),b=null):(j=b,b=function(a,b,c){return j.call(n(a),c)})),b))for(;i>h;h++)b(a[h],c,g?d:d.call(a[h],h,b(a[h],c)));return e?a:j?b.call(a):i?b(a[0],c):f};n.acceptData=function(a){return 1===a.nodeType||9===a.nodeType||!+a.nodeType};function K(){Object.defineProperty(this.cache={},0,{get:function(){return{}}}),this.expando=n.expando+K.uid++}K.uid=1,K.accepts=n.acceptData,K.prototype={key:function(a){if(!K.accepts(a))return 0;var b={},c=a[this.expando];if(!c){c=K.uid++;try{b[this.expando]={value:c},Object.defineProperties(a,b)}catch(d){b[this.expando]=c,n.extend(a,b)}}return this.cache[c]||(this.cache[c]={}),c},set:function(a,b,c){var d,e=this.key(a),f=this.cache[e];if(\"string\"==typeof b)f[b]=c;else if(n.isEmptyObject(f))n.extend(this.cache[e],b);else for(d in b)f[d]=b[d];return f},get:function(a,b){var c=this.cache[this.key(a)];return void 0===b?c:c[b]},access:function(a,b,c){var d;return void 0===b||b&&\"string\"==typeof b&&void 0===c?(d=this.get(a,b),void 0!==d?d:this.get(a,n.camelCase(b))):(this.set(a,b,c),void 0!==c?c:b)},remove:function(a,b){var c,d,e,f=this.key(a),g=this.cache[f];if(void 0===b)this.cache[f]={};else{n.isArray(b)?d=b.concat(b.map(n.camelCase)):(e=n.camelCase(b),b in g?d=[b,e]:(d=e,d=d in g?[d]:d.match(E)||[])),c=d.length;while(c--)delete g[d[c]]}},hasData:function(a){return!n.isEmptyObject(this.cache[a[this.expando]]||{})},discard:function(a){a[this.expando]&&delete this.cache[a[this.expando]]}};var L=new K,M=new K,N=/^(?:\\{[\\w\\W]*\\}|\\[[\\w\\W]*\\])$/,O=/([A-Z])/g;function P(a,b,c){var d;if(void 0===c&&1===a.nodeType)if(d=\"data-\"+b.replace(O,\"-$1\").toLowerCase(),c=a.getAttribute(d),\"string\"==typeof c){try{c=\"true\"===c?!0:\"false\"===c?!1:\"null\"===c?null:+c+\"\"===c?+c:N.test(c)?n.parseJSON(c):c}catch(e){}M.set(a,b,c)}else c=void 0;return c}n.extend({hasData:function(a){return M.hasData(a)||L.hasData(a)},data:function(a,b,c){return M.access(a,b,c)\r\n},removeData:function(a,b){M.remove(a,b)},_data:function(a,b,c){return L.access(a,b,c)},_removeData:function(a,b){L.remove(a,b)}}),n.fn.extend({data:function(a,b){var c,d,e,f=this[0],g=f&&f.attributes;if(void 0===a){if(this.length&&(e=M.get(f),1===f.nodeType&&!L.get(f,\"hasDataAttrs\"))){c=g.length;while(c--)g[c]&&(d=g[c].name,0===d.indexOf(\"data-\")&&(d=n.camelCase(d.slice(5)),P(f,d,e[d])));L.set(f,\"hasDataAttrs\",!0)}return e}return\"object\"==typeof a?this.each(function(){M.set(this,a)}):J(this,function(b){var c,d=n.camelCase(a);if(f&&void 0===b){if(c=M.get(f,a),void 0!==c)return c;if(c=M.get(f,d),void 0!==c)return c;if(c=P(f,d,void 0),void 0!==c)return c}else this.each(function(){var c=M.get(this,d);M.set(this,d,b),-1!==a.indexOf(\"-\")&&void 0!==c&&M.set(this,a,b)})},null,b,arguments.length>1,null,!0)},removeData:function(a){return this.each(function(){M.remove(this,a)})}}),n.extend({queue:function(a,b,c){var d;return a?(b=(b||\"fx\")+\"queue\",d=L.get(a,b),c&&(!d||n.isArray(c)?d=L.access(a,b,n.makeArray(c)):d.push(c)),d||[]):void 0},dequeue:function(a,b){b=b||\"fx\";var c=n.queue(a,b),d=c.length,e=c.shift(),f=n._queueHooks(a,b),g=function(){n.dequeue(a,b)};\"inprogress\"===e&&(e=c.shift(),d--),e&&(\"fx\"===b&&c.unshift(\"inprogress\"),delete f.stop,e.call(a,g,f)),!d&&f&&f.empty.fire()},_queueHooks:function(a,b){var c=b+\"queueHooks\";return L.get(a,c)||L.access(a,c,{empty:n.Callbacks(\"once memory\").add(function(){L.remove(a,[b+\"queue\",c])})})}}),n.fn.extend({queue:function(a,b){var c=2;return\"string\"!=typeof a&&(b=a,a=\"fx\",c--),arguments.length<c?n.queue(this[0],a):void 0===b?this:this.each(function(){var c=n.queue(this,a,b);n._queueHooks(this,a),\"fx\"===a&&\"inprogress\"!==c[0]&&n.dequeue(this,a)})},dequeue:function(a){return this.each(function(){n.dequeue(this,a)})},clearQueue:function(a){return this.queue(a||\"fx\",[])},promise:function(a,b){var c,d=1,e=n.Deferred(),f=this,g=this.length,h=function(){--d||e.resolveWith(f,[f])};\"string\"!=typeof a&&(b=a,a=void 0),a=a||\"fx\";while(g--)c=L.get(f[g],a+\"queueHooks\"),c&&c.empty&&(d++,c.empty.add(h));return h(),e.promise(b)}});var Q=/[+-]?(?:\\d*\\.|)\\d+(?:[eE][+-]?\\d+|)/.source,R=[\"Top\",\"Right\",\"Bottom\",\"Left\"],S=function(a,b){return a=b||a,\"none\"===n.css(a,\"display\")||!n.contains(a.ownerDocument,a)},T=/^(?:checkbox|radio)$/i;!function(){var a=l.createDocumentFragment(),b=a.appendChild(l.createElement(\"div\")),c=l.createElement(\"input\");c.setAttribute(\"type\",\"radio\"),c.setAttribute(\"checked\",\"checked\"),c.setAttribute(\"name\",\"t\"),b.appendChild(c),k.checkClone=b.cloneNode(!0).cloneNode(!0).lastChild.checked,b.innerHTML=\"<textarea>x</textarea>\",k.noCloneChecked=!!b.cloneNode(!0).lastChild.defaultValue}();var U=\"undefined\";k.focusinBubbles=\"onfocusin\"in a;var V=/^key/,W=/^(?:mouse|pointer|contextmenu)|click/,X=/^(?:focusinfocus|focusoutblur)$/,Y=/^([^.]*)(?:\\.(.+)|)$/;function Z(){return!0}function $(){return!1}function _(){try{return l.activeElement}catch(a){}}n.event={global:{},add:function(a,b,c,d,e){var f,g,h,i,j,k,l,m,o,p,q,r=L.get(a);if(r){c.handler&&(f=c,c=f.handler,e=f.selector),c.guid||(c.guid=n.guid++),(i=r.events)||(i=r.events={}),(g=r.handle)||(g=r.handle=function(b){return typeof n!==U&&n.event.triggered!==b.type?n.event.dispatch.apply(a,arguments):void 0}),b=(b||\"\").match(E)||[\"\"],j=b.length;while(j--)h=Y.exec(b[j])||[],o=q=h[1],p=(h[2]||\"\").split(\".\").sort(),o&&(l=n.event.special[o]||{},o=(e?l.delegateType:l.bindType)||o,l=n.event.special[o]||{},k=n.extend({type:o,origType:q,data:d,handler:c,guid:c.guid,selector:e,needsContext:e&&n.expr.match.needsContext.test(e),namespace:p.join(\".\")},f),(m=i[o])||(m=i[o]=[],m.delegateCount=0,l.setup&&l.setup.call(a,d,p,g)!==!1||a.addEventListener&&a.addEventListener(o,g,!1)),l.add&&(l.add.call(a,k),k.handler.guid||(k.handler.guid=c.guid)),e?m.splice(m.delegateCount++,0,k):m.push(k),n.event.global[o]=!0)}},remove:function(a,b,c,d,e){var f,g,h,i,j,k,l,m,o,p,q,r=L.hasData(a)&&L.get(a);if(r&&(i=r.events)){b=(b||\"\").match(E)||[\"\"],j=b.length;while(j--)if(h=Y.exec(b[j])||[],o=q=h[1],p=(h[2]||\"\").split(\".\").sort(),o){l=n.event.special[o]||{},o=(d?l.delegateType:l.bindType)||o,m=i[o]||[],h=h[2]&&new RegExp(\"(^|\\\\.)\"+p.join(\"\\\\.(?:.*\\\\.|)\")+\"(\\\\.|$)\"),g=f=m.length;while(f--)k=m[f],!e&&q!==k.origType||c&&c.guid!==k.guid||h&&!h.test(k.namespace)||d&&d!==k.selector&&(\"**\"!==d||!k.selector)||(m.splice(f,1),k.selector&&m.delegateCount--,l.remove&&l.remove.call(a,k));g&&!m.length&&(l.teardown&&l.teardown.call(a,p,r.handle)!==!1||n.removeEvent(a,o,r.handle),delete i[o])}else for(o in i)n.event.remove(a,o+b[j],c,d,!0);n.isEmptyObject(i)&&(delete r.handle,L.remove(a,\"events\"))}},trigger:function(b,c,d,e){var f,g,h,i,k,m,o,p=[d||l],q=j.call(b,\"type\")?b.type:b,r=j.call(b,\"namespace\")?b.namespace.split(\".\"):[];if(g=h=d=d||l,3!==d.nodeType&&8!==d.nodeType&&!X.test(q+n.event.triggered)&&(q.indexOf(\".\")>=0&&(r=q.split(\".\"),q=r.shift(),r.sort()),k=q.indexOf(\":\")<0&&\"on\"+q,b=b[n.expando]?b:new n.Event(q,\"object\"==typeof b&&b),b.isTrigger=e?2:3,b.namespace=r.join(\".\"),b.namespace_re=b.namespace?new RegExp(\"(^|\\\\.)\"+r.join(\"\\\\.(?:.*\\\\.|)\")+\"(\\\\.|$)\"):null,b.result=void 0,b.target||(b.target=d),c=null==c?[b]:n.makeArray(c,[b]),o=n.event.special[q]||{},e||!o.trigger||o.trigger.apply(d,c)!==!1)){if(!e&&!o.noBubble&&!n.isWindow(d)){for(i=o.delegateType||q,X.test(i+q)||(g=g.parentNode);g;g=g.parentNode)p.push(g),h=g;h===(d.ownerDocument||l)&&p.push(h.defaultView||h.parentWindow||a)}f=0;while((g=p[f++])&&!b.isPropagationStopped())b.type=f>1?i:o.bindType||q,m=(L.get(g,\"events\")||{})[b.type]&&L.get(g,\"handle\"),m&&m.apply(g,c),m=k&&g[k],m&&m.apply&&n.acceptData(g)&&(b.result=m.apply(g,c),b.result===!1&&b.preventDefault());return b.type=q,e||b.isDefaultPrevented()||o._default&&o._default.apply(p.pop(),c)!==!1||!n.acceptData(d)||k&&n.isFunction(d[q])&&!n.isWindow(d)&&(h=d[k],h&&(d[k]=null),n.event.triggered=q,d[q](),n.event.triggered=void 0,h&&(d[k]=h)),b.result}},dispatch:function(a){a=n.event.fix(a);var b,c,e,f,g,h=[],i=d.call(arguments),j=(L.get(this,\"events\")||{})[a.type]||[],k=n.event.special[a.type]||{};if(i[0]=a,a.delegateTarget=this,!k.preDispatch||k.preDispatch.call(this,a)!==!1){h=n.event.handlers.call(this,a,j),b=0;while((f=h[b++])&&!a.isPropagationStopped()){a.currentTarget=f.elem,c=0;while((g=f.handlers[c++])&&!a.isImmediatePropagationStopped())(!a.namespace_re||a.namespace_re.test(g.namespace))&&(a.handleObj=g,a.data=g.data,e=((n.event.special[g.origType]||{}).handle||g.handler).apply(f.elem,i),void 0!==e&&(a.result=e)===!1&&(a.preventDefault(),a.stopPropagation()))}return k.postDispatch&&k.postDispatch.call(this,a),a.result}},handlers:function(a,b){var c,d,e,f,g=[],h=b.delegateCount,i=a.target;if(h&&i.nodeType&&(!a.button||\"click\"!==a.type))for(;i!==this;i=i.parentNode||this)if(i.disabled!==!0||\"click\"!==a.type){for(d=[],c=0;h>c;c++)f=b[c],e=f.selector+\" \",void 0===d[e]&&(d[e]=f.needsContext?n(e,this).index(i)>=0:n.find(e,this,null,[i]).length),d[e]&&d.push(f);d.length&&g.push({elem:i,handlers:d})}return h<b.length&&g.push({elem:this,handlers:b.slice(h)}),g},props:\"altKey bubbles cancelable ctrlKey currentTarget eventPhase metaKey relatedTarget shiftKey target timeStamp view which\".split(\" \"),fixHooks:{},keyHooks:{props:\"char charCode key keyCode\".split(\" \"),filter:function(a,b){return null==a.which&&(a.which=null!=b.charCode?b.charCode:b.keyCode),a}},mouseHooks:{props:\"button buttons clientX clientY offsetX offsetY pageX pageY screenX screenY toElement\".split(\" \"),filter:function(a,b){var c,d,e,f=b.button;return null==a.pageX&&null!=b.clientX&&(c=a.target.ownerDocument||l,d=c.documentElement,e=c.body,a.pageX=b.clientX+(d&&d.scrollLeft||e&&e.scrollLeft||0)-(d&&d.clientLeft||e&&e.clientLeft||0),a.pageY=b.clientY+(d&&d.scrollTop||e&&e.scrollTop||0)-(d&&d.clientTop||e&&e.clientTop||0)),a.which||void 0===f||(a.which=1&f?1:2&f?3:4&f?2:0),a}},fix:function(a){if(a[n.expando])return a;var b,c,d,e=a.type,f=a,g=this.fixHooks[e];g||(this.fixHooks[e]=g=W.test(e)?this.mouseHooks:V.test(e)?this.keyHooks:{}),d=g.props?this.props.concat(g.props):this.props,a=new n.Event(f),b=d.length;while(b--)c=d[b],a[c]=f[c];return a.target||(a.target=l),3===a.target.nodeType&&(a.target=a.target.parentNode),g.filter?g.filter(a,f):a},special:{load:{noBubble:!0},focus:{trigger:function(){return this!==_()&&this.focus?(this.focus(),!1):void 0},delegateType:\"focusin\"},blur:{trigger:function(){return this===_()&&this.blur?(this.blur(),!1):void 0},delegateType:\"focusout\"},click:{trigger:function(){return\"checkbox\"===this.type&&this.click&&n.nodeName(this,\"input\")?(this.click(),!1):void 0},_default:function(a){return n.nodeName(a.target,\"a\")}},beforeunload:{postDispatch:function(a){void 0!==a.result&&a.originalEvent&&(a.originalEvent.returnValue=a.result)}}},simulate:function(a,b,c,d){var e=n.extend(new n.Event,c,{type:a,isSimulated:!0,originalEvent:{}});d?n.event.trigger(e,null,b):n.event.dispatch.call(b,e),e.isDefaultPrevented()&&c.preventDefault()}},n.removeEvent=function(a,b,c){a.removeEventListener&&a.removeEventListener(b,c,!1)},n.Event=function(a,b){return this instanceof n.Event?(a&&a.type?(this.originalEvent=a,this.type=a.type,this.isDefaultPrevented=a.defaultPrevented||void 0===a.defaultPrevented&&a.returnValue===!1?Z:$):this.type=a,b&&n.extend(this,b),this.timeStamp=a&&a.timeStamp||n.now(),void(this[n.expando]=!0)):new n.Event(a,b)},n.Event.prototype={isDefaultPrevented:$,isPropagationStopped:$,isImmediatePropagationStopped:$,preventDefault:function(){var a=this.originalEvent;this.isDefaultPrevented=Z,a&&a.preventDefault&&a.preventDefault()},stopPropagation:function(){var a=this.originalEvent;this.isPropagationStopped=Z,a&&a.stopPropagation&&a.stopPropagation()},stopImmediatePropagation:function(){var a=this.originalEvent;this.isImmediatePropagationStopped=Z,a&&a.stopImmediatePropagation&&a.stopImmediatePropagation(),this.stopPropagation()}},n.each({mouseenter:\"mouseover\",mouseleave:\"mouseout\",pointerenter:\"pointerover\",pointerleave:\"pointerout\"},function(a,b){n.event.special[a]={delegateType:b,bindType:b,handle:function(a){var c,d=this,e=a.relatedTarget,f=a.handleObj;return(!e||e!==d&&!n.contains(d,e))&&(a.type=f.origType,c=f.handler.apply(this,arguments),a.type=b),c}}}),k.focusinBubbles||n.each({focus:\"focusin\",blur:\"focusout\"},function(a,b){var c=function(a){n.event.simulate(b,a.target,n.event.fix(a),!0)};n.event.special[b]={setup:function(){var d=this.ownerDocument||this,e=L.access(d,b);e||d.addEventListener(a,c,!0),L.access(d,b,(e||0)+1)},teardown:function(){var d=this.ownerDocument||this,e=L.access(d,b)-1;e?L.access(d,b,e):(d.removeEventListener(a,c,!0),L.remove(d,b))}}}),n.fn.extend({on:function(a,b,c,d,e){var f,g;if(\"object\"==typeof a){\"string\"!=typeof b&&(c=c||b,b=void 0);for(g in a)this.on(g,b,c,a[g],e);return this}if(null==c&&null==d?(d=b,c=b=void 0):null==d&&(\"string\"==typeof b?(d=c,c=void 0):(d=c,c=b,b=void 0)),d===!1)d=$;else if(!d)return this;return 1===e&&(f=d,d=function(a){return n().off(a),f.apply(this,arguments)},d.guid=f.guid||(f.guid=n.guid++)),this.each(function(){n.event.add(this,a,d,c,b)})},one:function(a,b,c,d){return this.on(a,b,c,d,1)},off:function(a,b,c){var d,e;if(a&&a.preventDefault&&a.handleObj)return d=a.handleObj,n(a.delegateTarget).off(d.namespace?d.origType+\".\"+d.namespace:d.origType,d.selector,d.handler),this;if(\"object\"==typeof a){for(e in a)this.off(e,b,a[e]);return this}return(b===!1||\"function\"==typeof b)&&(c=b,b=void 0),c===!1&&(c=$),this.each(function(){n.event.remove(this,a,c,b)})},trigger:function(a,b){return this.each(function(){n.event.trigger(a,b,this)})},triggerHandler:function(a,b){var c=this[0];return c?n.event.trigger(a,b,c,!0):void 0}});var ab=/<(?!area|br|col|embed|hr|img|input|link|meta|param)(([\\w:]+)[^>]*)\\/>/gi,bb=/<([\\w:]+)/,cb=/<|&#?\\w+;/,db=/<(?:script|style|link)/i,eb=/checked\\s*(?:[^=]|=\\s*.checked.)/i,fb=/^$|\\/(?:java|ecma)script/i,gb=/^true\\/(.*)/,hb=/^\\s*<!(?:\\[CDATA\\[|--)|(?:\\]\\]|--)>\\s*$/g,ib={option:[1,\"<select multiple='multiple'>\",\"</select>\"],thead:[1,\"<table>\",\"</table>\"],col:[2,\"<table><colgroup>\",\"</colgroup></table>\"],tr:[2,\"<table><tbody>\",\"</tbody></table>\"],td:[3,\"<table><tbody><tr>\",\"</tr></tbody></table>\"],_default:[0,\"\",\"\"]};ib.optgroup=ib.option,ib.tbody=ib.tfoot=ib.colgroup=ib.caption=ib.thead,ib.th=ib.td;function jb(a,b){return n.nodeName(a,\"table\")&&n.nodeName(11!==b.nodeType?b:b.firstChild,\"tr\")?a.getElementsByTagName(\"tbody\")[0]||a.appendChild(a.ownerDocument.createElement(\"tbody\")):a}function kb(a){return a.type=(null!==a.getAttribute(\"type\"))+\"/\"+a.type,a}function lb(a){var b=gb.exec(a.type);return b?a.type=b[1]:a.removeAttribute(\"type\"),a}function mb(a,b){for(var c=0,d=a.length;d>c;c++)L.set(a[c],\"globalEval\",!b||L.get(b[c],\"globalEval\"))}function nb(a,b){var c,d,e,f,g,h,i,j;if(1===b.nodeType){if(L.hasData(a)&&(f=L.access(a),g=L.set(b,f),j=f.events)){delete g.handle,g.events={};for(e in j)for(c=0,d=j[e].length;d>c;c++)n.event.add(b,e,j[e][c])}M.hasData(a)&&(h=M.access(a),i=n.extend({},h),M.set(b,i))}}function ob(a,b){var c=a.getElementsByTagName?a.getElementsByTagName(b||\"*\"):a.querySelectorAll?a.querySelectorAll(b||\"*\"):[];return void 0===b||b&&n.nodeName(a,b)?n.merge([a],c):c}function pb(a,b){var c=b.nodeName.toLowerCase();\"input\"===c&&T.test(a.type)?b.checked=a.checked:(\"input\"===c||\"textarea\"===c)&&(b.defaultValue=a.defaultValue)}n.extend({clone:function(a,b,c){var d,e,f,g,h=a.cloneNode(!0),i=n.contains(a.ownerDocument,a);if(!(k.noCloneChecked||1!==a.nodeType&&11!==a.nodeType||n.isXMLDoc(a)))for(g=ob(h),f=ob(a),d=0,e=f.length;e>d;d++)pb(f[d],g[d]);if(b)if(c)for(f=f||ob(a),g=g||ob(h),d=0,e=f.length;e>d;d++)nb(f[d],g[d]);else nb(a,h);return g=ob(h,\"script\"),g.length>0&&mb(g,!i&&ob(a,\"script\")),h},buildFragment:function(a,b,c,d){for(var e,f,g,h,i,j,k=b.createDocumentFragment(),l=[],m=0,o=a.length;o>m;m++)if(e=a[m],e||0===e)if(\"object\"===n.type(e))n.merge(l,e.nodeType?[e]:e);else if(cb.test(e)){f=f||k.appendChild(b.createElement(\"div\")),g=(bb.exec(e)||[\"\",\"\"])[1].toLowerCase(),h=ib[g]||ib._default,f.innerHTML=h[1]+e.replace(ab,\"<$1></$2>\")+h[2],j=h[0];while(j--)f=f.lastChild;n.merge(l,f.childNodes),f=k.firstChild,f.textContent=\"\"}else l.push(b.createTextNode(e));k.textContent=\"\",m=0;while(e=l[m++])if((!d||-1===n.inArray(e,d))&&(i=n.contains(e.ownerDocument,e),f=ob(k.appendChild(e),\"script\"),i&&mb(f),c)){j=0;while(e=f[j++])fb.test(e.type||\"\")&&c.push(e)}return k},cleanData:function(a){for(var b,c,d,e,f=n.event.special,g=0;void 0!==(c=a[g]);g++){if(n.acceptData(c)&&(e=c[L.expando],e&&(b=L.cache[e]))){if(b.events)for(d in b.events)f[d]?n.event.remove(c,d):n.removeEvent(c,d,b.handle);L.cache[e]&&delete L.cache[e]}delete M.cache[c[M.expando]]}}}),n.fn.extend({text:function(a){return J(this,function(a){return void 0===a?n.text(this):this.empty().each(function(){(1===this.nodeType||11===this.nodeType||9===this.nodeType)&&(this.textContent=a)})},null,a,arguments.length)},append:function(){return this.domManip(arguments,function(a){if(1===this.nodeType||11===this.nodeType||9===this.nodeType){var b=jb(this,a);b.appendChild(a)}})},prepend:function(){return this.domManip(arguments,function(a){if(1===this.nodeType||11===this.nodeType||9===this.nodeType){var b=jb(this,a);b.insertBefore(a,b.firstChild)}})},before:function(){return this.domManip(arguments,function(a){this.parentNode&&this.parentNode.insertBefore(a,this)})},after:function(){return this.domManip(arguments,function(a){this.parentNode&&this.parentNode.insertBefore(a,this.nextSibling)})},remove:function(a,b){for(var c,d=a?n.filter(a,this):this,e=0;null!=(c=d[e]);e++)b||1!==c.nodeType||n.cleanData(ob(c)),c.parentNode&&(b&&n.contains(c.ownerDocument,c)&&mb(ob(c,\"script\")),c.parentNode.removeChild(c));return this},empty:function(){for(var a,b=0;null!=(a=this[b]);b++)1===a.nodeType&&(n.cleanData(ob(a,!1)),a.textContent=\"\");return this},clone:function(a,b){return a=null==a?!1:a,b=null==b?a:b,this.map(function(){return n.clone(this,a,b)})},html:function(a){return J(this,function(a){var b=this[0]||{},c=0,d=this.length;if(void 0===a&&1===b.nodeType)return b.innerHTML;if(\"string\"==typeof a&&!db.test(a)&&!ib[(bb.exec(a)||[\"\",\"\"])[1].toLowerCase()]){a=a.replace(ab,\"<$1></$2>\");try{for(;d>c;c++)b=this[c]||{},1===b.nodeType&&(n.cleanData(ob(b,!1)),b.innerHTML=a);b=0}catch(e){}}b&&this.empty().append(a)},null,a,arguments.length)},replaceWith:function(){var a=arguments[0];return this.domManip(arguments,function(b){a=this.parentNode,n.cleanData(ob(this)),a&&a.replaceChild(b,this)}),a&&(a.length||a.nodeType)?this:this.remove()},detach:function(a){return this.remove(a,!0)},domManip:function(a,b){a=e.apply([],a);var c,d,f,g,h,i,j=0,l=this.length,m=this,o=l-1,p=a[0],q=n.isFunction(p);if(q||l>1&&\"string\"==typeof p&&!k.checkClone&&eb.test(p))return this.each(function(c){var d=m.eq(c);q&&(a[0]=p.call(this,c,d.html())),d.domManip(a,b)});if(l&&(c=n.buildFragment(a,this[0].ownerDocument,!1,this),d=c.firstChild,1===c.childNodes.length&&(c=d),d)){for(f=n.map(ob(c,\"script\"),kb),g=f.length;l>j;j++)h=c,j!==o&&(h=n.clone(h,!0,!0),g&&n.merge(f,ob(h,\"script\"))),b.call(this[j],h,j);if(g)for(i=f[f.length-1].ownerDocument,n.map(f,lb),j=0;g>j;j++)h=f[j],fb.test(h.type||\"\")&&!L.access(h,\"globalEval\")&&n.contains(i,h)&&(h.src?n._evalUrl&&n._evalUrl(h.src):n.globalEval(h.textContent.replace(hb,\"\")))}return this}}),n.each({appendTo:\"append\",prependTo:\"prepend\",insertBefore:\"before\",insertAfter:\"after\",replaceAll:\"replaceWith\"},function(a,b){n.fn[a]=function(a){for(var c,d=[],e=n(a),g=e.length-1,h=0;g>=h;h++)c=h===g?this:this.clone(!0),n(e[h])[b](c),f.apply(d,c.get());return this.pushStack(d)}});var qb,rb={};function sb(b,c){var d,e=n(c.createElement(b)).appendTo(c.body),f=a.getDefaultComputedStyle&&(d=a.getDefaultComputedStyle(e[0]))?d.display:n.css(e[0],\"display\");return e.detach(),f}function tb(a){var b=l,c=rb[a];return c||(c=sb(a,b),\"none\"!==c&&c||(qb=(qb||n(\"<iframe frameborder='0' width='0' height='0'/>\")).appendTo(b.documentElement),b=qb[0].contentDocument,b.write(),b.close(),c=sb(a,b),qb.detach()),rb[a]=c),c}var ub=/^margin/,vb=new RegExp(\"^(\"+Q+\")(?!px)[a-z%]+$\",\"i\"),wb=function(b){return b.ownerDocument.defaultView.opener?b.ownerDocument.defaultView.getComputedStyle(b,null):a.getComputedStyle(b,null)};function xb(a,b,c){var d,e,f,g,h=a.style;return c=c||wb(a),c&&(g=c.getPropertyValue(b)||c[b]),c&&(\"\"!==g||n.contains(a.ownerDocument,a)||(g=n.style(a,b)),vb.test(g)&&ub.test(b)&&(d=h.width,e=h.minWidth,f=h.maxWidth,h.minWidth=h.maxWidth=h.width=g,g=c.width,h.width=d,h.minWidth=e,h.maxWidth=f)),void 0!==g?g+\"\":g}function yb(a,b){return{get:function(){return a()?void delete this.get:(this.get=b).apply(this,arguments)}}}!function(){var b,c,d=l.documentElement,e=l.createElement(\"div\"),f=l.createElement(\"div\");if(f.style){f.style.backgroundClip=\"content-box\",f.cloneNode(!0).style.backgroundClip=\"\",k.clearCloneStyle=\"content-box\"===f.style.backgroundClip,e.style.cssText=\"border:0;width:0;height:0;top:0;left:-9999px;margin-top:1px;position:absolute\",e.appendChild(f);function g(){f.style.cssText=\"-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box;display:block;margin-top:1%;top:1%;border:1px;padding:1px;width:4px;position:absolute\",f.innerHTML=\"\",d.appendChild(e);var g=a.getComputedStyle(f,null);b=\"1%\"!==g.top,c=\"4px\"===g.width,d.removeChild(e)}a.getComputedStyle&&n.extend(k,{pixelPosition:function(){return g(),b},boxSizingReliable:function(){return null==c&&g(),c},reliableMarginRight:function(){var b,c=f.appendChild(l.createElement(\"div\"));return c.style.cssText=f.style.cssText=\"-webkit-box-sizing:content-box;-moz-box-sizing:content-box;box-sizing:content-box;display:block;margin:0;border:0;padding:0\",c.style.marginRight=c.style.width=\"0\",f.style.width=\"1px\",d.appendChild(e),b=!parseFloat(a.getComputedStyle(c,null).marginRight),d.removeChild(e),f.removeChild(c),b}})}}(),n.swap=function(a,b,c,d){var e,f,g={};for(f in b)g[f]=a.style[f],a.style[f]=b[f];e=c.apply(a,d||[]);for(f in b)a.style[f]=g[f];return e};var zb=/^(none|table(?!-c[ea]).+)/,Ab=new RegExp(\"^(\"+Q+\")(.*)$\",\"i\"),Bb=new RegExp(\"^([+-])=(\"+Q+\")\",\"i\"),Cb={position:\"absolute\",visibility:\"hidden\",display:\"block\"},Db={letterSpacing:\"0\",fontWeight:\"400\"},Eb=[\"Webkit\",\"O\",\"Moz\",\"ms\"];function Fb(a,b){if(b in a)return b;var c=b[0].toUpperCase()+b.slice(1),d=b,e=Eb.length;while(e--)if(b=Eb[e]+c,b in a)return b;return d}function Gb(a,b,c){var d=Ab.exec(b);return d?Math.max(0,d[1]-(c||0))+(d[2]||\"px\"):b}function Hb(a,b,c,d,e){for(var f=c===(d?\"border\":\"content\")?4:\"width\"===b?1:0,g=0;4>f;f+=2)\"margin\"===c&&(g+=n.css(a,c+R[f],!0,e)),d?(\"content\"===c&&(g-=n.css(a,\"padding\"+R[f],!0,e)),\"margin\"!==c&&(g-=n.css(a,\"border\"+R[f]+\"Width\",!0,e))):(g+=n.css(a,\"padding\"+R[f],!0,e),\"padding\"!==c&&(g+=n.css(a,\"border\"+R[f]+\"Width\",!0,e)));return g}function Ib(a,b,c){var d=!0,e=\"width\"===b?a.offsetWidth:a.offsetHeight,f=wb(a),g=\"border-box\"===n.css(a,\"boxSizing\",!1,f);if(0>=e||null==e){if(e=xb(a,b,f),(0>e||null==e)&&(e=a.style[b]),vb.test(e))return e;d=g&&(k.boxSizingReliable()||e===a.style[b]),e=parseFloat(e)||0}return e+Hb(a,b,c||(g?\"border\":\"content\"),d,f)+\"px\"}function Jb(a,b){for(var c,d,e,f=[],g=0,h=a.length;h>g;g++)d=a[g],d.style&&(f[g]=L.get(d,\"olddisplay\"),c=d.style.display,b?(f[g]||\"none\"!==c||(d.style.display=\"\"),\"\"===d.style.display&&S(d)&&(f[g]=L.access(d,\"olddisplay\",tb(d.nodeName)))):(e=S(d),\"none\"===c&&e||L.set(d,\"olddisplay\",e?c:n.css(d,\"display\"))));for(g=0;h>g;g++)d=a[g],d.style&&(b&&\"none\"!==d.style.display&&\"\"!==d.style.display||(d.style.display=b?f[g]||\"\":\"none\"));return a}n.extend({cssHooks:{opacity:{get:function(a,b){if(b){var c=xb(a,\"opacity\");return\"\"===c?\"1\":c}}}},cssNumber:{columnCount:!0,fillOpacity:!0,flexGrow:!0,flexShrink:!0,fontWeight:!0,lineHeight:!0,opacity:!0,order:!0,orphans:!0,widows:!0,zIndex:!0,zoom:!0},cssProps:{\"float\":\"cssFloat\"},style:function(a,b,c,d){if(a&&3!==a.nodeType&&8!==a.nodeType&&a.style){var e,f,g,h=n.camelCase(b),i=a.style;return b=n.cssProps[h]||(n.cssProps[h]=Fb(i,h)),g=n.cssHooks[b]||n.cssHooks[h],void 0===c?g&&\"get\"in g&&void 0!==(e=g.get(a,!1,d))?e:i[b]:(f=typeof c,\"string\"===f&&(e=Bb.exec(c))&&(c=(e[1]+1)*e[2]+parseFloat(n.css(a,b)),f=\"number\"),null!=c&&c===c&&(\"number\"!==f||n.cssNumber[h]||(c+=\"px\"),k.clearCloneStyle||\"\"!==c||0!==b.indexOf(\"background\")||(i[b]=\"inherit\"),g&&\"set\"in g&&void 0===(c=g.set(a,c,d))||(i[b]=c)),void 0)}},css:function(a,b,c,d){var e,f,g,h=n.camelCase(b);return b=n.cssProps[h]||(n.cssProps[h]=Fb(a.style,h)),g=n.cssHooks[b]||n.cssHooks[h],g&&\"get\"in g&&(e=g.get(a,!0,c)),void 0===e&&(e=xb(a,b,d)),\"normal\"===e&&b in Db&&(e=Db[b]),\"\"===c||c?(f=parseFloat(e),c===!0||n.isNumeric(f)?f||0:e):e}}),n.each([\"height\",\"width\"],function(a,b){n.cssHooks[b]={get:function(a,c,d){return c?zb.test(n.css(a,\"display\"))&&0===a.offsetWidth?n.swap(a,Cb,function(){return Ib(a,b,d)}):Ib(a,b,d):void 0},set:function(a,c,d){var e=d&&wb(a);return Gb(a,c,d?Hb(a,b,d,\"border-box\"===n.css(a,\"boxSizing\",!1,e),e):0)}}}),n.cssHooks.marginRight=yb(k.reliableMarginRight,function(a,b){return b?n.swap(a,{display:\"inline-block\"},xb,[a,\"marginRight\"]):void 0}),n.each({margin:\"\",padding:\"\",border:\"Width\"},function(a,b){n.cssHooks[a+b]={expand:function(c){for(var d=0,e={},f=\"string\"==typeof c?c.split(\" \"):[c];4>d;d++)e[a+R[d]+b]=f[d]||f[d-2]||f[0];return e}},ub.test(a)||(n.cssHooks[a+b].set=Gb)}),n.fn.extend({css:function(a,b){return J(this,function(a,b,c){var d,e,f={},g=0;if(n.isArray(b)){for(d=wb(a),e=b.length;e>g;g++)f[b[g]]=n.css(a,b[g],!1,d);return f}return void 0!==c?n.style(a,b,c):n.css(a,b)},a,b,arguments.length>1)},show:function(){return Jb(this,!0)},hide:function(){return Jb(this)},toggle:function(a){return\"boolean\"==typeof a?a?this.show():this.hide():this.each(function(){S(this)?n(this).show():n(this).hide()})}});function Kb(a,b,c,d,e){return new Kb.prototype.init(a,b,c,d,e)}n.Tween=Kb,Kb.prototype={constructor:Kb,init:function(a,b,c,d,e,f){this.elem=a,this.prop=c,this.easing=e||\"swing\",this.options=b,this.start=this.now=this.cur(),this.end=d,this.unit=f||(n.cssNumber[c]?\"\":\"px\")},cur:function(){var a=Kb.propHooks[this.prop];return a&&a.get?a.get(this):Kb.propHooks._default.get(this)},run:function(a){var b,c=Kb.propHooks[this.prop];return this.pos=b=this.options.duration?n.easing[this.easing](a,this.options.duration*a,0,1,this.options.duration):a,this.now=(this.end-this.start)*b+this.start,this.options.step&&this.options.step.call(this.elem,this.now,this),c&&c.set?c.set(this):Kb.propHooks._default.set(this),this}},Kb.prototype.init.prototype=Kb.prototype,Kb.propHooks={_default:{get:function(a){var b;return null==a.elem[a.prop]||a.elem.style&&null!=a.elem.style[a.prop]?(b=n.css(a.elem,a.prop,\"\"),b&&\"auto\"!==b?b:0):a.elem[a.prop]},set:function(a){n.fx.step[a.prop]?n.fx.step[a.prop](a):a.elem.style&&(null!=a.elem.style[n.cssProps[a.prop]]||n.cssHooks[a.prop])?n.style(a.elem,a.prop,a.now+a.unit):a.elem[a.prop]=a.now}}},Kb.propHooks.scrollTop=Kb.propHooks.scrollLeft={set:function(a){a.elem.nodeType&&a.elem.parentNode&&(a.elem[a.prop]=a.now)}},n.easing={linear:function(a){return a},swing:function(a){return.5-Math.cos(a*Math.PI)/2}},n.fx=Kb.prototype.init,n.fx.step={};var Lb,Mb,Nb=/^(?:toggle|show|hide)$/,Ob=new RegExp(\"^(?:([+-])=|)(\"+Q+\")([a-z%]*)$\",\"i\"),Pb=/queueHooks$/,Qb=[Vb],Rb={\"*\":[function(a,b){var c=this.createTween(a,b),d=c.cur(),e=Ob.exec(b),f=e&&e[3]||(n.cssNumber[a]?\"\":\"px\"),g=(n.cssNumber[a]||\"px\"!==f&&+d)&&Ob.exec(n.css(c.elem,a)),h=1,i=20;if(g&&g[3]!==f){f=f||g[3],e=e||[],g=+d||1;do h=h||\".5\",g/=h,n.style(c.elem,a,g+f);while(h!==(h=c.cur()/d)&&1!==h&&--i)}return e&&(g=c.start=+g||+d||0,c.unit=f,c.end=e[1]?g+(e[1]+1)*e[2]:+e[2]),c}]};function Sb(){return setTimeout(function(){Lb=void 0}),Lb=n.now()}function Tb(a,b){var c,d=0,e={height:a};for(b=b?1:0;4>d;d+=2-b)c=R[d],e[\"margin\"+c]=e[\"padding\"+c]=a;return b&&(e.opacity=e.width=a),e}function Ub(a,b,c){for(var d,e=(Rb[b]||[]).concat(Rb[\"*\"]),f=0,g=e.length;g>f;f++)if(d=e[f].call(c,b,a))return d}function Vb(a,b,c){var d,e,f,g,h,i,j,k,l=this,m={},o=a.style,p=a.nodeType&&S(a),q=L.get(a,\"fxshow\");c.queue||(h=n._queueHooks(a,\"fx\"),null==h.unqueued&&(h.unqueued=0,i=h.empty.fire,h.empty.fire=function(){h.unqueued||i()}),h.unqueued++,l.always(function(){l.always(function(){h.unqueued--,n.queue(a,\"fx\").length||h.empty.fire()})})),1===a.nodeType&&(\"height\"in b||\"width\"in b)&&(c.overflow=[o.overflow,o.overflowX,o.overflowY],j=n.css(a,\"display\"),k=\"none\"===j?L.get(a,\"olddisplay\")||tb(a.nodeName):j,\"inline\"===k&&\"none\"===n.css(a,\"float\")&&(o.display=\"inline-block\")),c.overflow&&(o.overflow=\"hidden\",l.always(function(){o.overflow=c.overflow[0],o.overflowX=c.overflow[1],o.overflowY=c.overflow[2]}));for(d in b)if(e=b[d],Nb.exec(e)){if(delete b[d],f=f||\"toggle\"===e,e===(p?\"hide\":\"show\")){if(\"show\"!==e||!q||void 0===q[d])continue;p=!0}m[d]=q&&q[d]||n.style(a,d)}else j=void 0;if(n.isEmptyObject(m))\"inline\"===(\"none\"===j?tb(a.nodeName):j)&&(o.display=j);else{q?\"hidden\"in q&&(p=q.hidden):q=L.access(a,\"fxshow\",{}),f&&(q.hidden=!p),p?n(a).show():l.done(function(){n(a).hide()}),l.done(function(){var b;L.remove(a,\"fxshow\");for(b in m)n.style(a,b,m[b])});for(d in m)g=Ub(p?q[d]:0,d,l),d in q||(q[d]=g.start,p&&(g.end=g.start,g.start=\"width\"===d||\"height\"===d?1:0))}}function Wb(a,b){var c,d,e,f,g;for(c in a)if(d=n.camelCase(c),e=b[d],f=a[c],n.isArray(f)&&(e=f[1],f=a[c]=f[0]),c!==d&&(a[d]=f,delete a[c]),g=n.cssHooks[d],g&&\"expand\"in g){f=g.expand(f),delete a[d];for(c in f)c in a||(a[c]=f[c],b[c]=e)}else b[d]=e}function Xb(a,b,c){var d,e,f=0,g=Qb.length,h=n.Deferred().always(function(){delete i.elem}),i=function(){if(e)return!1;for(var b=Lb||Sb(),c=Math.max(0,j.startTime+j.duration-b),d=c/j.duration||0,f=1-d,g=0,i=j.tweens.length;i>g;g++)j.tweens[g].run(f);return h.notifyWith(a,[j,f,c]),1>f&&i?c:(h.resolveWith(a,[j]),!1)},j=h.promise({elem:a,props:n.extend({},b),opts:n.extend(!0,{specialEasing:{}},c),originalProperties:b,originalOptions:c,startTime:Lb||Sb(),duration:c.duration,tweens:[],createTween:function(b,c){var d=n.Tween(a,j.opts,b,c,j.opts.specialEasing[b]||j.opts.easing);return j.tweens.push(d),d},stop:function(b){var c=0,d=b?j.tweens.length:0;if(e)return this;for(e=!0;d>c;c++)j.tweens[c].run(1);return b?h.resolveWith(a,[j,b]):h.rejectWith(a,[j,b]),this}}),k=j.props;for(Wb(k,j.opts.specialEasing);g>f;f++)if(d=Qb[f].call(j,a,k,j.opts))return d;return n.map(k,Ub,j),n.isFunction(j.opts.start)&&j.opts.start.call(a,j),n.fx.timer(n.extend(i,{elem:a,anim:j,queue:j.opts.queue})),j.progress(j.opts.progress).done(j.opts.done,j.opts.complete).fail(j.opts.fail).always(j.opts.always)}n.Animation=n.extend(Xb,{tweener:function(a,b){n.isFunction(a)?(b=a,a=[\"*\"]):a=a.split(\" \");for(var c,d=0,e=a.length;e>d;d++)c=a[d],Rb[c]=Rb[c]||[],Rb[c].unshift(b)},prefilter:function(a,b){b?Qb.unshift(a):Qb.push(a)}}),n.speed=function(a,b,c){var d=a&&\"object\"==typeof a?n.extend({},a):{complete:c||!c&&b||n.isFunction(a)&&a,duration:a,easing:c&&b||b&&!n.isFunction(b)&&b};return d.duration=n.fx.off?0:\"number\"==typeof d.duration?d.duration:d.duration in n.fx.speeds?n.fx.speeds[d.duration]:n.fx.speeds._default,(null==d.queue||d.queue===!0)&&(d.queue=\"fx\"),d.old=d.complete,d.complete=function(){n.isFunction(d.old)&&d.old.call(this),d.queue&&n.dequeue(this,d.queue)},d},n.fn.extend({fadeTo:function(a,b,c,d){return this.filter(S).css(\"opacity\",0).show().end().animate({opacity:b},a,c,d)},animate:function(a,b,c,d){var e=n.isEmptyObject(a),f=n.speed(b,c,d),g=function(){var b=Xb(this,n.extend({},a),f);(e||L.get(this,\"finish\"))&&b.stop(!0)};return g.finish=g,e||f.queue===!1?this.each(g):this.queue(f.queue,g)},stop:function(a,b,c){var d=function(a){var b=a.stop;delete a.stop,b(c)};return\"string\"!=typeof a&&(c=b,b=a,a=void 0),b&&a!==!1&&this.queue(a||\"fx\",[]),this.each(function(){var b=!0,e=null!=a&&a+\"queueHooks\",f=n.timers,g=L.get(this);if(e)g[e]&&g[e].stop&&d(g[e]);else for(e in g)g[e]&&g[e].stop&&Pb.test(e)&&d(g[e]);for(e=f.length;e--;)f[e].elem!==this||null!=a&&f[e].queue!==a||(f[e].anim.stop(c),b=!1,f.splice(e,1));(b||!c)&&n.dequeue(this,a)})},finish:function(a){return a!==!1&&(a=a||\"fx\"),this.each(function(){var b,c=L.get(this),d=c[a+\"queue\"],e=c[a+\"queueHooks\"],f=n.timers,g=d?d.length:0;for(c.finish=!0,n.queue(this,a,[]),e&&e.stop&&e.stop.call(this,!0),b=f.length;b--;)f[b].elem===this&&f[b].queue===a&&(f[b].anim.stop(!0),f.splice(b,1));for(b=0;g>b;b++)d[b]&&d[b].finish&&d[b].finish.call(this);delete c.finish})}}),n.each([\"toggle\",\"show\",\"hide\"],function(a,b){var c=n.fn[b];n.fn[b]=function(a,d,e){return null==a||\"boolean\"==typeof a?c.apply(this,arguments):this.animate(Tb(b,!0),a,d,e)}}),n.each({slideDown:Tb(\"show\"),slideUp:Tb(\"hide\"),slideToggle:Tb(\"toggle\"),fadeIn:{opacity:\"show\"},fadeOut:{opacity:\"hide\"},fadeToggle:{opacity:\"toggle\"}},function(a,b){n.fn[a]=function(a,c,d){return this.animate(b,a,c,d)}}),n.timers=[],n.fx.tick=function(){var a,b=0,c=n.timers;for(Lb=n.now();b<c.length;b++)a=c[b],a()||c[b]!==a||c.splice(b--,1);c.length||n.fx.stop(),Lb=void 0},n.fx.timer=function(a){n.timers.push(a),a()?n.fx.start():n.timers.pop()},n.fx.interval=13,n.fx.start=function(){Mb||(Mb=setInterval(n.fx.tick,n.fx.interval))},n.fx.stop=function(){clearInterval(Mb),Mb=null},n.fx.speeds={slow:600,fast:200,_default:400},n.fn.delay=function(a,b){return a=n.fx?n.fx.speeds[a]||a:a,b=b||\"fx\",this.queue(b,function(b,c){var d=setTimeout(b,a);c.stop=function(){clearTimeout(d)}})},function(){var a=l.createElement(\"input\"),b=l.createElement(\"select\"),c=b.appendChild(l.createElement(\"option\"));a.type=\"checkbox\",k.checkOn=\"\"!==a.value,k.optSelected=c.selected,b.disabled=!0,k.optDisabled=!c.disabled,a=l.createElement(\"input\"),a.value=\"t\",a.type=\"radio\",k.radioValue=\"t\"===a.value}();var Yb,Zb,$b=n.expr.attrHandle;n.fn.extend({attr:function(a,b){return J(this,n.attr,a,b,arguments.length>1)},removeAttr:function(a){return this.each(function(){n.removeAttr(this,a)})}}),n.extend({attr:function(a,b,c){var d,e,f=a.nodeType;if(a&&3!==f&&8!==f&&2!==f)return typeof a.getAttribute===U?n.prop(a,b,c):(1===f&&n.isXMLDoc(a)||(b=b.toLowerCase(),d=n.attrHooks[b]||(n.expr.match.bool.test(b)?Zb:Yb)),void 0===c?d&&\"get\"in d&&null!==(e=d.get(a,b))?e:(e=n.find.attr(a,b),null==e?void 0:e):null!==c?d&&\"set\"in d&&void 0!==(e=d.set(a,c,b))?e:(a.setAttribute(b,c+\"\"),c):void n.removeAttr(a,b))\r\n},removeAttr:function(a,b){var c,d,e=0,f=b&&b.match(E);if(f&&1===a.nodeType)while(c=f[e++])d=n.propFix[c]||c,n.expr.match.bool.test(c)&&(a[d]=!1),a.removeAttribute(c)},attrHooks:{type:{set:function(a,b){if(!k.radioValue&&\"radio\"===b&&n.nodeName(a,\"input\")){var c=a.value;return a.setAttribute(\"type\",b),c&&(a.value=c),b}}}}}),Zb={set:function(a,b,c){return b===!1?n.removeAttr(a,c):a.setAttribute(c,c),c}},n.each(n.expr.match.bool.source.match(/\\w+/g),function(a,b){var c=$b[b]||n.find.attr;$b[b]=function(a,b,d){var e,f;return d||(f=$b[b],$b[b]=e,e=null!=c(a,b,d)?b.toLowerCase():null,$b[b]=f),e}});var _b=/^(?:input|select|textarea|button)$/i;n.fn.extend({prop:function(a,b){return J(this,n.prop,a,b,arguments.length>1)},removeProp:function(a){return this.each(function(){delete this[n.propFix[a]||a]})}}),n.extend({propFix:{\"for\":\"htmlFor\",\"class\":\"className\"},prop:function(a,b,c){var d,e,f,g=a.nodeType;if(a&&3!==g&&8!==g&&2!==g)return f=1!==g||!n.isXMLDoc(a),f&&(b=n.propFix[b]||b,e=n.propHooks[b]),void 0!==c?e&&\"set\"in e&&void 0!==(d=e.set(a,c,b))?d:a[b]=c:e&&\"get\"in e&&null!==(d=e.get(a,b))?d:a[b]},propHooks:{tabIndex:{get:function(a){return a.hasAttribute(\"tabindex\")||_b.test(a.nodeName)||a.href?a.tabIndex:-1}}}}),k.optSelected||(n.propHooks.selected={get:function(a){var b=a.parentNode;return b&&b.parentNode&&b.parentNode.selectedIndex,null}}),n.each([\"tabIndex\",\"readOnly\",\"maxLength\",\"cellSpacing\",\"cellPadding\",\"rowSpan\",\"colSpan\",\"useMap\",\"frameBorder\",\"contentEditable\"],function(){n.propFix[this.toLowerCase()]=this});var ac=/[\\t\\r\\n\\f]/g;n.fn.extend({addClass:function(a){var b,c,d,e,f,g,h=\"string\"==typeof a&&a,i=0,j=this.length;if(n.isFunction(a))return this.each(function(b){n(this).addClass(a.call(this,b,this.className))});if(h)for(b=(a||\"\").match(E)||[];j>i;i++)if(c=this[i],d=1===c.nodeType&&(c.className?(\" \"+c.className+\" \").replace(ac,\" \"):\" \")){f=0;while(e=b[f++])d.indexOf(\" \"+e+\" \")<0&&(d+=e+\" \");g=n.trim(d),c.className!==g&&(c.className=g)}return this},removeClass:function(a){var b,c,d,e,f,g,h=0===arguments.length||\"string\"==typeof a&&a,i=0,j=this.length;if(n.isFunction(a))return this.each(function(b){n(this).removeClass(a.call(this,b,this.className))});if(h)for(b=(a||\"\").match(E)||[];j>i;i++)if(c=this[i],d=1===c.nodeType&&(c.className?(\" \"+c.className+\" \").replace(ac,\" \"):\"\")){f=0;while(e=b[f++])while(d.indexOf(\" \"+e+\" \")>=0)d=d.replace(\" \"+e+\" \",\" \");g=a?n.trim(d):\"\",c.className!==g&&(c.className=g)}return this},toggleClass:function(a,b){var c=typeof a;return\"boolean\"==typeof b&&\"string\"===c?b?this.addClass(a):this.removeClass(a):this.each(n.isFunction(a)?function(c){n(this).toggleClass(a.call(this,c,this.className,b),b)}:function(){if(\"string\"===c){var b,d=0,e=n(this),f=a.match(E)||[];while(b=f[d++])e.hasClass(b)?e.removeClass(b):e.addClass(b)}else(c===U||\"boolean\"===c)&&(this.className&&L.set(this,\"__className__\",this.className),this.className=this.className||a===!1?\"\":L.get(this,\"__className__\")||\"\")})},hasClass:function(a){for(var b=\" \"+a+\" \",c=0,d=this.length;d>c;c++)if(1===this[c].nodeType&&(\" \"+this[c].className+\" \").replace(ac,\" \").indexOf(b)>=0)return!0;return!1}});var bc=/\\r/g;n.fn.extend({val:function(a){var b,c,d,e=this[0];{if(arguments.length)return d=n.isFunction(a),this.each(function(c){var e;1===this.nodeType&&(e=d?a.call(this,c,n(this).val()):a,null==e?e=\"\":\"number\"==typeof e?e+=\"\":n.isArray(e)&&(e=n.map(e,function(a){return null==a?\"\":a+\"\"})),b=n.valHooks[this.type]||n.valHooks[this.nodeName.toLowerCase()],b&&\"set\"in b&&void 0!==b.set(this,e,\"value\")||(this.value=e))});if(e)return b=n.valHooks[e.type]||n.valHooks[e.nodeName.toLowerCase()],b&&\"get\"in b&&void 0!==(c=b.get(e,\"value\"))?c:(c=e.value,\"string\"==typeof c?c.replace(bc,\"\"):null==c?\"\":c)}}}),n.extend({valHooks:{option:{get:function(a){var b=n.find.attr(a,\"value\");return null!=b?b:n.trim(n.text(a))}},select:{get:function(a){for(var b,c,d=a.options,e=a.selectedIndex,f=\"select-one\"===a.type||0>e,g=f?null:[],h=f?e+1:d.length,i=0>e?h:f?e:0;h>i;i++)if(c=d[i],!(!c.selected&&i!==e||(k.optDisabled?c.disabled:null!==c.getAttribute(\"disabled\"))||c.parentNode.disabled&&n.nodeName(c.parentNode,\"optgroup\"))){if(b=n(c).val(),f)return b;g.push(b)}return g},set:function(a,b){var c,d,e=a.options,f=n.makeArray(b),g=e.length;while(g--)d=e[g],(d.selected=n.inArray(d.value,f)>=0)&&(c=!0);return c||(a.selectedIndex=-1),f}}}}),n.each([\"radio\",\"checkbox\"],function(){n.valHooks[this]={set:function(a,b){return n.isArray(b)?a.checked=n.inArray(n(a).val(),b)>=0:void 0}},k.checkOn||(n.valHooks[this].get=function(a){return null===a.getAttribute(\"value\")?\"on\":a.value})}),n.each(\"blur focus focusin focusout load resize scroll unload click dblclick mousedown mouseup mousemove mouseover mouseout mouseenter mouseleave change select submit keydown keypress keyup error contextmenu\".split(\" \"),function(a,b){n.fn[b]=function(a,c){return arguments.length>0?this.on(b,null,a,c):this.trigger(b)}}),n.fn.extend({hover:function(a,b){return this.mouseenter(a).mouseleave(b||a)},bind:function(a,b,c){return this.on(a,null,b,c)},unbind:function(a,b){return this.off(a,null,b)},delegate:function(a,b,c,d){return this.on(b,a,c,d)},undelegate:function(a,b,c){return 1===arguments.length?this.off(a,\"**\"):this.off(b,a||\"**\",c)}});var cc=n.now(),dc=/\\?/;n.parseJSON=function(a){return JSON.parse(a+\"\")},n.parseXML=function(a){var b,c;if(!a||\"string\"!=typeof a)return null;try{c=new DOMParser,b=c.parseFromString(a,\"text/xml\")}catch(d){b=void 0}return(!b||b.getElementsByTagName(\"parsererror\").length)&&n.error(\"Invalid XML: \"+a),b};var ec=/#.*$/,fc=/([?&])_=[^&]*/,gc=/^(.*?):[ \\t]*([^\\r\\n]*)$/gm,hc=/^(?:about|app|app-storage|.+-extension|file|res|widget):$/,ic=/^(?:GET|HEAD)$/,jc=/^\\/\\//,kc=/^([\\w.+-]+:)(?:\\/\\/(?:[^\\/?#]*@|)([^\\/?#:]*)(?::(\\d+)|)|)/,lc={},mc={},nc=\"*/\".concat(\"*\"),oc=a.location.href,pc=kc.exec(oc.toLowerCase())||[];function qc(a){return function(b,c){\"string\"!=typeof b&&(c=b,b=\"*\");var d,e=0,f=b.toLowerCase().match(E)||[];if(n.isFunction(c))while(d=f[e++])\"+\"===d[0]?(d=d.slice(1)||\"*\",(a[d]=a[d]||[]).unshift(c)):(a[d]=a[d]||[]).push(c)}}function rc(a,b,c,d){var e={},f=a===mc;function g(h){var i;return e[h]=!0,n.each(a[h]||[],function(a,h){var j=h(b,c,d);return\"string\"!=typeof j||f||e[j]?f?!(i=j):void 0:(b.dataTypes.unshift(j),g(j),!1)}),i}return g(b.dataTypes[0])||!e[\"*\"]&&g(\"*\")}function sc(a,b){var c,d,e=n.ajaxSettings.flatOptions||{};for(c in b)void 0!==b[c]&&((e[c]?a:d||(d={}))[c]=b[c]);return d&&n.extend(!0,a,d),a}function tc(a,b,c){var d,e,f,g,h=a.contents,i=a.dataTypes;while(\"*\"===i[0])i.shift(),void 0===d&&(d=a.mimeType||b.getResponseHeader(\"Content-Type\"));if(d)for(e in h)if(h[e]&&h[e].test(d)){i.unshift(e);break}if(i[0]in c)f=i[0];else{for(e in c){if(!i[0]||a.converters[e+\" \"+i[0]]){f=e;break}g||(g=e)}f=f||g}return f?(f!==i[0]&&i.unshift(f),c[f]):void 0}function uc(a,b,c,d){var e,f,g,h,i,j={},k=a.dataTypes.slice();if(k[1])for(g in a.converters)j[g.toLowerCase()]=a.converters[g];f=k.shift();while(f)if(a.responseFields[f]&&(c[a.responseFields[f]]=b),!i&&d&&a.dataFilter&&(b=a.dataFilter(b,a.dataType)),i=f,f=k.shift())if(\"*\"===f)f=i;else if(\"*\"!==i&&i!==f){if(g=j[i+\" \"+f]||j[\"* \"+f],!g)for(e in j)if(h=e.split(\" \"),h[1]===f&&(g=j[i+\" \"+h[0]]||j[\"* \"+h[0]])){g===!0?g=j[e]:j[e]!==!0&&(f=h[0],k.unshift(h[1]));break}if(g!==!0)if(g&&a[\"throws\"])b=g(b);else try{b=g(b)}catch(l){return{state:\"parsererror\",error:g?l:\"No conversion from \"+i+\" to \"+f}}}return{state:\"success\",data:b}}n.extend({active:0,lastModified:{},etag:{},ajaxSettings:{url:oc,type:\"GET\",isLocal:hc.test(pc[1]),global:!0,processData:!0,async:!0,contentType:\"application/x-www-form-urlencoded; charset=UTF-8\",accepts:{\"*\":nc,text:\"text/plain\",html:\"text/html\",xml:\"application/xml, text/xml\",json:\"application/json, text/javascript\"},contents:{xml:/xml/,html:/html/,json:/json/},responseFields:{xml:\"responseXML\",text:\"responseText\",json:\"responseJSON\"},converters:{\"* text\":String,\"text html\":!0,\"text json\":n.parseJSON,\"text xml\":n.parseXML},flatOptions:{url:!0,context:!0}},ajaxSetup:function(a,b){return b?sc(sc(a,n.ajaxSettings),b):sc(n.ajaxSettings,a)},ajaxPrefilter:qc(lc),ajaxTransport:qc(mc),ajax:function(a,b){\"object\"==typeof a&&(b=a,a=void 0),b=b||{};var c,d,e,f,g,h,i,j,k=n.ajaxSetup({},b),l=k.context||k,m=k.context&&(l.nodeType||l.jquery)?n(l):n.event,o=n.Deferred(),p=n.Callbacks(\"once memory\"),q=k.statusCode||{},r={},s={},t=0,u=\"canceled\",v={readyState:0,getResponseHeader:function(a){var b;if(2===t){if(!f){f={};while(b=gc.exec(e))f[b[1].toLowerCase()]=b[2]}b=f[a.toLowerCase()]}return null==b?null:b},getAllResponseHeaders:function(){return 2===t?e:null},setRequestHeader:function(a,b){var c=a.toLowerCase();return t||(a=s[c]=s[c]||a,r[a]=b),this},overrideMimeType:function(a){return t||(k.mimeType=a),this},statusCode:function(a){var b;if(a)if(2>t)for(b in a)q[b]=[q[b],a[b]];else v.always(a[v.status]);return this},abort:function(a){var b=a||u;return c&&c.abort(b),x(0,b),this}};if(o.promise(v).complete=p.add,v.success=v.done,v.error=v.fail,k.url=((a||k.url||oc)+\"\").replace(ec,\"\").replace(jc,pc[1]+\"//\"),k.type=b.method||b.type||k.method||k.type,k.dataTypes=n.trim(k.dataType||\"*\").toLowerCase().match(E)||[\"\"],null==k.crossDomain&&(h=kc.exec(k.url.toLowerCase()),k.crossDomain=!(!h||h[1]===pc[1]&&h[2]===pc[2]&&(h[3]||(\"http:\"===h[1]?\"80\":\"443\"))===(pc[3]||(\"http:\"===pc[1]?\"80\":\"443\")))),k.data&&k.processData&&\"string\"!=typeof k.data&&(k.data=n.param(k.data,k.traditional)),rc(lc,k,b,v),2===t)return v;i=n.event&&k.global,i&&0===n.active++&&n.event.trigger(\"ajaxStart\"),k.type=k.type.toUpperCase(),k.hasContent=!ic.test(k.type),d=k.url,k.hasContent||(k.data&&(d=k.url+=(dc.test(d)?\"&\":\"?\")+k.data,delete k.data),k.cache===!1&&(k.url=fc.test(d)?d.replace(fc,\"$1_=\"+cc++):d+(dc.test(d)?\"&\":\"?\")+\"_=\"+cc++)),k.ifModified&&(n.lastModified[d]&&v.setRequestHeader(\"If-Modified-Since\",n.lastModified[d]),n.etag[d]&&v.setRequestHeader(\"If-None-Match\",n.etag[d])),(k.data&&k.hasContent&&k.contentType!==!1||b.contentType)&&v.setRequestHeader(\"Content-Type\",k.contentType),v.setRequestHeader(\"Accept\",k.dataTypes[0]&&k.accepts[k.dataTypes[0]]?k.accepts[k.dataTypes[0]]+(\"*\"!==k.dataTypes[0]?\", \"+nc+\"; q=0.01\":\"\"):k.accepts[\"*\"]);for(j in k.headers)v.setRequestHeader(j,k.headers[j]);if(k.beforeSend&&(k.beforeSend.call(l,v,k)===!1||2===t))return v.abort();u=\"abort\";for(j in{success:1,error:1,complete:1})v[j](k[j]);if(c=rc(mc,k,b,v)){v.readyState=1,i&&m.trigger(\"ajaxSend\",[v,k]),k.async&&k.timeout>0&&(g=setTimeout(function(){v.abort(\"timeout\")},k.timeout));try{t=1,c.send(r,x)}catch(w){if(!(2>t))throw w;x(-1,w)}}else x(-1,\"No Transport\");function x(a,b,f,h){var j,r,s,u,w,x=b;2!==t&&(t=2,g&&clearTimeout(g),c=void 0,e=h||\"\",v.readyState=a>0?4:0,j=a>=200&&300>a||304===a,f&&(u=tc(k,v,f)),u=uc(k,u,v,j),j?(k.ifModified&&(w=v.getResponseHeader(\"Last-Modified\"),w&&(n.lastModified[d]=w),w=v.getResponseHeader(\"etag\"),w&&(n.etag[d]=w)),204===a||\"HEAD\"===k.type?x=\"nocontent\":304===a?x=\"notmodified\":(x=u.state,r=u.data,s=u.error,j=!s)):(s=x,(a||!x)&&(x=\"error\",0>a&&(a=0))),v.status=a,v.statusText=(b||x)+\"\",j?o.resolveWith(l,[r,x,v]):o.rejectWith(l,[v,x,s]),v.statusCode(q),q=void 0,i&&m.trigger(j?\"ajaxSuccess\":\"ajaxError\",[v,k,j?r:s]),p.fireWith(l,[v,x]),i&&(m.trigger(\"ajaxComplete\",[v,k]),--n.active||n.event.trigger(\"ajaxStop\")))}return v},getJSON:function(a,b,c){return n.get(a,b,c,\"json\")},getScript:function(a,b){return n.get(a,void 0,b,\"script\")}}),n.each([\"get\",\"post\"],function(a,b){n[b]=function(a,c,d,e){return n.isFunction(c)&&(e=e||d,d=c,c=void 0),n.ajax({url:a,type:b,dataType:e,data:c,success:d})}}),n._evalUrl=function(a){return n.ajax({url:a,type:\"GET\",dataType:\"script\",async:!1,global:!1,\"throws\":!0})},n.fn.extend({wrapAll:function(a){var b;return n.isFunction(a)?this.each(function(b){n(this).wrapAll(a.call(this,b))}):(this[0]&&(b=n(a,this[0].ownerDocument).eq(0).clone(!0),this[0].parentNode&&b.insertBefore(this[0]),b.map(function(){var a=this;while(a.firstElementChild)a=a.firstElementChild;return a}).append(this)),this)},wrapInner:function(a){return this.each(n.isFunction(a)?function(b){n(this).wrapInner(a.call(this,b))}:function(){var b=n(this),c=b.contents();c.length?c.wrapAll(a):b.append(a)})},wrap:function(a){var b=n.isFunction(a);return this.each(function(c){n(this).wrapAll(b?a.call(this,c):a)})},unwrap:function(){return this.parent().each(function(){n.nodeName(this,\"body\")||n(this).replaceWith(this.childNodes)}).end()}}),n.expr.filters.hidden=function(a){return a.offsetWidth<=0&&a.offsetHeight<=0},n.expr.filters.visible=function(a){return!n.expr.filters.hidden(a)};var vc=/%20/g,wc=/\\[\\]$/,xc=/\\r?\\n/g,yc=/^(?:submit|button|image|reset|file)$/i,zc=/^(?:input|select|textarea|keygen)/i;function Ac(a,b,c,d){var e;if(n.isArray(b))n.each(b,function(b,e){c||wc.test(a)?d(a,e):Ac(a+\"[\"+(\"object\"==typeof e?b:\"\")+\"]\",e,c,d)});else if(c||\"object\"!==n.type(b))d(a,b);else for(e in b)Ac(a+\"[\"+e+\"]\",b[e],c,d)}n.param=function(a,b){var c,d=[],e=function(a,b){b=n.isFunction(b)?b():null==b?\"\":b,d[d.length]=encodeURIComponent(a)+\"=\"+encodeURIComponent(b)};if(void 0===b&&(b=n.ajaxSettings&&n.ajaxSettings.traditional),n.isArray(a)||a.jquery&&!n.isPlainObject(a))n.each(a,function(){e(this.name,this.value)});else for(c in a)Ac(c,a[c],b,e);return d.join(\"&\").replace(vc,\"+\")},n.fn.extend({serialize:function(){return n.param(this.serializeArray())},serializeArray:function(){return this.map(function(){var a=n.prop(this,\"elements\");return a?n.makeArray(a):this}).filter(function(){var a=this.type;return this.name&&!n(this).is(\":disabled\")&&zc.test(this.nodeName)&&!yc.test(a)&&(this.checked||!T.test(a))}).map(function(a,b){var c=n(this).val();return null==c?null:n.isArray(c)?n.map(c,function(a){return{name:b.name,value:a.replace(xc,\"\\r\\n\")}}):{name:b.name,value:c.replace(xc,\"\\r\\n\")}}).get()}}),n.ajaxSettings.xhr=function(){try{return new XMLHttpRequest}catch(a){}};var Bc=0,Cc={},Dc={0:200,1223:204},Ec=n.ajaxSettings.xhr();a.attachEvent&&a.attachEvent(\"onunload\",function(){for(var a in Cc)Cc[a]()}),k.cors=!!Ec&&\"withCredentials\"in Ec,k.ajax=Ec=!!Ec,n.ajaxTransport(function(a){var b;return k.cors||Ec&&!a.crossDomain?{send:function(c,d){var e,f=a.xhr(),g=++Bc;if(f.open(a.type,a.url,a.async,a.username,a.password),a.xhrFields)for(e in a.xhrFields)f[e]=a.xhrFields[e];a.mimeType&&f.overrideMimeType&&f.overrideMimeType(a.mimeType),a.crossDomain||c[\"X-Requested-With\"]||(c[\"X-Requested-With\"]=\"XMLHttpRequest\");for(e in c)f.setRequestHeader(e,c[e]);b=function(a){return function(){b&&(delete Cc[g],b=f.onload=f.onerror=null,\"abort\"===a?f.abort():\"error\"===a?d(f.status,f.statusText):d(Dc[f.status]||f.status,f.statusText,\"string\"==typeof f.responseText?{text:f.responseText}:void 0,f.getAllResponseHeaders()))}},f.onload=b(),f.onerror=b(\"error\"),b=Cc[g]=b(\"abort\");try{f.send(a.hasContent&&a.data||null)}catch(h){if(b)throw h}},abort:function(){b&&b()}}:void 0}),n.ajaxSetup({accepts:{script:\"text/javascript, application/javascript, application/ecmascript, application/x-ecmascript\"},contents:{script:/(?:java|ecma)script/},converters:{\"text script\":function(a){return n.globalEval(a),a}}}),n.ajaxPrefilter(\"script\",function(a){void 0===a.cache&&(a.cache=!1),a.crossDomain&&(a.type=\"GET\")}),n.ajaxTransport(\"script\",function(a){if(a.crossDomain){var b,c;return{send:function(d,e){b=n(\"<script>\").prop({async:!0,charset:a.scriptCharset,src:a.url}).on(\"load error\",c=function(a){b.remove(),c=null,a&&e(\"error\"===a.type?404:200,a.type)}),l.head.appendChild(b[0])},abort:function(){c&&c()}}}});var Fc=[],Gc=/(=)\\?(?=&|$)|\\?\\?/;n.ajaxSetup({jsonp:\"callback\",jsonpCallback:function(){var a=Fc.pop()||n.expando+\"_\"+cc++;return this[a]=!0,a}}),n.ajaxPrefilter(\"json jsonp\",function(b,c,d){var e,f,g,h=b.jsonp!==!1&&(Gc.test(b.url)?\"url\":\"string\"==typeof b.data&&!(b.contentType||\"\").indexOf(\"application/x-www-form-urlencoded\")&&Gc.test(b.data)&&\"data\");return h||\"jsonp\"===b.dataTypes[0]?(e=b.jsonpCallback=n.isFunction(b.jsonpCallback)?b.jsonpCallback():b.jsonpCallback,h?b[h]=b[h].replace(Gc,\"$1\"+e):b.jsonp!==!1&&(b.url+=(dc.test(b.url)?\"&\":\"?\")+b.jsonp+\"=\"+e),b.converters[\"script json\"]=function(){return g||n.error(e+\" was not called\"),g[0]},b.dataTypes[0]=\"json\",f=a[e],a[e]=function(){g=arguments},d.always(function(){a[e]=f,b[e]&&(b.jsonpCallback=c.jsonpCallback,Fc.push(e)),g&&n.isFunction(f)&&f(g[0]),g=f=void 0}),\"script\"):void 0}),n.parseHTML=function(a,b,c){if(!a||\"string\"!=typeof a)return null;\"boolean\"==typeof b&&(c=b,b=!1),b=b||l;var d=v.exec(a),e=!c&&[];return d?[b.createElement(d[1])]:(d=n.buildFragment([a],b,e),e&&e.length&&n(e).remove(),n.merge([],d.childNodes))};var Hc=n.fn.load;n.fn.load=function(a,b,c){if(\"string\"!=typeof a&&Hc)return Hc.apply(this,arguments);var d,e,f,g=this,h=a.indexOf(\" \");return h>=0&&(d=n.trim(a.slice(h)),a=a.slice(0,h)),n.isFunction(b)?(c=b,b=void 0):b&&\"object\"==typeof b&&(e=\"POST\"),g.length>0&&n.ajax({url:a,type:e,dataType:\"html\",data:b}).done(function(a){f=arguments,g.html(d?n(\"<div>\").append(n.parseHTML(a)).find(d):a)}).complete(c&&function(a,b){g.each(c,f||[a.responseText,b,a])}),this},n.each([\"ajaxStart\",\"ajaxStop\",\"ajaxComplete\",\"ajaxError\",\"ajaxSuccess\",\"ajaxSend\"],function(a,b){n.fn[b]=function(a){return this.on(b,a)}}),n.expr.filters.animated=function(a){return n.grep(n.timers,function(b){return a===b.elem}).length};var Ic=a.document.documentElement;function Jc(a){return n.isWindow(a)?a:9===a.nodeType&&a.defaultView}n.offset={setOffset:function(a,b,c){var d,e,f,g,h,i,j,k=n.css(a,\"position\"),l=n(a),m={};\"static\"===k&&(a.style.position=\"relative\"),h=l.offset(),f=n.css(a,\"top\"),i=n.css(a,\"left\"),j=(\"absolute\"===k||\"fixed\"===k)&&(f+i).indexOf(\"auto\")>-1,j?(d=l.position(),g=d.top,e=d.left):(g=parseFloat(f)||0,e=parseFloat(i)||0),n.isFunction(b)&&(b=b.call(a,c,h)),null!=b.top&&(m.top=b.top-h.top+g),null!=b.left&&(m.left=b.left-h.left+e),\"using\"in b?b.using.call(a,m):l.css(m)}},n.fn.extend({offset:function(a){if(arguments.length)return void 0===a?this:this.each(function(b){n.offset.setOffset(this,a,b)});var b,c,d=this[0],e={top:0,left:0},f=d&&d.ownerDocument;if(f)return b=f.documentElement,n.contains(b,d)?(typeof d.getBoundingClientRect!==U&&(e=d.getBoundingClientRect()),c=Jc(f),{top:e.top+c.pageYOffset-b.clientTop,left:e.left+c.pageXOffset-b.clientLeft}):e},position:function(){if(this[0]){var a,b,c=this[0],d={top:0,left:0};return\"fixed\"===n.css(c,\"position\")?b=c.getBoundingClientRect():(a=this.offsetParent(),b=this.offset(),n.nodeName(a[0],\"html\")||(d=a.offset()),d.top+=n.css(a[0],\"borderTopWidth\",!0),d.left+=n.css(a[0],\"borderLeftWidth\",!0)),{top:b.top-d.top-n.css(c,\"marginTop\",!0),left:b.left-d.left-n.css(c,\"marginLeft\",!0)}}},offsetParent:function(){return this.map(function(){var a=this.offsetParent||Ic;while(a&&!n.nodeName(a,\"html\")&&\"static\"===n.css(a,\"position\"))a=a.offsetParent;return a||Ic})}}),n.each({scrollLeft:\"pageXOffset\",scrollTop:\"pageYOffset\"},function(b,c){var d=\"pageYOffset\"===c;n.fn[b]=function(e){return J(this,function(b,e,f){var g=Jc(b);return void 0===f?g?g[c]:b[e]:void(g?g.scrollTo(d?a.pageXOffset:f,d?f:a.pageYOffset):b[e]=f)},b,e,arguments.length,null)}}),n.each([\"top\",\"left\"],function(a,b){n.cssHooks[b]=yb(k.pixelPosition,function(a,c){return c?(c=xb(a,b),vb.test(c)?n(a).position()[b]+\"px\":c):void 0})}),n.each({Height:\"height\",Width:\"width\"},function(a,b){n.each({padding:\"inner\"+a,content:b,\"\":\"outer\"+a},function(c,d){n.fn[d]=function(d,e){var f=arguments.length&&(c||\"boolean\"!=typeof d),g=c||(d===!0||e===!0?\"margin\":\"border\");return J(this,function(b,c,d){var e;return n.isWindow(b)?b.document.documentElement[\"client\"+a]:9===b.nodeType?(e=b.documentElement,Math.max(b.body[\"scroll\"+a],e[\"scroll\"+a],b.body[\"offset\"+a],e[\"offset\"+a],e[\"client\"+a])):void 0===d?n.css(b,c,g):n.style(b,c,d,g)},b,f?d:void 0,f,null)}})}),n.fn.size=function(){return this.length},n.fn.andSelf=n.fn.addBack,\"function\"==typeof define&&define.amd&&define(\"jquery\",[],function(){return n});var Kc=a.jQuery,Lc=a.$;return n.noConflict=function(b){return a.$===n&&(a.$=Lc),b&&a.jQuery===n&&(a.jQuery=Kc),n},typeof b===U&&(a.jQuery=a.$=n),n});\r\n"
          },
          "redirectURL": "",
          "headersSize": 439,
          "bodySize": 84324,
          "_transferSize": 84763,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:24:04.689Z",
        "time": 336.66299999822513,
        "timings": {
          "blocked": 50.551999998735965,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.33899999999999864,
          "wait": 52.328999998500336,
          "receive": 233.44300000098883,
          "_blocked_queueing": 5.723999998735962
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 30
        },
        "_priority": "High",
        "_resourceType": "script",
        "cache": {},
        "connection": "2609",
        "pageref": "page_4",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.migrate.js",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "*/*"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 449,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"7200-1541038722000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:42 GMT"
            },
            {
              "name": "Content-Type",
              "value": "application/javascript;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "7200"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:24:03 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 7200,
            "mimeType": "application/javascript",
            "compression": 0,
            "text": "/*! jQuery Migrate v1.2.1 | (c) 2005, 2013 jQuery Foundation, Inc. and other contributors | jquery.org/license */\r\njQuery.migrateMute===void 0&&(jQuery.migrateMute=!0),function(e,t,n){function r(n){var r=t.console;i[n]||(i[n]=!0,e.migrateWarnings.push(n),r&&r.warn&&!e.migrateMute&&(r.warn(\"JQMIGRATE: \"+n),e.migrateTrace&&r.trace&&r.trace()))}function a(t,a,i,o){if(Object.defineProperty)try{return Object.defineProperty(t,a,{configurable:!0,enumerable:!0,get:function(){return r(o),i},set:function(e){r(o),i=e}}),n}catch(s){}e._definePropertyBroken=!0,t[a]=i}var i={};e.migrateWarnings=[],!e.migrateMute&&t.console&&t.console.log&&t.console.log(\"JQMIGRATE: Logging is active\"),e.migrateTrace===n&&(e.migrateTrace=!0),e.migrateReset=function(){i={},e.migrateWarnings.length=0},\"BackCompat\"===document.compatMode&&r(\"jQuery is not compatible with Quirks Mode\");var o=e(\"<input/>\",{size:1}).attr(\"size\")&&e.attrFn,s=e.attr,u=e.attrHooks.value&&e.attrHooks.value.get||function(){return null},c=e.attrHooks.value&&e.attrHooks.value.set||function(){return n},l=/^(?:input|button)$/i,d=/^[238]$/,p=/^(?:autofocus|autoplay|async|checked|controls|defer|disabled|hidden|loop|multiple|open|readonly|required|scoped|selected)$/i,f=/^(?:checked|selected)$/i;a(e,\"attrFn\",o||{},\"jQuery.attrFn is deprecated\"),e.attr=function(t,a,i,u){var c=a.toLowerCase(),g=t&&t.nodeType;return u&&(4>s.length&&r(\"jQuery.fn.attr( props, pass ) is deprecated\"),t&&!d.test(g)&&(o?a in o:e.isFunction(e.fn[a])))?e(t)[a](i):(\"type\"===a&&i!==n&&l.test(t.nodeName)&&t.parentNode&&r(\"Can't change the 'type' of an input or button in IE 6/7/8\"),!e.attrHooks[c]&&p.test(c)&&(e.attrHooks[c]={get:function(t,r){var a,i=e.prop(t,r);return i===!0||\"boolean\"!=typeof i&&(a=t.getAttributeNode(r))&&a.nodeValue!==!1?r.toLowerCase():n},set:function(t,n,r){var a;return n===!1?e.removeAttr(t,r):(a=e.propFix[r]||r,a in t&&(t[a]=!0),t.setAttribute(r,r.toLowerCase())),r}},f.test(c)&&r(\"jQuery.fn.attr('\"+c+\"') may use property instead of attribute\")),s.call(e,t,a,i))},e.attrHooks.value={get:function(e,t){var n=(e.nodeName||\"\").toLowerCase();return\"button\"===n?u.apply(this,arguments):(\"input\"!==n&&\"option\"!==n&&r(\"jQuery.fn.attr('value') no longer gets properties\"),t in e?e.value:null)},set:function(e,t){var a=(e.nodeName||\"\").toLowerCase();return\"button\"===a?c.apply(this,arguments):(\"input\"!==a&&\"option\"!==a&&r(\"jQuery.fn.attr('value', val) no longer sets properties\"),e.value=t,n)}};var g,h,v=e.fn.init,m=e.parseJSON,y=/^([^<]*)(<[\\w\\W]+>)([^>]*)$/;e.fn.init=function(t,n,a){var i;return t&&\"string\"==typeof t&&!e.isPlainObject(n)&&(i=y.exec(e.trim(t)))&&i[0]&&(\"<\"!==t.charAt(0)&&r(\"$(html) HTML strings must start with '<' character\"),i[3]&&r(\"$(html) HTML text after last tag is ignored\"),\"#\"===i[0].charAt(0)&&(r(\"HTML string cannot start with a '#' character\"),e.error(\"JQMIGRATE: Invalid selector string (XSS)\")),n&&n.context&&(n=n.context),e.parseHTML)?v.call(this,e.parseHTML(i[2],n,!0),n,a):v.apply(this,arguments)},e.fn.init.prototype=e.fn,e.parseJSON=function(e){return e||null===e?m.apply(this,arguments):(r(\"jQuery.parseJSON requires a valid JSON string\"),null)},e.uaMatch=function(e){e=e.toLowerCase();var t=/(chrome)[ \\/]([\\w.]+)/.exec(e)||/(webkit)[ \\/]([\\w.]+)/.exec(e)||/(opera)(?:.*version|)[ \\/]([\\w.]+)/.exec(e)||/(msie) ([\\w.]+)/.exec(e)||0>e.indexOf(\"compatible\")&&/(mozilla)(?:.*? rv:([\\w.]+)|)/.exec(e)||[];return{browser:t[1]||\"\",version:t[2]||\"0\"}},e.browser||(g=e.uaMatch(navigator.userAgent),h={},g.browser&&(h[g.browser]=!0,h.version=g.version),h.chrome?h.webkit=!0:h.webkit&&(h.safari=!0),e.browser=h),a(e,\"browser\",e.browser,\"jQuery.browser is deprecated\"),e.sub=function(){function t(e,n){return new t.fn.init(e,n)}e.extend(!0,t,this),t.superclass=this,t.fn=t.prototype=this(),t.fn.constructor=t,t.sub=this.sub,t.fn.init=function(r,a){return a&&a instanceof e&&!(a instanceof t)&&(a=t(a)),e.fn.init.call(this,r,a,n)},t.fn.init.prototype=t.fn;var n=t(document);return r(\"jQuery.sub() is deprecated\"),t},e.ajaxSetup({converters:{\"text json\":e.parseJSON}});var b=e.fn.data;e.fn.data=function(t){var a,i,o=this[0];return!o||\"events\"!==t||1!==arguments.length||(a=e.data(o,t),i=e._data(o,t),a!==n&&a!==i||i===n)?b.apply(this,arguments):(r(\"Use of jQuery.fn.data('events') is deprecated\"),i)};var j=/\\/(java|ecma)script/i,w=e.fn.andSelf||e.fn.addBack;e.fn.andSelf=function(){return r(\"jQuery.fn.andSelf() replaced by jQuery.fn.addBack()\"),w.apply(this,arguments)},e.clean||(e.clean=function(t,a,i,o){a=a||document,a=!a.nodeType&&a[0]||a,a=a.ownerDocument||a,r(\"jQuery.clean() is deprecated\");var s,u,c,l,d=[];if(e.merge(d,e.buildFragment(t,a).childNodes),i)for(c=function(e){return!e.type||j.test(e.type)?o?o.push(e.parentNode?e.parentNode.removeChild(e):e):i.appendChild(e):n},s=0;null!=(u=d[s]);s++)e.nodeName(u,\"script\")&&c(u)||(i.appendChild(u),u.getElementsByTagName!==n&&(l=e.grep(e.merge([],u.getElementsByTagName(\"script\")),c),d.splice.apply(d,[s+1,0].concat(l)),s+=l.length));return d});var Q=e.event.add,x=e.event.remove,k=e.event.trigger,N=e.fn.toggle,T=e.fn.live,M=e.fn.die,S=\"ajaxStart|ajaxStop|ajaxSend|ajaxComplete|ajaxError|ajaxSuccess\",C=RegExp(\"\\\\b(?:\"+S+\")\\\\b\"),H=/(?:^|\\s)hover(\\.\\S+|)\\b/,A=function(t){return\"string\"!=typeof t||e.event.special.hover?t:(H.test(t)&&r(\"'hover' pseudo-event is deprecated, use 'mouseenter mouseleave'\"),t&&t.replace(H,\"mouseenter$1 mouseleave$1\"))};e.event.props&&\"attrChange\"!==e.event.props[0]&&e.event.props.unshift(\"attrChange\",\"attrName\",\"relatedNode\",\"srcElement\"),e.event.dispatch&&a(e.event,\"handle\",e.event.dispatch,\"jQuery.event.handle is undocumented and deprecated\"),e.event.add=function(e,t,n,a,i){e!==document&&C.test(t)&&r(\"AJAX events should be attached to document: \"+t),Q.call(this,e,A(t||\"\"),n,a,i)},e.event.remove=function(e,t,n,r,a){x.call(this,e,A(t)||\"\",n,r,a)},e.fn.error=function(){var e=Array.prototype.slice.call(arguments,0);return r(\"jQuery.fn.error() is deprecated\"),e.splice(0,0,\"error\"),arguments.length?this.bind.apply(this,e):(this.triggerHandler.apply(this,e),this)},e.fn.toggle=function(t,n){if(!e.isFunction(t)||!e.isFunction(n))return N.apply(this,arguments);r(\"jQuery.fn.toggle(handler, handler...) is deprecated\");var a=arguments,i=t.guid||e.guid++,o=0,s=function(n){var r=(e._data(this,\"lastToggle\"+t.guid)||0)%o;return e._data(this,\"lastToggle\"+t.guid,r+1),n.preventDefault(),a[r].apply(this,arguments)||!1};for(s.guid=i;a.length>o;)a[o++].guid=i;return this.click(s)},e.fn.live=function(t,n,a){return r(\"jQuery.fn.live() is deprecated\"),T?T.apply(this,arguments):(e(this.context).on(t,this.selector,n,a),this)},e.fn.die=function(t,n){return r(\"jQuery.fn.die() is deprecated\"),M?M.apply(this,arguments):(e(this.context).off(t,this.selector||\"**\",n),this)},e.event.trigger=function(e,t,n,a){return n||C.test(e)||r(\"Global events are undocumented and deprecated\"),k.call(this,e,t,n||document,a)},e.each(S.split(\"|\"),function(t,n){e.event.special[n]={setup:function(){var t=this;return t!==document&&(e.event.add(document,n+\".\"+e.guid,function(){e.event.trigger(n,null,t,!0)}),e._data(this,n,e.guid++)),!1},teardown:function(){return this!==document&&e.event.remove(document,n+\".\"+e._data(this,n)),!1}}})}(jQuery,window);"
          },
          "redirectURL": "",
          "headersSize": 437,
          "bodySize": 7200,
          "_transferSize": 7637,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:24:04.693Z",
        "time": 130.85200000205077,
        "timings": {
          "blocked": 17.745000001013977,
          "dns": 0,
          "ssl": -1,
          "connect": 30.158,
          "send": 0.5410000000000004,
          "wait": 38.63700000047591,
          "receive": 43.77100000056089,
          "_blocked_queueing": 17.745000001013977
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 189
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2609",
        "pageref": "page_4",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/drilldown.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 493,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"1186-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "1186"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:24:03 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 1186,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAABwAAAAcCAYAAAByDd+UAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDpCNkNDRTRBRjU5MUUxMUU4ODhGQkIzMThDOTVDMzY3MyIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDpCNkNDRTRCMDU5MUUxMUU4ODhGQkIzMThDOTVDMzY3MyI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOkI2Q0NFNEFENTkxRTExRTg4OEZCQjMxOEM5NUMzNjczIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOkI2Q0NFNEFFNTkxRTExRTg4OEZCQjMxOEM5NUMzNjczIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+rzVH/wAAARdJREFUeNpi/P//PwM9ARMDncGohUPfQhZkztmzZ02A1HQgVqKS+e+AuMLY2HgtVguBoA+ITajoISEgngLEa3EF6UcahOInfHFYha6ACqAcp4XAsL4MpLKpaFk30MwNeFMpUMESILWCCpZdAOJaYrNFLhCfpzB1JgId/xNdghFX4Q3MImpA6gQQC5JoGchAX6BlW0nK+EANt6CJiFQwA5dlBEsaoMYZQGolCZaBoqGU0qItC4jvEaEOFF9JQEd+pchCoAGgBBAOxF8JKM0Aqr1AlcIbaNAZIFWER8lUoJoFVK0tgAbOAlIbsUjdQC9NqFk9occnUfFGtoVAg58BKT9o/rwGxGFAseOkmME42mobtXDQWwgQYAAjaEX2GlQ7LAAAAABJRU5ErkJggg==",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 1186,
          "_transferSize": 1610,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:24:04.701Z",
        "time": 170.5179999989923,
        "timings": {
          "blocked": 131.91600000053504,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.47,
          "wait": 35.87799999937322,
          "receive": 2.2539999990840442,
          "_blocked_queueing": 130.91200000053504
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 355
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2609",
        "pageref": "page_4",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/button_reserve_n.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 500,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2411-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2411"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:24:03 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2411,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAFQAAABUCAYAAAAcaxDBAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDozRDI5NEVCOTUwMTUxMUU4QUM2RUE4OEUzQjU0OTNFNCIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDozRDI5NEVCQTUwMTUxMUU4QUM2RUE4OEUzQjU0OTNFNCI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjNEMjk0RUI3NTAxNTExRThBQzZFQTg4RTNCNTQ5M0U0IiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjNEMjk0RUI4NTAxNTExRThBQzZFQTg4RTNCNTQ5M0U0Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+uPSflwAABeBJREFUeNrsXFuI3UQY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",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2411,
          "_transferSize": 2835,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:24:04.702Z",
        "time": 222.64999999970314,
        "timings": {
          "blocked": 183.52999999846983,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.6140000000000001,
          "wait": 34.43799999922584,
          "receive": 4.068000002007466,
          "_blocked_queueing": 181.75699999846984
        }
      },
      {
        "_initiator": {
          "type": "parser",
          "url": "http://221.178.136.186:8090/pkt/service/reservePage",
          "lineNumber": 360
        },
        "_priority": "Low",
        "_resourceType": "image",
        "cache": {},
        "connection": "2609",
        "pageref": "page_4",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/button_my_n.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 495,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2296-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2296"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:24:03 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2296,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAFQAAABUCAYAAAAcaxDBAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDo2QTFENjg0RjUwMTUxMUU4QUE3NUQzNDYxQjAzREFEOSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDo2QTFENjg1MDUwMTUxMUU4QUE3NUQzNDYxQjAzREFEOSI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjZBMUQ2ODRENTAxNTExRThBQTc1RDM0NjFCMDNEQUQ5IiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjZBMUQ2ODRFNTAxNTExRThBQTc1RDM0NjFCMDNEQUQ5Ii8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+XPLFCgAABW1JREFUeNrsXF2IFEcQ7jmNvwmiUfPgH96qQUOi4kMgEIjcrmggSIKCklfZzVNeJJxKJOZBRUIC5m2XBAIRDLkXCeRBbxE5RLkYkyj+crnVmB9JIuqdORUu3qTKq/HqOjP7M7szPT9V8HE1u9PdM99UV1VXz55l27YSaZ20CQVCqBAqhIoIoUKot7wCOAS4BhgEDAEGAD8DvgCsiTKhVoTSptVE2It4XVXOwws+B9gKuCIW6i6dgDOAl2qQqej7VYDzgHfEQv8v+wA7tc9+AXQBugF3AHMA6wCbAPO0c3cADkSGUSTUIN4CjNhjch+wrUabdwEPWRts32H4Pp7ApIVOAtwCPEPH9wArKRjVEnQNvYApdIz9PAcYSbMP3cvIRCJydZKpyH9upACFMpv8cKp9KFrVs6QfAbzpo4/jgLWk/+HiX1NDKEbpHyhi4wU8D+jz0c/LgNPUD1r5kgasPFFTfh1Lj275JFORHx1k97I2rT50GdN/a7Kvvzz6TRWhTzH9YZN93Wf65LQSeo/pM5rsaybTB9JK6FmmL2iin4mAuez4p7QSeowl4ZiLrvfZzxaW3A8DTqQ5D+2jNAflMmCFjz5wzb+Q9HOUjqV2pfQh05cDPmiw/SeMTJRdUhyx7YtakWN7ne32aEWV3qgUR0xfwDyqMHE5Bljscf4yQI92/gBgllSbxgS3PMqAqeyzR4AK4EfAbYrkWNFfpLmpIWp/Pirl0KhsgWSIlGkNtOkHdFBgioyY3gJBAouUl06ts83fgN2UIUSKTCcxNhnl3/MgcoSm8x0qfvwOuERlvh4VYTFB6Cwi5QXt82HymV8BvqEp3YhgDvoR4JSPFCy2aRNG6btalMb9oc8Ac5vs+wbrs8dUlA/Thy4iX8mLId8BFgO2aWU4P3KX6a9S5pDYoISuBffdn3YmBuBjNVpxv9miMV6j5acjHUamfkhT4ag2zXcFONZVNs4wYEHSVkqva2R+HvB4uGp6wMYrJ22l9CtgPuk3yJcGLTjV97AUrD2snDVoH/oGIxOf3Nsh5rh88+79pASl3Uy/CDgZYng4zPSNSSAUI/pKdrw/5Hj7qRr/ZsmKuBOKb4JMIh13Nr8OmdBLVKl6XAQKy0qDJHQD068C/jWQZ1/Q8tRYE7qa6acMrazPMH1p3Anl27unDRH6vVaUiTWh05neZ4jQ60yfEndCJ7DE+k9DhN5WY/v/E+JOaBsjdMgQoYOM0La4E2qxFdI/hgh9wK7DijuhX6rRLYyDavwbcmFb6LdqdDegN4wBLfm9fLzW8kKoiBAqhAqhIkKoECqEigihQqgQKoQaHj+rRqtRxSbadvv8PvaE5ukGHWRdzsGbr/e9UHwI+B5+zuP7zfQ3lwRCsxp5jhVaDCj6K4fOP2OpZrX99H07QR+DX4NyuQ4HsSK0rJFX8jjH7TP8AUOBLDpfZ/+Wy2xQLudYZNWVoAg1+Y59NSl5PATVgDsopDnKt7ewryJ7KKFLUBba70GSXcPnukmF3EAj/rtE15BJioVmPHxoNZ9meSDjY+wueqDdaZzyXgGimUhcJh+a9QhslSQR2q/lohUX92Br/rCetMwtsGHfnUmy0CLdbJ4RVWDTGS3pLEt1uC/NVYnUtdImRwr0sIpxJ7SbEaP70LLH9Csyn2ep1vzOqEzIx53QHJFSqPOmK5rlcffQrHUdoH6zLEVLbGKf1SJxl0t+2t4iK010lOeVoDJLn9zW4l0qRhKWhfJp5iT9BW01k2ER22KWWWrxg1Rq/P+Nig2h+mqpwIjzEksLaCUfK6tq0hl0HhokoX6XffXUL8su59kuKVveI5UKzKfK23cJXHoKoSJCqBAqhIo8lv8EGAD34kdWIhlTwQAAAABJRU5ErkJggg==",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2296,
          "_transferSize": 2720,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:24:04.703Z",
        "time": 286.00299999743584,
        "timings": {
          "blocked": 229.75799999859325,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.32200000000000006,
          "wait": 48.817999998250045,
          "receive": 7.105000000592554,
          "_blocked_queueing": 226.82699999859324
        }
      },
      {
        "_initiator": {
          "type": "script",
          "stack": {
            "callFrames": [
              {
                "functionName": "buildFragment",
                "scriptId": "506",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 2,
                "columnNumber": 13983
              },
              {
                "functionName": "domManip",
                "scriptId": "506",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 2,
                "columnNumber": 16800
              },
              {
                "functionName": "append",
                "scriptId": "506",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 2,
                "columnNumber": 14885
              },
              {
                "functionName": "",
                "scriptId": "510",
                "url": "http://221.178.136.186:8090/pkt/service/reservePage",
                "lineNumber": 264,
                "columnNumber": 31
              },
              {
                "functionName": "j",
                "scriptId": "506",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 1,
                "columnNumber": 26910
              },
              {
                "functionName": "fireWith",
                "scriptId": "506",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 1,
                "columnNumber": 27723
              },
              {
                "functionName": "ready",
                "scriptId": "506",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 1,
                "columnNumber": 29517
              },
              {
                "functionName": "I",
                "scriptId": "506",
                "url": "http://221.178.136.186:8090/pkt/resources/js/jquery.min.js",
                "lineNumber": 1,
                "columnNumber": 29708
              }
            ]
          }
        },
        "_priority": "High",
        "_resourceType": "image",
        "cache": {},
        "connection": "2585",
        "pageref": "page_4",
        "request": {
          "method": "GET",
          "url": "http://221.178.136.186:8090/pkt/resources/images/reserve/button_reserve_h.png",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Host",
              "value": "221.178.136.186:8090"
            },
            {
              "name": "Connection",
              "value": "keep-alive"
            },
            {
              "name": "User-Agent",
              "value": "Mozilla/5.0 (Linux; Android 8.0.0; MIX) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/85.0.4183.81 Mobile Safari/537.36"
            },
            {
              "name": "Accept",
              "value": "image/webp,image/apng,image/*,*/*;q=0.8"
            },
            {
              "name": "Referer",
              "value": "http://221.178.136.186:8090/pkt/service/reservePage"
            },
            {
              "name": "Accept-Encoding",
              "value": "gzip, deflate"
            },
            {
              "name": "Accept-Language",
              "value": "zh-CN,zh;q=0.9,en-US;q=0.8,en;q=0.7"
            },
            {
              "name": "Cookie",
              "value": "JSESSIONID=B22B7129364056051CE6A5BF600D4E5D"
            }
          ],
          "queryString": [],
          "cookies": [
            {
              "name": "JSESSIONID",
              "value": "B22B7129364056051CE6A5BF600D4E5D",
              "expires": null,
              "httpOnly": false,
              "secure": false
            }
          ],
          "headersSize": 500,
          "bodySize": 0
        },
        "response": {
          "status": 200,
          "statusText": "OK",
          "httpVersion": "HTTP/1.1",
          "headers": [
            {
              "name": "Server",
              "value": "Apache-Coyote/1.1"
            },
            {
              "name": "X-Content-Type-Options",
              "value": "nosniff"
            },
            {
              "name": "X-XSS-Protection",
              "value": "1; mode=block"
            },
            {
              "name": "Cache-Control",
              "value": "no-cache, no-store, max-age=0, must-revalidate"
            },
            {
              "name": "Pragma",
              "value": "no-cache"
            },
            {
              "name": "Expires",
              "value": "0"
            },
            {
              "name": "X-Frame-Options",
              "value": "DENY"
            },
            {
              "name": "Accept-Ranges",
              "value": "bytes"
            },
            {
              "name": "ETag",
              "value": "W/\"2507-1541038720000\""
            },
            {
              "name": "Last-Modified",
              "value": "Thu, 01 Nov 2018 02:18:40 GMT"
            },
            {
              "name": "Content-Type",
              "value": "image/png;charset=UTF-8"
            },
            {
              "name": "Content-Length",
              "value": "2507"
            },
            {
              "name": "Date",
              "value": "Fri, 04 Sep 2020 14:24:03 GMT"
            }
          ],
          "cookies": [],
          "content": {
            "size": 2507,
            "mimeType": "image/png",
            "compression": 0,
            "text": "iVBORw0KGgoAAAANSUhEUgAAAFQAAABUCAYAAAAcaxDBAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyFpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDE0IDc5LjE1MTQ4MSwgMjAxMy8wMy8xMy0xMjowOToxNSAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIChXaW5kb3dzKSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDoyQUI5QTA1QzUwMTUxMUU4QUJFNEJCRUM3MzVGODFEMCIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDoyQUI5QTA1RDUwMTUxMUU4QUJFNEJCRUM3MzVGODFEMCI+IDx4bXBNTTpEZXJpdmVkRnJvbSBzdFJlZjppbnN0YW5jZUlEPSJ4bXAuaWlkOjJBQjlBMDVBNTAxNTExRThBQkU0QkJFQzczNUY4MUQwIiBzdFJlZjpkb2N1bWVudElEPSJ4bXAuZGlkOjJBQjlBMDVCNTAxNTExRThBQkU0QkJFQzczNUY4MUQwIi8+IDwvcmRmOkRlc2NyaXB0aW9uPiA8L3JkZjpSREY+IDwveDp4bXBtZXRhPiA8P3hwYWNrZXQgZW5kPSJyIj8+1DBYRAAABkBJREFUeNrsXVuIG1UY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",
            "encoding": "base64"
          },
          "redirectURL": "",
          "headersSize": 424,
          "bodySize": 2507,
          "_transferSize": 2931,
          "_error": null
        },
        "serverIPAddress": "221.178.136.186",
        "startedDateTime": "2020-09-04T14:24:05.145Z",
        "time": 42.74000000077649,
        "timings": {
          "blocked": 4.198999999863561,
          "dns": -1,
          "ssl": -1,
          "connect": -1,
          "send": 0.42799999999999994,
          "wait": 36.57099999912176,
          "receive": 1.5420000017911661,
          "_blocked_queueing": 3.1159999998635612
        }
      }
    ]
  }
}
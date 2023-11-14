[Variables]
@include=#@#Style.inc
;@include2=#@#Languages\#language#.inc

[Fond]
Meter=Shape
MeterStyle=SFT
X=(1*#scale#)
Y=(1*#scale#)
Shape=Rectangle 0,0,(980*#scale#),(290*#scale#),#FPB1# | Extend Plus2
Shape2=Rectangle (5*#scale#),(5*#scale#),(970*#scale#),(280*#scale#),#FPB1# | Extend Plus3
Shape3=Rectangle (6*#scale#),(108*#scale#),(968*#scale#),(2*#scale#) | Extend Plus
Shape4=Rectangle (6*#scale#),(113*#scale#),(968*#scale#),(2*#scale#) | Extend Plus4
Plus=Fill Color #DA1# | StrokeWidth 0
Plus4=Fill Color #FBC# | StrokeWidth 0
Plus2=Fill color #FBP#,#alpha# | StrokeWidth 2 | Stroke Color #DA1#
Plus3=Fill color 0,0,0,1 | StrokeWidth 2 | Stroke Color #FBC#
UpdateDivider=-1
LeftMouseUpAction=[!SetVariable SCALE "(#SCALE#+0.2)"][!WriteKeyValue Variables SCALE "(#SCALE#+0.2)"][!Refresh]
MiddleMouseDownAction=[!SetVariable SCALE "(#SCALE#-0.2)"][!WriteKeyValue Variables SCALE "(#SCALE#-0.2)"][!Refresh]

[MTime]
Measure=TIME
Format=#TForm#

[STPI]
Y=(120*#scale#)
H=(50*#scale#)
W=(50*#scale#)
DynamicVariables=1
PreserveAspectRatio=1
AntiAlias=1
Group=Weather
UpdateDivider=-1

[STD]
H=(15*#scale#)
W=(160*#scale#)
Group=Weather
ClipString=1

[STD1]
Group=Weather

[天气预报]
Measure=Plugin
Plugin=WebParser.dll
UpdateRate=360
Url=http://www.nmc.cn/rest/weather?stationid=#WeatherCode#
RegExp=(?siU).*"city":"(.*)".*"publish_time":"(.*)".*"temperature":(.*),.*"humidity":(.*),"rain":(.*),.*"info":"(.*)","img":"(.*)","feelst":(.*)}.*"direct":"(.*)".*"power":"(.*)","speed":(.*).*"alert":"(.*)".*"issuecontent":"(.*)","fmeans":"(.*)".*"publish_time":"(.*)".*"date":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"date":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"date":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"forecasttime":"(.*)","aqi":(.*),.*"text":"(.*)".*
FinishAction=[!UpdateMeasureGroup Weather][!UpdateMeterGroup Weather]
ForceReload=1

;================================================================
[城市]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=1
[发布时间]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=2
[当前温度]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=3
[当前湿度]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=4
[当前降雨量]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=5
[当前天气]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=6
[当前天气图]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=7
[当前体感温度]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=8
[当前风向]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=9
[当前风力]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=10
[当前风速]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=11
[预警]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=12
Substitute='9999':"无"
RegexpSubstitute=1
[预警信息]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=13
Substitute='9999':"无"
RegexpSubstitute=1
[防范提示]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=14
Substitute='9999':"无"
RegexpSubstitute=1
;七天预报
[预报时间]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=15
[预报第一天]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=16
[day1天气]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=17
Substitute='9999':""
RegexpSubstitute=1
[day1温度]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=18
Substitute='9999':""
RegexpSubstitute=1
[day1风向]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=19
Substitute='9999':""
RegexpSubstitute=1
[day1风力]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=20
Substitute='9999':""
RegexpSubstitute=1
[night1天气]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=21
[night1温度]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=22
[night1风向]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=23
[night1风力]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=24
[预报第二天]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=25
[day2天气]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=26
[day2温度]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=27
[day2风向]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=28
[day2风力]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=29
[night2天气]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=30
[night2温度]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=31
[night2风向]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=32
[night2风力]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=33
[预报第三天]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=34
[day3天气]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=35
[day3温度]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=36
[day3风向]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=37
[day3风力]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=38
[night3天气]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=39
[night3温度]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=40
[night3风向]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=41
[night3风力]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=42
[空气质量发布时间]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=43
[空气质量数值]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=44
[空气质量]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[天气预报]
StringIndex=45

;================================================================

[日出日落]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=360
Url=http://www.weather.com.cn/weather1d/#CityCode#.shtml
RegExp="(?siU).*<span>(.{8})</span>.*<span>(.{8})</span>.*

;检测日出
[日出]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[日出日落]
StringIndex=1
;检测日落
[日落]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[日出日落]
StringIndex=2

;================================================================
[生活指数]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=360
Url=http://www.weather.com.cn/weather1dn/#CityCode#.shtml
RegExp=(?siU).*<h1>.*?<span>(.*)</span></h1>.*<h2>(.*)</h2>.*<h2>(.*)</h2>.*<h2>(.*)</h2>.*<h2>(.*)</h2>.*<h2>(.*)</h2>.*<h2>(.*)</h2>.*<em>(.*)</em>.*<dd>(.*)</dd>.*<em>(.*)</em>.*<i(.*)></i><i(.*)></i><i(.*)></i><i(.*)></i><i(.*)></i>.*<dd>(.*)</dd>.*<em>(.*)</em>.*<dd>(.*)</dd>.*<em>(.*)</em>.*<dd>(.*)</dd>.*<em>(.*)</em>.*<dd>(.*)</dd>.*<em>(.*)</em>.*<dd>(.*)</dd>.*
Debug=1
[更新时间]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[生活指数]
StringIndex=1
;污染指数
[污染指数]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[生活指数]
StringIndex=23
;污染提醒
[污染提醒]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[生活指数]
StringIndex=24

;穿衣指数
[穿衣指数]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[生活指数]
StringIndex=19
;穿衣提醒
[穿衣提醒]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[生活指数]
StringIndex=20

;紫外线指数
[紫外线指数]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[生活指数]
StringIndex=8
;紫外线提醒
[紫外线提醒]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[生活指数]
StringIndex=9



;================================================================

[车辆限行]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=360
Url=http://d1.weather.com.cn/sk_2d/#CityCode#.html
RegExp=(?siU).*"limitnumber":"(.*)"

[限行]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[车辆限行]
StringIndex=1

;==============================当天天气设置==================================
[作者]
Meter=String
MeterStyle=Style1|STD1
Text=#Author#

[TTime]
Meter=String
MeasureName=MTime
MeterStyle=Style2|STD1
Text=%1#CRLF#[当前天气]
UpdateDivider=-1

[实时天气]


[实时温度]
MeasureName=当前温度
Meter=String
MeterStyle= Style3|STD1
Text=[预报第一天]（今天）#CRLF#[day1天气]转[night1天气]#CRLF#[day1温度]~[night1温度]℃



[实时天气图]
MeasureName=当前天气图
Meter=String
MeterStyle=Style4|STD1
Text=空气质量：[空气质量数值]—[空气质量]#CRLF#污染指数：[污染指数]#CRLF#污染提醒：[污染提醒]

[实时城市]
MeasureName=城市
Meter=STRING
MeterStyle= Style5|STD1
Text=当前风向：[当前风向]—[当前风力]#CRLF#体感温度：[当前体感温度]℃#CRLF#空气湿度：[当前湿度]%

[今日预警信息]
MeasureName=预警信息
Meter=String
MeterStyle=Style6|STD1
Text=预警：[预警] | 发布时间:[发布时间]发布#CRLF#预警信息：[预警信息]

；---------------------------未来3天天气-------------------------------------
[day1天气图]
MeasureName=day1天气图
Meter=String
MeterStyle=Style8|STD1
Text=Day1#CRLF#[day1天气]转[night1天气]#CRLF#[day1温度]~[night1温度]℃
X=30

[day2天气图]
MeasureName=day2天气图
Meter=String
MeterStyle=Style8|STD1
Text=Day2#CRLF#[day2天气]转[night2天气]#CRLF#[day2温度]~[night2温度]℃
X=160

[day3天气图]
MeasureName=day3天气图
Meter=String
MeterStyle=Style8|STD1
Text=Day3#CRLF#[day3天气]转[night3天气]#CRLF#[day3温度]~[night3温度]℃
X=290

[紫外线和穿衣指数]
MeasureName=紫外线和穿衣指数
Meter=String
MeterStyle=Style7|STD1
Text=紫外线指数：[紫外线指数]#CRLF#紫外线提醒：[紫外线提醒]#CRLF#穿衣指数：[穿衣指数]#CRLF#穿衣提醒：[穿衣提醒]

;日出日落
[日升月落]
MeasureName=日出
MeasureName2=日落
Meter=STRING
Text=%1#CRLF#%2
MeterStyle=Style7|STD1
Y=230
;================================================================

[Refresh]
Meter=STRING
X=210
Y=260
FontColor=#Color#
FontSize=7
FontFace=#Font#
StringAlign=CENTER
Prefix="Refresh"
AntiAlias=1
Hidden=0
MouseOverAction=!Execute [!RainmeterShowMeter MouseOverRefresh][!RainmeterRedraw]
MouseLeaveAction=!Execute [!RainmeterHideMeter MouseOverRefresh][!RainmeterRedraw]
LeftMouseDownAction=!Execute [!RainmeterRefresh][!RainmeterRedraw]
LeftMouseUpAction=!Execute [!RainmeterRedraw]
ToolTipText=刷新

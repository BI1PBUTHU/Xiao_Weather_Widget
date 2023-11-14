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

[����Ԥ��]
Measure=Plugin
Plugin=WebParser.dll
UpdateRate=360
Url=http://www.nmc.cn/rest/weather?stationid=#WeatherCode#
RegExp=(?siU).*"city":"(.*)".*"publish_time":"(.*)".*"temperature":(.*),.*"humidity":(.*),"rain":(.*),.*"info":"(.*)","img":"(.*)","feelst":(.*)}.*"direct":"(.*)".*"power":"(.*)","speed":(.*).*"alert":"(.*)".*"issuecontent":"(.*)","fmeans":"(.*)".*"publish_time":"(.*)".*"date":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"date":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"date":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"info":"(.*)".*"temperature":"(.*)".*"direct":"(.*)","power":"(.*)".*"forecasttime":"(.*)","aqi":(.*),.*"text":"(.*)".*
FinishAction=[!UpdateMeasureGroup Weather][!UpdateMeterGroup Weather]
ForceReload=1

;================================================================
[����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=1
[����ʱ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=2
[��ǰ�¶�]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=3
[��ǰʪ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=4
[��ǰ������]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=5
[��ǰ����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=6
[��ǰ����ͼ]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=7
[��ǰ����¶�]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=8
[��ǰ����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=9
[��ǰ����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=10
[��ǰ����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=11
[Ԥ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=12
Substitute='9999':"��"
RegexpSubstitute=1
[Ԥ����Ϣ]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=13
Substitute='9999':"��"
RegexpSubstitute=1
[������ʾ]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=14
Substitute='9999':"��"
RegexpSubstitute=1
;����Ԥ��
[Ԥ��ʱ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=15
[Ԥ����һ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=16
[day1����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=17
Substitute='9999':""
RegexpSubstitute=1
[day1�¶�]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=18
Substitute='9999':""
RegexpSubstitute=1
[day1����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=19
Substitute='9999':""
RegexpSubstitute=1
[day1����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=20
Substitute='9999':""
RegexpSubstitute=1
[night1����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=21
[night1�¶�]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=22
[night1����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=23
[night1����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=24
[Ԥ���ڶ���]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=25
[day2����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=26
[day2�¶�]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=27
[day2����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=28
[day2����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=29
[night2����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=30
[night2�¶�]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=31
[night2����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=32
[night2����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=33
[Ԥ��������]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=34
[day3����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=35
[day3�¶�]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=36
[day3����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=37
[day3����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=38
[night3����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=39
[night3�¶�]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=40
[night3����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=41
[night3����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=42
[������������ʱ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=43
[����������ֵ]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=44
[��������]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����Ԥ��]
StringIndex=45

;================================================================

[�ճ�����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=360
Url=http://www.weather.com.cn/weather1d/#CityCode#.shtml
RegExp="(?siU).*<span>(.{8})</span>.*<span>(.{8})</span>.*

;����ճ�
[�ճ�]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[�ճ�����]
StringIndex=1
;�������
[����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[�ճ�����]
StringIndex=2

;================================================================
[����ָ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=360
Url=http://www.weather.com.cn/weather1dn/#CityCode#.shtml
RegExp=(?siU).*<h1>.*?<span>(.*)</span></h1>.*<h2>(.*)</h2>.*<h2>(.*)</h2>.*<h2>(.*)</h2>.*<h2>(.*)</h2>.*<h2>(.*)</h2>.*<h2>(.*)</h2>.*<em>(.*)</em>.*<dd>(.*)</dd>.*<em>(.*)</em>.*<i(.*)></i><i(.*)></i><i(.*)></i><i(.*)></i><i(.*)></i>.*<dd>(.*)</dd>.*<em>(.*)</em>.*<dd>(.*)</dd>.*<em>(.*)</em>.*<dd>(.*)</dd>.*<em>(.*)</em>.*<dd>(.*)</dd>.*<em>(.*)</em>.*<dd>(.*)</dd>.*
Debug=1
[����ʱ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����ָ��]
StringIndex=1
;��Ⱦָ��
[��Ⱦָ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����ָ��]
StringIndex=23
;��Ⱦ����
[��Ⱦ����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����ָ��]
StringIndex=24

;����ָ��
[����ָ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����ָ��]
StringIndex=19
;��������
[��������]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����ָ��]
StringIndex=20

;������ָ��
[������ָ��]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����ָ��]
StringIndex=8
;����������
[����������]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[����ָ��]
StringIndex=9



;================================================================

[��������]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=360
Url=http://d1.weather.com.cn/sk_2d/#CityCode#.html
RegExp=(?siU).*"limitnumber":"(.*)"

[����]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[��������]
StringIndex=1

;==============================������������==================================
[����]
Meter=String
MeterStyle=Style1|STD1
Text=#Author#

[TTime]
Meter=String
MeasureName=MTime
MeterStyle=Style2|STD1
Text=%1#CRLF#[��ǰ����]
UpdateDivider=1

[ʵʱ�¶�]
MeasureName=��ǰ�¶�
Meter=String
MeterStyle= Style3|STD1
Text=[Ԥ����һ��]�����죩#CRLF#[day1����]ת[night1����]#CRLF#[day1�¶�]~[night1�¶�]��



[ʵʱ����ͼ]
MeasureName=��ǰ����ͼ
Meter=String
MeterStyle=Style4|STD1
Text=����������[����������ֵ]��[��������]#CRLF#��Ⱦָ����[��Ⱦָ��]#CRLF#��Ⱦ���ѣ�[��Ⱦ����]

[ʵʱ����]
MeasureName=����
Meter=STRING
MeterStyle= Style5|STD1
Text=��ǰ����[��ǰ����]��[��ǰ����]#CRLF#����¶ȣ�[��ǰ����¶�]��#CRLF#����ʪ�ȣ�[��ǰʪ��]%

[����Ԥ����Ϣ]
MeasureName=Ԥ����Ϣ
Meter=String
MeterStyle=Style6|STD1
Text=Ԥ����[Ԥ��] | ����ʱ��:[����ʱ��]����#CRLF#Ԥ����Ϣ��[Ԥ����Ϣ]

��---------------------------δ��3������-------------------------------------
[day1����ͼ]
MeasureName=day1����ͼ
Meter=String
MeterStyle=Style8|STD1
Text=Day1#CRLF#[day1����]ת[night1����]#CRLF#[day1�¶�]~[night1�¶�]��
X=30

[day2����ͼ]
MeasureName=day2����ͼ
Meter=String
MeterStyle=Style8|STD1
Text=Day2#CRLF#[day2����]ת[night2����]#CRLF#[day2�¶�]~[night2�¶�]��
X=160

[day3����ͼ]
MeasureName=day3����ͼ
Meter=String
MeterStyle=Style8|STD1
Text=Day3#CRLF#[day3����]ת[night3����]#CRLF#[day3�¶�]~[night3�¶�]��
X=290

[�����ߺʹ���ָ��]
MeasureName=�����ߺʹ���ָ��
Meter=String
MeterStyle=Style7|STD1
Text=������ָ����[������ָ��]#CRLF#���������ѣ�[����������]#CRLF#����ָ����[����ָ��]#CRLF#�������ѣ�[��������]

;�ճ�����
[��������]
MeasureName=�ճ�
MeasureName2=����
Meter=STRING
Text=%1#CRLF#%2
MeterStyle=Style7|STD1
Y=230
;================================================================

[Refresh]
Meter=STRING
X=900
Y=250
FontColor=#Color#
FontSize=12
FontFace=#Font#
StringAlign=CENTER
Prefix="Refresh"
AntiAlias=1
Hidden=0
MouseOverAction=!Execute [!RainmeterShowMeter MouseOverRefresh][!RainmeterRedraw]
MouseLeaveAction=!Execute [!RainmeterHideMeter MouseOverRefresh][!RainmeterRedraw]
LeftMouseDownAction=!Execute [!RainmeterRefresh][!RainmeterRedraw]
LeftMouseUpAction=!Execute [!RainmeterRedraw]
ToolTipText=ˢ��
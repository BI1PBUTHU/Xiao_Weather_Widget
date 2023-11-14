
[SGPU3]
DynamicVariables=1
X=317
Y=r
StringAlign=Center
MouseActionCursorName=Pen

[Weat]
Meter=String
MeterStyle=Style|STTitre|PG4
Text=#WEATH# (#T16P1#)
Y=70
LeftMouseUpAction=[http://www.nmc.cn/]
TooltipText=#RCOY1#

[Weat1]
Meter=String
MeterStyle=Style|PG4
Text=#T15P1#
X=180
Y=100

[TextW]
Meter=String
MeterStyle=Style|SGPU3|PG4
Text=#WeatherCode#
LeftMouseUpAction=!CommandMeasure "MeasureInput1 ExecuteBatch 1"
Tooltiptext=#op16#

[MeasureInput1]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG4
FontFace=Calibri
FontSize=8
StringAlign=Center
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=295
Y=100
H=10
W=60
DefaultValue="54511"
Command1=[!SetVariable WeatherCode "$UserInput$"][!WriteKeyValue Variables WeatherCode "[MeasureInput1]"][!UpdateMeter TextW][!WriteKeyValue Variables WeatherCode [MeasureInput1] "#@#Style.inc"]#MTAJR6#

[Weat2]
Meter=String
MeterStyle=Style|STTitre|PG4
Text=#City# (#T31P1#)
Y=150
LeftMouseUpAction=[http://www.weather.com.cn/]
TooltipText=#RCOY1#

[Weat3]
Meter=String
MeterStyle=Style|PG4
Text=#T30P1#
X=180
Y=200

[TextW2]
Meter=String
MeterStyle=Style|SGPU3|PG4
Text=#CityCode#
LeftMouseUpAction=!CommandMeasure "MeasureInput2 ExecuteBatch 1"
Tooltiptext=#op16#

[MeasureInput2]
Measure=Plugin
Plugin=InputText.dll
MeterStyle=Style|PG4
FontFace=Calibri
FontSize=8
StringAlign=Center
FontColor=255,255,255
SolidColor=0,108,255
FocusDismiss=1
DynamicVariables=1
AntiAlias=1
X=295
Y=400
H=10
W=60
DefaultValue="101010100"
Command2=[!SetVariable CityCode "$UserInput$"][!WriteKeyValue Variables CityCode "[MeasureInput2]"][!UpdateMeter TextW][!WriteKeyValue Variables CityCode [MeasureInput2] "#@#Style.inc"]#MTAJR6#

[Unit]
Meter=String
MeterStyle=Style|STTI|PG4
Text=#T17P1#
X=400
Y=100
Tooltiptext=#T18P1#
UpdateDivider=-1

[CurUnit]
Meter=String
MeterStyle=Style|PG4
Text=#Unit# (#OACT#)
X=50r
Y=r
ToolTipType=1
ToolTipText=#OACT#

[M]
Meter=String
MeterStyle=Style|PG4
Text=M
X=125r
Y=r
LeftMouseUpAction=[!WriteKeyValue "Variables" "Unit" "M" "#@#Style.inc"][!WriteKeyValue "Variables" "UNV" "C" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Weather"][!SetOption CurUnit Text "M (#OACT#)"][!UpdateMeter CurUnit][!Redraw]
ToolTipTitle=M (metric)
ToolTipType=1
ToolTipText=Celzius
UpdateDivider=-1

[F]
Meter=String
MeterStyle=Style|PG4
Text=F
X=45r
Y=r
LeftMouseUpAction=[!WriteKeyValue "Variables" "Unit" "F" "#@#Style.inc"][!WriteKeyValue "Variables" "UNV" "F" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\Weather"][!SetOption CurUnit Text "F (#OACT#)"][!UpdateMeter CurUnit][!Redraw]
ToolTipTitle=F
ToolTipText=Fahrenheits
UpdateDivider=-1
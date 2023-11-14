[Style]
FontColor=255,255,255
FontFace=Calibri
FontSize=14
StringStyle=Normal
StringEffect=Shadow
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Left
ToolTipType=1

[Style1]
FontColor=#FBB#
FontFace=#eft2#
FontSize=(16*#SCALE#)
FontWeight=#eft1#
StringEffect=#eft#
SolidColor=0,0,0,1
AntiAlias=1
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
StringAlign=Left
X=30
Y=15
ToolTipType=1
Dynamicvariables=1
UpdateDivider=-1

[Style2]
FontColor=#FBB#
FontFace=#eft2#
FontSize=(16*#SCALE#)
FontWeight=#eft1#
StringEffect=#eft#
SolidColor=0,0,0,1
AntiAlias=1
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
StringAlign=Left
X=30
Y=50
ToolTipType=1
Dynamicvariables=1
UpdateDivider=-1

[Style3]
FontColor=#FBB#
FontFace=#eft2#
FontSize=(16*#SCALE#)
FontWeight=#eft1#
StringEffect=#eft#
SolidColor=0,0,0,1
AntiAlias=1
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
StringAlign=Left
X=140
Y=15
ToolTipType=1
Dynamicvariables=1
UpdateDivider=-1


[Style4]
FontColor=#FBB#
FontFace=#eft2#
FontSize=(16*#SCALE#)
FontWeight=#eft1#
StringEffect=#eft#
SolidColor=0,0,0,1
AntiAlias=1
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
StringAlign=Left
X=380
Y=15
UpdateDivider=-1
Dynamicvariables=1
ToolTipType=1
TransformationMatrix=#Scale#;0;0;#Scale#;((1-#Scale#)*([#CURRENTSECTION#:X]));((1-#Scale#)*([#CURRENTSECTION#:Y]))

[Style5]
FontColor=#FBB#
FontFace=#eft2#
FontSize=(16*#SCALE#)
FontWeight=#eft1#
StringEffect=#eft#
SolidColor=0,0,0,1
AntiAlias=1
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
StringAlign=Right
X=960
Y=12
ToolTipType=1
Dynamicvariables=1
UpdateDivider=-1

[Style6]
FontColor=#FBB#
FontFace=#eft2#
FontSize=(16*#SCALE#)
FontWeight=#eft1#
StringEffect=#eft#
SolidColor=0,0,0,1
AntiAlias=1
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
StringAlign=Left
X=30
Y=120
ToolTipType=1
Dynamicvariables=1
UpdateDivider=-1

[Style7]
FontColor=#FBB#
FontFace=#eft2#
FontSize=(16*#SCALE#)
FontWeight=#eft1#
StringEffect=#eft#
SolidColor=0,0,0,1
AntiAlias=1
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
X=500
Y=120
StringAlign=Left
ToolTipType=1
Dynamicvariables=1
UpdateDivider=-1

[Style8]
FontColor=#FBB#
FontFace=#eft2#
FontSize=(16*#SCALE#)
FontWeight=#eft1#
StringEffect=#eft#
SolidColor=0,0,0,1
AntiAlias=1
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
Y=190
StringAlign=Left
ToolTipType=1
Dynamicvariables=1
UpdateDivider=-1

[StyleC]
FontColor=#FBB#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Left
ToolTipType=1
UpdateDivider=-1

[StyleF]
FontColor=255,255,255
FontFace=Calibri
FontSize=9
StringStyle=Normal
StringEffect=Shadow
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Left
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor #DA1#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[SFT3]
X=2
Y=22
Shape=Rectangle 0,0,180,8,#FPB1# | Extend Plus
Plus=Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #FBC#,#alpha#
UpdateDivider=-1

[PB]
X=6
Y=25
H=2
W=171
MeasureName=#sm3#
BarColor=#FBC#
SolidColor=#FBC#,40
BarOrientation=Horizontal
AntiAlias=1
UpdateDivider=-1

[BRG]
Shape=Rectangle 0,0,10,10,20 | StrokeWidth 1 | Stroke Color #DA1# | Fill RadialGradient MyGradient | Extend Scale1
MyGradient=2,2 | #FBB# ; 0.0 | #DA1# ; 1.0
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# Scale1 "Scale 1.2,1.2,0,20"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Scale1 ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Scale1=Scale 1,1,0,0
UpdateDivider=-1

[BRG1]
X=20r
Y=6
Shape=Rectangle 0,0,10,10,20 | StrokeWidth 1 | Stroke Color #DA1# | Fill RadialGradient MyGradient | Extend Scale1
MyGradient=2,2 | #FBB# ; 0.0 | #DA1# ; 1.0
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# Scale1 "Scale 1.2,1.2,0,20"][!SetOption #CURRENTSECTION# Y "9"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Scale1 ""][!SetOption #CURRENTSECTION# Y ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Scale1=Scale 1,1,0,0
UpdateDivider=-1

[BRG2]
X=20r
Y=35
Shape=Rectangle 0,0,10,10,20 | StrokeWidth 1 | Stroke Color #DA1# | Fill RadialGradient MyGradient | Extend Scale1
MyGradient=2,2 | #FBB# ; 0.0 | #DA1# ; 1.0
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# Scale1 "Scale 1.2,1.2,0,20"][!SetOption #CURRENTSECTION# Y "38"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Scale1 ""][!SetOption #CURRENTSECTION# Y ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Scale1=Scale 1,1,0,0
UpdateDivider=-1

[Variables]
Author=BI1PBU
FPB1=4
MyColor=0,230,233
MyAlpha=255
eft=shadow
eft1=600
eft2=Clockopia
eft3=9
eft4=None
eft5=Sentence
FBB=252,252,252
DA1=161,0,253
FBC=0,128,192
FBP=0,0,0
FBD=205,211,212
alpha=50
Player=Winamp
SlideshowFolder=#@#Preview
SlideShowUpdate=20
CorT=250
MEMTO=2048
VITM=800
VITCL=800
TForm=%R:%S
;Weather
WeatherCode=54511
;City
CityCode=101010100
Unit=M
;Do not change this value
UNV=C
MTAJR1=[!Refreshgroup BI1PBU]
MTAJR6=[!Refresh "#ROOTCONFIG#\Weather"]
language=English
Locale=zh_CN

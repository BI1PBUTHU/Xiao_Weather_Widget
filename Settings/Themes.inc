[Variables]

[PG5]
Group=G5
Hidden=1
UpdateDivider=-1

[Title5]
Meter=String
MeterStyle=Style|STPLT
Text=Themes
Y=220
LeftMouseUpAction=[!ShowMeterGroup G5][!HideMeterGroup G1][!HideMeterGroup G2][!HideMeterGroup G3][!HideMeterGroup G4][!HideMeterGroup G6][!Redraw]

[FondSty]
X=90r
Y=r
H=6
W=60
Tooltiptext=#MTHes#
ToolTipType=1

[Forme]
X=140r
Y=r
Plus=Fill RadialGradient Gradient1 | StrokeWidth 1 | Stroke LinearGradient Gradient
Gradient=90 | #FBB#,#alpha# ; 0.0 | #FBC#,#alpha# ; 1.0
Gradient1=0,4,100,25 | #FBB#,#alpha# ; 0.0 | #FBP#,#alpha# ; 1.0
Plus2=Fill Color #FBC# | StrokeWidth 2 | Stroke Color 0,0,0
UpdateDivider=-1

[Shape1]
Meter=Shape
MeterStyle=Forme|PG5
X=185
Y=70
Shape=Rectangle 0,0,111,23,0 | Extend Plus2
Shape2=Rectangle 3,3,105,17,0 | Extend Plus
LeftMouseUpAction=[#VVS# "FPB1" "0" #@#Style.inc]#MTAJR1#

[Shape2]
Meter=Shape
MeterStyle=Forme|PG5
Shape=Rectangle 0,0,111,23,4 | Extend Plus2
Shape2=Rectangle 3,3,105,17,4 | Extend Plus
LeftMouseUpAction=[#VVS# "FPB1" "4" #@#Style.inc]#MTAJR1#


[Shape3]
Meter=Shape
MeterStyle=Forme|PG5
Shape=Rectangle 0,0,111,23,8 | Extend Plus2
Shape2=Rectangle 3,3,105,17,8 | Extend Plus
LeftMouseUpAction=[#VVS# "FPB1" "8" #@#Style.inc]#MTAJR1#

[Shape4]
Meter=Shape
MeterStyle=Forme|PG5
Shape=Rectangle 0,0,111,23,12 | Extend Plus2
Shape2=Rectangle 3,3,105,17,12 | Extend Plus
LeftMouseUpAction=[#VVS# "FPB1" "12" #@#Style.inc]#MTAJR1#



[Alphatitre]
Meter=String
MeterStyle=Style|PG5
Text=#T3P16#
X=180
Y=300

[CurAl]
Meter=String
MeterStyle=Style|PG5
Text=#alpha#
X=80r
Y=r

[CurAl1]
Meter=String
MeterStyle=Style|PG5
Text=(#OACT#)
X=20r
Y=r

[AlphaSt]
X=27r
Y=300
Group=G5
Hidden=1
UpdateDivider=-1
Tooltiptitle=#T3P16#

[Al0]
Meter=String
MeterStyle=Style|AlphaSt
Text=255
X=450
LeftMouseUpAction=[#VVS# "alpha" "255" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "255"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=0%

[Al10]
Meter=String
MeterStyle=Style|AlphaSt
Text=229
LeftMouseUpAction=[#VVS# "alpha" "229" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "229"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=10%

[Al20]
Meter=String
MeterStyle=Style|AlphaSt
Text=203
LeftMouseUpAction=[#VVS# "alpha" "203" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "203"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=20%

[Al30]
Meter=String
MeterStyle=Style|AlphaSt
Text=178
LeftMouseUpAction=[#VVS# "alpha" "178" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "178"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=30%

[Al40]
Meter=String
MeterStyle=Style|AlphaSt
Text=152
LeftMouseUpAction=[#VVS# "alpha" "152" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "152"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=40%

[Al50]
Meter=String
MeterStyle=Style|AlphaSt
Text=127
LeftMouseUpAction=[#VVS# "alpha" "127" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "127"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=50%

[Al60]
Meter=String
MeterStyle=Style|AlphaSt
Text=101
LeftMouseUpAction=[#VVS# "alpha" "101" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "101"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=60%

[Al70]
Meter=String
MeterStyle=Style|AlphaSt
Text=76
LeftMouseUpAction=[#VVS# "alpha" "76" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "76"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=70%

[Al80]
Meter=String
MeterStyle=Style|AlphaSt
Text=50
LeftMouseUpAction=[#VVS# "alpha" "50" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "50"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=80%

[Al90]
Meter=String
MeterStyle=Style|AlphaSt
Text=25
LeftMouseUpAction=[#VVS# "alpha" "25" #@#Style.inc]#MTAJR1#[!SetOption CurAl Text "25"][!UpdateMeter CurAl][!Redraw]
Tooltiptext=90%
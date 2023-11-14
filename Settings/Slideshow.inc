
[Slids]
Meter=String
MeterStyle=Style|STTitre|PG4
Text=Slideshow
Y=200
LeftMouseUpAction=!ActivateConfig "#ROOTCONFIG#\Settings\Slideshow" "Slideshow.ini"
Text=Select
Tooltiptitle=#T3P1#
Tooltiptext=#Op16#
DynamicVariables=1

[CurrSli]
Meter=String
MeterStyle=Style|PG4
X=80r
Y=2r
Text=#SlideShowUpdate# (#OACT#)
Tooltiptext=#MIAS#

[STSL]
X=33r
Y=r

[Del1]
Meter=String
MeterStyle=Style|STSL|PG4
Text=10
X=140r
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "10" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "10 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]

[Del2]
Meter=String
MeterStyle=Style|PG4|STSL
Text=20
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "20" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "20 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]

[Del3]
Meter=String
MeterStyle=Style|PG4|STSL
Text=30
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "30" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "30 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]

[Del4]
Meter=String
MeterStyle=Style|PG4|STSL
Text=40
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "40" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "40 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]

[Del5]
Meter=String
MeterStyle=Style|PG4|STSL
Text=50
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "50" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "50 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]

[Del6]
Meter=String
MeterStyle=Style|PG4|STSL
Text=60
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "60" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "60 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]

[Del7]
Meter=String
MeterStyle=Style|PG4|STSL
Text=70
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "70" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "70 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]

[Del8]
Meter=String
MeterStyle=Style|PG4|STSL
Text=80
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "80" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "80 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]

[Del9]
Meter=String
MeterStyle=Style|PG4|STSL
Text=90
LeftMouseUpAction=[#VVS# "SlideShowUpdate" "90" "#@#Style.inc"]#MTAJR5#[!SetOption CurrSli Text "90 (#OACT#)"][!UpdateMeter CurrSli][!Redraw]
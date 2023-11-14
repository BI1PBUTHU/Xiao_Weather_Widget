
[SGPU2]
DynamicVariables=1
X=90r
Y=r
StringAlign=Center
MouseActionCursorName=Pen

[GPUTe]
Meter=String
MeterStyle=Style|STTitre|PG4
Text=GPU
Y=250

[GPU]
Meter=String
MeterStyle=Style|PG4
Text=GPU speed
TooltipText=#GPUSD#
X=180
Y=280

[GPUT]
Meter=String
MeterStyle=Style|SGPU2|PG4
Text=#VITM#
LeftMouseUpAction=!CommandMeasure "MeasureInput3 ExecuteBatch 1"
Tooltiptext=#Op16#

[MeasureInput3]
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
X=250
Y=280
H=10
W=31
DefaultValue="800"
Command1=[!SetVariable VITM "$UserInput$"][!WriteKeyValue Variables VITM "[MeasureInput3]"][!UpdateMeter GPUT][!WriteKeyValue Variables VITM [MeasureInput3] "#@#Style.inc"]#MTAJR7#

[Mem]
Meter=String
MeterStyle=Style|PG4
Text=Memory size
TooltipText=#T38P1#
X=90r
Y=r

[Text33]
Meter=String
MeterStyle=Style|SGPU2|PG4
Text=#MEMTO#
LeftMouseUpAction=!CommandMeasure "MeasureInput4 ExecuteBatch 1"
Tooltiptext=#Op16#

[MeasureInput4]
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
X=430
Y=280
H=10
W=31
DefaultValue="2048"
Command1=[!SetVariable MEMTO "$UserInput$"][!WriteKeyValue Variables MEMTO "[MeasureInput4]"][!UpdateMeter Text33][!WriteKeyValue Variables MEMTO [MeasureInput4] "#@#Style.inc"]#MTAJR7#

[MemVit]
Meter=String
MeterStyle=Style|PG4
Text=Memory speed
TooltipText=#T36P1#
X=110r
Y=r

[Text34]
Meter=String
MeterStyle=Style|SGPU2|PG4
Text=#VITCL#
X=110r
LeftMouseUpAction=!CommandMeasure "MeasureInput5 ExecuteBatch 1"
Tooltiptext=#Op16#

[MeasureInput5]
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
X=650
Y=280
H=10
W=31
DefaultValue="800"
Command1=[!SetVariable VITCL "$UserInput$"][!WriteKeyValue Variables VITCL "[MeasureInput5]"][!UpdateMeter Text34][!WriteKeyValue Variables VITCL [MeasureInput5] "#@#Style.inc"]#MTAJR7#

[Player]
Meter=String
MeterStyle=Style|STTitre|PG1
Text=#Playr#
Y=110

[Cur]
Meter=String
MeterStyle=Style|PG1
Text=#player# (#OACT#)
X=85r
Y=2r

[STPla]
X=65r
Y=140
Group=G1
Hidden=0
UpdateDivider=-1

[Winamp]
X=180
Meter=String
MeterStyle=Style|STPla
Text=Winamp
LeftMouseUpAction=[#VVS# "Player" "Winamp" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\AllInOne"][!SetOption Cur Text "Winamp (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=Winamp Player

[WMP]
Meter=String
MeterStyle=Style|STPla
Text=WMP
LeftMouseUpAction=[#VVS# "Player" "WMP" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\AllInOne"][!SetOption Cur Text "WMP (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=Windows Media Player

[Monkey]
Meter=String
MeterStyle=Style|STPla
Text=Monkey
LeftMouseUpAction=[#VVS# "Player" "MediaMonkey" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\AllInOne"][!SetOption Cur Text "MediaMonkey (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=MediaMonkey

[ITunes]
Meter=String
MeterStyle=Style|STPla
Text=ITunes
LeftMouseUpAction=[#VVS# "Player" "iTunes" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\AllInOne"][!SetOption Cur Text "iTunes (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=iTunes Player

[CAD]
Meter=String
MeterStyle=Style|STPla
Text=CAD
LeftMouseUpAction=[#VVS# "Player" "CAD" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\AllInOne"][!SetOption Cur Text "CAD (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipTitle=CAD - (needs plugins) for Foobar2000, J. River Media Center, Media Jukebox)
ToolTipText=Foobar2000 (foo_cad plugin), #CRLF#J. River Media Jukebox (intcad plugin), #CRLF#J. River Media Center (intcad plugin), #CRLF#MusicBee...

[AIMP]
Meter=String
MeterStyle=Style|STPla
Text=AIMP
LeftMouseUpAction=[#VVS# "Player" "AIMP" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\AllInOne"][!SetOption Cur Text "AIMP (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=AIMP Player

[Spotify]
Meter=String
MeterStyle=Style|STPla
Text=Spotify
LeftMouseUpAction=[#VVS# "Player" "Spotify" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\AllInOne"][!SetOption Cur Text "Spotify (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=Spotify 

[WLM]
Meter=String
MeterStyle=Style|STPla
Text=WLM
LeftMouseUpAction=[#VVS# "Player" "WLM" "#@#Style.inc"][!Refresh "#ROOTCONFIG#\AllInOne"][!SetOption Cur Text "WLM (#OACT#)"][!UpdateMeter Cur][!Redraw]
ToolTipText=Last.fm, OpenPandora, Zune...

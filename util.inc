'##########################################################################
'
' common subroutines and functions
'
'##########################################################################

  declare function Util.Trim$(src$)[200]
  declare function Util.Min(a%,b%)
  declare function Util.Max(a%,b%)
  declare sub Util.errlog(prefix$,werr,status%)
  declare function Util.TruncateStr$(src$,iniPos%,maxlen%)[200]
  declare function Util.PadLeftStr$(src$,maxlen%)[200]
  declare function Util.StrCharIndex%(src$, byref idx%())
  declare function Util.IsCJK%(ch$)
  declare function Util.GetPageInfo%(byref src$, byref offset%, byref size%)
  declare function Util.ParseListData%(byref src$, byref lines$())
  declare function Util.ParseListTabData%(byref src$, byref meta$, byref ids$(), idOffset%, byref names$(), byref codes$())
  declare function Util.ParseListTabData2%(byref src$, byref meta$, byref ids$(), byref names$(), byref quantities%(), byref hasEnough%())
  declare function Util.GetSeconds%(startTime$, endTime$)
  declare function Util.Split%(byref src$, byref secs$(), d$)
  declare sub Util.ParseLayout(byref ret$,byref layout$(),byref layoutvalues$(),byref layoutcnt%,byref labels$(),byref fieldkeys$(),byref fieldvalues$(),byref types$(), byref autosubmit$(),byref fieldcnt%,byref keys$(),byref values$(),byref cnt%,byref autofocus$,byref errmsg$,byref refreshscreen$)
      

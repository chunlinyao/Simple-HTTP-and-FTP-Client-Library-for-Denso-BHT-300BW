'##########################################################################
'
' screen utils
'
'##########################################################################

  declare sub Screen.Init
  declare sub Screen.Footer
  declare sub Screen.FooterM1
  declare sub Screen.FooterYesNo
  declare sub Screen.HeaderUDLR(canUp%,canDown%)
  declare sub Screen.FooterInputOK
  declare function Screen.Field%(label$, value$, type$, rev%)
  declare sub Screen.Header(title$)
  declare sub Screen.H1(title$)
  declare sub Screen.P(title$)
  declare sub Screen.Span(title$)
  declare sub Screen.Color(c&,bg&)
  declare sub Screen.ShowError(byref msg$)

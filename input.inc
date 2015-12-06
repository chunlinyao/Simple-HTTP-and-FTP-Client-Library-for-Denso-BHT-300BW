'##########################################################################
'
' input utils
'
'##########################################################################

  declare sub Input.InputAnyKey
  declare function Input.InputYesNo$[1]
  declare function Input.InputUDLR$[1]
  declare function Input.Input$(max%,isnum%)
  declare function Input.SelectList%(byref lines$(),cnt%)
  declare function Input.SelectField%(byref fieldpos%(), byref labels$(), byref values$(), byref types$(),default%,cnt%)
 

'**************************************************************************
'***                                                                    ***
'***    Product Name    : BHT-BASIC3.5 Definition of Constants          ***
'***    File Name       : bhtdef.inc                                    ***
'***                                                                    ***
'***    Edition History                                                 ***
'***    Version   Date      Comments                                    ***
'***    --------  --------  -----------------------------------------   ***
'***    1.00.00   2001. 2   Original                                    ***
'***    1.01.00   2001. 6   .so added                                   ***
'***                        Display mode and character attributes       ***
'***                        added to I/O port                           ***
'***                        Tone data from &hC0 to &hFF                 ***
'***              2001. 7   CRC.FN3 Function numbers added              ***
'***              2002. 4   I/O port &hE (System status display) added  ***
'***                        I/O port &h60F4 (Effective period of the    ***
'***                        remote wakeup after power off) added        ***
'***              2002. 5   SS.FN3 Functions #11 to #33 added           ***
'***    1.02.00   2003. 4   BT.FN3 Function added                       ***
'***    1.03.00   2003.10   LAN parameter of SYSTEM/SYSMDFY.FN3 added   ***
'***                        CRC.FN3 Function numbers corrected          ***
'***                        DHCP Function added                         ***
'***              2004. 3   BT.FN3 Function #1 parammeter added         ***
'***                        FILE.FN3 Function #11 to #13 added          ***
'***                        SYSTEM.FN3 Ymodem Protocol parammeter added ***
'***                        YMODEM.FN3 Function #3 to #4 added          ***
'***                        SCREEN.FN3 Function #1 to #2 added          ***
'***                        I/O port &h6060 (Communications protocol)   ***
'***                        parammeter added                            ***
'***                        I/O port &h6150 to &h6152 (Auto-repeat)     ***
'***                        added                                       ***
'***    1.04.00   2004. 7   BT.FN3 Function #3 parammeter added         ***
'***              2004. 8   FILE.FN3 Function #14 to #15 added          ***
'***    1.05.00   2005. 8   I/O port, System.fn3 added                  ***
'***                        FTP.FN3 Function #6 corrected               ***
'***                        (.ftLspDel and .ftLspData)                  ***
'***    1.06.00   2006. 2   SS.FN3 Function #14 parammeter added        ***
'***    1.07.00   2006. 2   SS.FN3 Wireless LAN Security added          ***
'***                        CAMERA.FN3 added                            ***
'***    1.08.00   2006. 4   Barcode Light Mode added                    ***
'***    1.09.00   2006. 5   SS.FN3 Function #14 parameter added         ***
'***    1.10.00   2006.12   FTP.FN3 Function #13 to #14 added           ***
'***                        YMODEM.FN3 Function #5 to #6 added          ***
'***    1.11.00   2007.03   SS.FN3 Function #14 parameter added         ***
'***    1.12.00   2007.10   DPM parameter added                         ***
'***    1.13.00   2009. 5   SOUND, RPC, CLONE SQRC parameter added      ***
'***                        UHFRFID.FN3 Function added                  ***
'***    1.14.00   2010. 7   IME.FN3 Function added                      ***
'***              2010. 8   SEARCH.FN3 Function #11 to #12 added        ***
'***                        USB.FN3 Function added                      ***
'***                        Power off backup, Block erase icon,         ***
'***                        Open "BAR:" setting, Code mark type,        ***
'***                        Confirmation screen of program restart,     ***
'***                        Open "COM:" setting parameter added         ***
'***    1.14.01   2011. 1   .syM6key modified                           ***
'***                        UHFRFID.FN3 setting parameter added         ***
'***    1.14.02   2011. 4   UHFRFID.FN3 Function #13 to #15 added       ***
'***    1.15.00   2012. 2   I/O port &h6032 Effective Held-down Time of ***
'***                        Menu Key added                              ***
'***                        SYSTEM.FN3 MTP parammeter added             ***
'***                        SEARCH.FN3 Function #11 to #12 added        ***
'***                        USB.FN3 Function #20,#22 added              ***
'***    1.16.00   2012. 4   SYSTEM.FN3 Key Click parammeter added       ***
'***                        FTP.FN3 Function #15 added                  ***
'***                        SOCKET.FN3 Function #51 added (DNS)         ***
'***                        SOCKET.FN3 Function #60 to #65 added (SSL)  ***
'***                        GRAPH.FN3 Function #10 added                ***
'***                        I/O port &h6085 parammeter added            ***
'***                        SOCKET.FN3 Function #44 parameter added     ***
'***                        SYSTEM.FN3 Illumination control parammeter  ***
'***                        added                                       ***
'***    1.17.00   2013. 8   DEVCTRL.FN3 Function added                  ***
'***                        SYSTEM.FN3 Function  #31 to #34 added       ***
'***                        FILE.FN3 Function #41 to #45 added          ***
'***                        USB.FN3 Function #4 added                   ***
'***                        CRYPT.FN3 Function #1 to #13 added          ***
'***                                                                    ***
'***                    Copyright (C) 2013 DENSO WAVE INCORPORATED      ***
'***                    All rights reserved.                            ***
'**************************************************************************
'****************************************
'*   I/O Port Parameters Definition     *
'****************************************
'===== Waiting for Events ================================================
const   .pnEvent    = &h0

const   .pvEvKeyOn  = &h01
const   .pvEvBarOn  = &h02
const   .pvEvReadOn = &h02         'RFID Read Data ON
const   .pvEvTrgOn  = &h04
const   .pvEvtCmOn  = &h08
const   .pvEvTma0   = &h10
const   .pvEvTmb0   = &h20
const   .pvEvTmc0   = &h40
const   .pvEvCsOn   = &h80

'===== LED ================================================================
const   .pnLEDCtrl  = &h1

const   .pvLEDRed   = &h01
const   .pvLEDGrn   = &h02
const   .pvLEDBle   = &h04

'===== LCD Contrast Level =================================================
const   .pnLCDCnt   = &h3

'===== Message Version ====================================================
const   .pnMgLng    = &h4

const   .pvSysMSG   = &h00
const   .pvEnglish  = &h01
const   .pvChinese  = &h02

'===== Alphabet Entry (Software Keyboard for BHT-100 Series) ==============
const   .pnAlpCtrl  = &h5

const   .pvAlpOff   = &h00
const   .pvAlpOn    = &h01
const   .pvAlpDisp  = &h02
const   .pvAlpBotm  = &h00
const   .pvAlpTop   = &h04
const   .pvAlpMove  = &h08

'===== Sleep Timer ========================================================
const   .pnSlpTime  = &h6

'===== Wakeup =============================================================
const   .pnWupCtrl  = &h8

const   .pvWupOn    = &h01
const   .pvWupPwOn  = &h02
const   .pvWupTmSt  = &h04
const   .pvWupTmOn  = &h08

'===== System Status Display =============================================
const   .pnSysSts   = &hE

const   .pvStsOff   = &h00
const   .pvStsOn    = &h01

'===== Re-read Prevention Enabled Time ====================================
const   .pnBarRrd   = &hF

'===== Initiation of System Mode ==========================================
const   .pnSysMd    = &h6000

const   .pvSMdNGo   = &h00
const   .pvSMdGo    = &h01

'===== Battery Voltage Level =============================================
const   .pnBtVolt   = &h6010
const   .pnBtType   = &h6011
const   .pnCuOn     = &h6012

const   .pvBtRcrg   = &h00
const   .pvBtDry    = &h01
const   .pvCuOff    = &h00
const   .pvCuOn     = &h01
const   .pvCuErr    = &h02

'===== Backlight =========================================================
const   .pnBLCtrl   = &h6020
const   .pnBLTime   = &h6021
const   .pnBLight   = &h6022

const   .pvBLOff    = &h00
const   .pvBLOn     = &h01
const   .pvBLLcd    = &h01
const   .pvBLKey    = &h02

'===== Effective Held-down Time of Power Key ==============================
const   .pnTmPOff   = &h6030

'===== Effective Held-down Time of BS/C  Key ==============================
const   .pnBSCTime  = &h6031
'===== Effective Held-down Time of Menu  Key ==============================
const   .pnMENUTime = &h6032

'===== Magic Key State ====================================================
const   .pnMKey     = &h6040

const   .pvM1kyOn   = &h01
const   .pvM2kyOn   = &h02
const   .pvM3kyOn   = &h04
const   .pvM4kyOn   = &h08
const   .pvM5kyOn   = &h10
const   .pvM6kyOn   = &h20
const   .pvMNkyOn   = &h10

'===== Other Key State ====================================================
const   .pnCKey     = &h6041

const   .pvSFkyOn   = &h01
const   .pvBSkyOn   = &h02
const   .pvCLkyOn   = &h04
const   .pvPWkyOn   = &h08


'===== Communications Protocol ============================================
const   .pnCmPrtcl  = &h6060

const   .pvCPBHT    = &h00
const   .pvCPBHTIr  = &h02
const   .pvCPYmdm   = &h03

'===== ID =================================================================
const   .pnBHTIDL   = &h6061
const   .pnBHTIDH   = &h6062

'===== Font Size ==========================================================
const   .pnFont     = &h6080

const   .pvFtStd    = &h00
const   .pvFtSmall  = &h01
const   .pvFtSmall2 = &h02
const   .pvFtBig    = &h04

'===== Font Emphasis ======================================================
const   .pnFont.Emph = &h6081

const   .pvEmph.Off = &h00
const   .pvEmph.On  = &h01

'===== Cursor Blink =======================================================
const   .pnCursor   = &h6082

'===== Font Size Width ====================================================
const   .pnFont.Width = &h6083

'===== Display method =====================================================
const   .pnDispMtd  = &h6085

const   .pvDispOn   = &h00
const   .pvDispOff  = &h01

'===== Beeper/Vibrator ====================================================
const   .pnBprVib   = &h6090

const   .pvBprOn    = &h01
const   .pvVibOn    = &h02

'===== Key Entry System and Mode ==========================================
const   .pnKeyEnt   = &h60B0
const   .pnKeyMd    = &h60B1

const   .pvKyNm     = &h00
const   .pvKyAlpNm  = &h01
const   .pvKMNm     = &h00
const   .pvKMAlp    = &h01
const   .pvKMKn     = &h02

'===== Beeper Volume ======================================================
const   .pnBprVolm  = &h60C0

'===== System Updating ====================================================
const   .pnSysUp    = &h60D0

const   .pvSUpOff   = &h00
const   .pvSUpRst   = &h01

'===== Defragmentation of Drive ===========================================
const   .pnDfrgSzL  = &h60E0
const   .pnDfrgSzH  = &h60E1
const   .pnDfrgGo   = &h60E2

const   .pvDFNoDsp  = &h00
const   .pvDFAGrph  = &h01
const   .pvDFRGrph  = &h02

'===== Remote Wakeup ======================================================
const   .pnRwuCtrl  = &h60F0
const   .pnRwuSpd   = &h60F1
const   .pnRwuHost  = &h60F2
const   .pnRwuWtT   = &h60F3
const   .pnRwuEfT   = &h60F4

const   .pvRwuOff   = &h00
const   .pvRwuOn    = &h01
const   .pvRwu96    = &h01
const   .pvRwu192   = &h02
const   .pvRwu384   = &h03
const   .pvRwu576   = &h04
const   .pvRwu1152  = &h05
const   .pvRwu2304  = &h06
const   .pvRwu4608  = &h07
const   .pvRwuRgst  = &h01
const   .pvRwuEdOk  = &h02

'===== SCREEN Parameters ==================================================
const   .pnScrnMdL  = &h6110
const   .pnScrnMdH  = &h6111
const   .pnScrnAtL  = &h6112
const   .pnScrnAtH  = &h6113

const   .pvScMB       = &h01
const   .pvScMBRed    = &h02
const   .pvScSmall    = &h04
const   .pvScR180     = &h10
const   .pvScInv      = &h01
const   .pvScW2H1     = &h02
const   .pvScW1H2     = &h04
const   .pvScW2H2     = &h06

'===== Touch Screen ======================================================
const   .pnTPanel   = &h6120
const   .pnTPBeep   = &h6121
const   .pnTPSts    = &h6122

const   .pvTPOff    = &h00
const   .pvTPOn     = &h01
const   .pvTPBOff   = &h00
const   .pvTPBOn    = &h01
const   .pvTPPush   = &h00
const   .pvTPPull   = &h01

'===== Auto-repeat =======================================================
const   .pnARKey    = &h6150
const   .pnARKwait  = &h6151
const   .pnARKintval= &h6152

const   .pvARKeyOn  = &h01
const   .pvARKG1On  = &h02
const   .pvARKG2On  = &h04
const   .pvARKG3On  = &h08
const   .pvARKG4On  = &h10

'===== View Finder =======================================================
const   .pnVwFindr  = &h6310

const   .pvVFOff    = &h00
const   .pvVFOn     = &h01

'===== Scanning Range Marker ==============================================
const   .pnScnMark  = &h6320

const   .pvMarkNrm  = &h00
const   .pvMarkOn   = &h01
const   .pvMarkOff  = &h02

'===== RFID ===============================================================
const   .pnRFlDpt    = &h6400
const   .pvRFIDrtend = &h01         'RFID Access Complete

'===== PHS ================================================================
const   .pnPSMode   = &h7100
const   .pnPSDSend  = &h7101
const   .pnPSRTone  = &h7102
const   .pnPSRBeep  = &h7103
const   .pnPSRVib   = &h7104
const   .pnPSRLed   = &h7105
const   .pnPSVolum  = &h7106
const   .pnPSOffTm  = &h7107
const   .pnPSVocD   = &h7108
const   .pnPSVocR   = &h7109
const   .pnPSDatR   = &h710A
const   .pnPSOsup   = &h710B

const   .pvPublic   = &h00
const   .pvOffice   = &h01
const   .pvDual     = &h02
const   .pvDSndOff  = &h00
const   .pvDSndOn   = &h01
const   .pvRTone1   = &h01
const   .pvRTone2   = &h02
const   .pvRTone3   = &h03
const   .pvRMeldy1  = &h04
const   .pvRMeldy2  = &h05
const   .pvRMeldy3  = &h06
const   .pvRBpOff   = &h00
const   .pvRBpS     = &h01
const   .pvRBpM     = &h02
const   .pvRBpL     = &h03
const   .pvRVibOff  = &h00
const   .pvRVibOn   = &h01
const   .pvRLedOff  = &h00
const   .pvRLedOn   = &h01
const   .pvVocDOff  = &h00
const   .pvVocDOn   = &h01
const   .pvVocROff  = &h00
const   .pvVocROn   = &h01
const   .pvDatROff  = &h00
const   .pvDatROn   = &h01

'****************************************
'*  SCREEN Parameters Definition        *
'****************************************
'===== Display Mode  =====================================================
const   .scDefault  = &h0000
const   .scMB       = &h0001
const   .scMBRed    = &h0002
const   .scSmall    = &h0004
const   .scR180     = &h0010

'===== Character Attributes  =============================================
const   .scInvert   = &h0001
const   .scW2H1     = &h0002
const   .scW1H2     = &h0004
const   .scW2H2     = &h0006
const   .scDGray    = &h0400
const   .scLGray    = &h0800
const   .scWhite    = &h0FF0

'****************************************
'*  SYSTEM.FN3 Parameters Definition    *
'****************************************
'===== Function Numbers  =================================================
const   .fcVersion  = 0
const   .fcSysIGet  = 1
const   .fcSysISet  = 2
const   .fcSysSGet  = 3
const   .fcSysSSet  = 4
const   .fcFontInf  = 5
const   .fcCReset   = 11
const   .fcCLkGet   = 12
const   .fcCMdRqst  = 21
const   .fcBackup   = 31
const   .fcRestore  = 32
const   .fcBackupInfGet  = 33
const   .fcRestoreHisGet = 34

'+--------------------------------------+
'|  Setting Numeric Data                |
'+--------------------------------------+
'===== Shift Key Mode  ===================================================
const   .sySFMode   = 1

const   .sySFNlock  = 0
const   .sySF1time  = 1

'=====  Magic Keys  =======================================================
const   .syM1key    = 2
const   .syM2key    = 3
const   .syM3key    = 4
const   .syM4key    = 5

const   .syMkyNone  = 0
const   .syMkyEnt   = 1
const   .syMkyTrg   = 2
const   .syMkySF    = 3
const   .syMkyBL    = 4
const   .syMkyTel   = 5
const   .syMkyMenu  = 6
const   .syMkyClr   = 7

'=====  Black-and-White Inverted Label Reading  ==========================
const   .syBarInvt  = 6

const   .syInvtOff  = 0
const   .syInvtOn   = 1

'=====  Decode Level  =====================================================
const   .syDecdLvl  = 8

'=====  Min. Number of Digits to be Read for ITF ==========================
const   .syITFMin   = 9

'=====  Min. Number of Digits to be Read for STF ==========================
const   .sySTFMin   = 10

'=====  Min. Number of Digits to be Read for Codabar ======================
const   .syNW7Min   = 11

'=====  Default Interface  ================================================
const   .syCmifApl  = 12
const   .syCmifSys  = 13

const   .syCmifOpt  = 0
const   .syCmifCon  = 1

'=====  Transmission Speed for IrDA Interface =============================
const   .syTrSpdOp  = 14

const   .syOp24     = 0
const   .syOp96     = 1
const   .syOp192    = 2
const   .syOp384    = 3
const   .syOp576    = 4
const   .syOp1152   = 5
const   .syOp2304   = 6
const   .syOp4608   = 7

'=====  Transmission Speed for Direct-Connect Interface ====================
const   .syTrSpdCn  = 18

const   .syCn3      = 0
const   .syCn6      = 1
const   .syCn12     = 2
const   .syCn24     = 3
const   .syCn48     = 4
const   .syCn96     = 5
const   .syCn192    = 6
const   .syCn384    = 7
const   .syCn576    = 8
const   .syCn1152   = 9

'=====  Parity Bit(s) for Direct-Connect Interface  ======================
const   .syVPrtyCn  = 19

const   .syVPrtyN   = 0
const   .syVPrtyO   = 1
const   .syVPrtyE   = 2

'=====  Character Length for Direct-Connect Interface  ====================
const   .syDatLnCn  = 20

const   .syDatLen7  = 0
const   .syDatLen8  = 1

'=====  Stop Bit for Direct-Connect Interface  ============================
const   .syStpLnCn  = 21

const   .syStpLen1  = 0
const   .syStpLen2  = 1

'=====  Serial Number for IrDA Interface  =================================
const   .sySNoOp    = 22

const   .sySNoOff   = 0
const   .sySNoOn    = 1

'=====  Horizontal Parity for IrDA Interface  =============================
const   .syHPrtyOp  = 23

const   .syHPtyOff  = 0
const   .syHPtyOn   = 1

'=====  Linkup Time for IrDA Interface  ====================================
const   .syLnkTmOp  = 24

const   .syLnkT0    = 0
const   .syLnkT30   = 1
const   .syLnkT60   = 2
const   .syLnkT90   = 3
const   .syLnkT120  = 4

'=====  Trailing Spaces for IrDA Interface =================================
const   .syFldSpOp  = 25

const   .sySpIgnr   = 0
const   .sySpData   = 1

'=====  Serial Number for Direct-Connect Interface  ========================
const   .sySNoCn    = 26

'const   .sySNoOff   = 0
'const   .sySNoOn    = 1

'=====  Horizontal Parity for Direct-Connect Interface =====================
const   .syHPrtyCn  = 27

'const   .syHPtyOff  = 0
'const   .syHPtyOn   = 1

'=====  Linkup Time for Direct-Connect Interface ===========================
const   .syLnkTmCn  = 28

'const   .syLnkT0    = 0
'const   .syLnkT30   = 1
'const   .syLnkT60   = 2
'const   .syLnkT90   = 3
'const   .syLnkT120  = 4

'=====  Trailing Spaces for Direct-Connect Interface =====================
const   .syFldSpCn  = 29

'const   .sySpIgnr   = 0
'const   .sySpData   = 1

'=====  Communications Protocol  =========================================
const   .syCmPrtcl  = 30

const   .syCPBHT    = 0
const   .syCPBHTIr  = 2
const   .syCPYmdm   = 3

'=====  Resume  ==========================================================
const   .syResm     = 31

const   .syResmOff  = 0
const   .syResmOn   = 1

'=====  RAM size  ========================================================
const   .syRamSize  = 35

'=====  ROM size  ========================================================
const   .syRomSize  = 36

'=====  Cluster Size  ====================================================
const   .syClstSiz  = 37
const   .syClstSize = 37

'=====  Scanning Range Marker  ===========================================
const   .syScnMark  = 38

const   .syMarkNrm  = 0
const   .syMarkOn   = 1
const   .syMarkOff  = 2

'=====  View Finder  =====================================================
const   .syVwFindr  = 39

const   .syVFOff    = 0
const   .syVFOn     = 1

'=====  Option Data  =====================================================
const   .syOptData  = 40

const   .syODOff    = 0
const   .syODOn     = 1

'=====  Retries of establish link command  ===============================
const   .syLkCnt   = 41

'=====  Intervals between retries of establish link command  =============
const   .syLkIntv  = 42

'=====  Retries of release link command  =================================
const   .syUlkCnt  = 43

'=====  Intervals between retries of release link command  ===============
const   .syUlkIntv = 44

'=====  Link release period  =============================================
const   .syUlkTmr  = 45

'=====  Transmission speed between the BHT and LAN-support CU  ===========
const   .syDvSpd   = 46
const   .syOp4M     = 9

'=====  Ymodem Protocol CR/LF Code =======================================
const   .syYmLFcode = 47

const   .syYmCRLF   = 0
const   .syYmLF     = 1
const   .syYmCR     = 2
const   .syYmNone   = 3

'=====  Ymodem Protocol CR/LF Code Property ==============================
const   .syYmLFdata = 48

const   .syYmRSepa  = 0
const   .syYmRData  = 1

'=====  Ymodem Protocol BHT ID ===========================================
const   .syYmBhtID    = 49

const   .syYmIDNotUse = 0
const   .syYmIDUse    = 1

'=====  Ymodem Protocol  =================================================
const   .syYmInterval = 50

'=====  Barcode invert   =================================================
const   .syBarRvs     = 52

const   .syRvsOff     = 0
const   .syRvsOn      = 1

'=====  Barcode Scanmode =================================================
const   .syScanMode   = 53

const   .syScnNormal  = 0
const   .syScnPoint   = 1
const   .syScnBarCode = 2

'=====  Barcode Light Mode ===============================================
const   .syLightMode  = 55

const   .syLightAuto  = 0
const   .syLightOn    = 1
const   .syLightOff   = 2

'=====  Barcode Sensor mode ==============================================
const   .sySensorMode = 60

const   .sySnsrOff    = 0
const   .sySnsrOn     = 31

'=====  BackLight ========================================================
const   .syBLNormal    = 71
const   .syBLPowerSave = 72
const   .syBLPSTime    = 73
const   .syBLDevSel    = 77

const   .syBLNoDe      = 0
const   .syBLLcd       = 1
const   .syBLKey       = 2
const   .syBLLcdKey    = 3

'=====  Key ==============================================================
const   .syM5key      = 74
const   .syBSCKey     = 75
const   .syM6key      = 76

'=====  MENU =============================================================
const   .syMenuActive = 78
const   .syMenuEnv    = 0
const   .syMenuDis    = 1

'=====  DPM ==============================================================
const   .syDPMFilter  = 84

const   .syDPMFNone   = 0
const   .syDPMF33Mov  = 1
const   .syDPMF55Mov  = 2
const   .syDPMF77Mov  = 3
const   .syDPMF33Blk  = 4
const   .syDPMF55Blk  = 5
const   .syDPMF77Blk  = 6
const   .syDPMF33Wht  = 7
const   .syDPMF55Wht  = 8
const   .syDPMF77Wht  = 9

'=====  SQRC =============================================================
const   .sySQRCMenu   = 91
const   .sySMenuDis   = 0
const   .sySMenuEnv   = 1

'=====  Key Click ========================================================
const   .syKeyClick   = 93
const   .syKCliOff    = 0
const   .syKCliVol1   = 1
const   .syKCliVol2   = 2
const   .syKCliVol3   = 3

'=====  Logo =============================================================
const   .syLogoDispTime = 94

'=====  Clone ============================================================
const   .syCloneArea  = 96
const   .clAreaNone   = 0
const   .clAreaOS     = 1

const   .syCloneMode  = 104
const   .clClone      = 0
const   .clHTCopy     = 1

const   .syCloneSlave = 105
const   .clMenu       = 0
const   .clReboot     = 1

'=====  RPC (BHT Manager) ================================================
const   .syUserLog        = 107
const   .ulEnable         = 1
const   .ulDisable        = 0

const   .syRPCTransport   = 109
const   .rpctSerial       = 1
const   .rpctTCPIP        = 2

const   .syRPCRmtWup      = 110
const   .rpcrwDisable     = 0
const   .rpcrwEnable      = 1

const   .syRPCScheWup     = 111
const   .rpcswDisable     = 0
const   .rpcswEnable      = 1

const   .syRPCTimeout     = 112

const   .syRPCComDev      = 113
const   .rpcdCOM1         = 0

const   .syRPCServicePort = 114
const   .syRPCRmtSynPort  = 115

'=====  MENU key =========================================================
const   .syMENUKey        = 117

'=====  Power off backup =================================================
const   .syPWOffBackup    = 127
const   .pwbDisable       = 0
const   .pwbEnable        = 1

'=====  Block erase icon =================================================
const   .syBlockEraseIcon = 129
const   .beiEnable        = 0
const   .beiDisable       = 1

'=====  Open "BAR:" setting  ==============================================
const   .syRdMode         = 130
const   .syAutoOff        = 0
const   .syMom            = 1
const   .syAlt            = 2
const   .syCnt            = 3

const   .syRdBprVib       = 131
const   .syBprVibOff      = 0
const   .syBprVibOn       = 1

const   .syRdLed          = 132
const   .syLedOff         = 0
const   .syLedOn          = 1

const   .syRdEANUPC       = 133
const   .syReadOff        = 0
const   .syReadOn         = 1

const   .syRdEAN13UPCA    = 134
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdEAN13UPCA1st = 135
const   .syHeadWdCd       = 10

const   .syRdEAN13UPCA2nd = 136
'const   .syHeadWdCd      = 10

const   .syRdEAN13UPCAAddon = 137
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdEAN13UPCAAddOnly = 138
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdEAN13UPCAAddDgt = 139
const   .syAddOnly25      = 0
const   .syAddOnly2       = 1
const   .syAddOnly5       = 2

const   .syRdEAN8         = 140
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdEAN81st      = 141
'const   .syHeadWdCd      = 10

const   .syRdEAN82nd      = 142
'const   .syHeadWdCd      = 10

const   .syRdEAN8Addon    = 143
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdEAN8AddOnly  = 144
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdEAN8AddDgt   = 145
'const   .syAddOnly25     = 0
'const   .syAddOnly2      = 1
'const   .syAddOnly5      = 2

const   .syRdUPCE         = 146
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdUPCE1st      = 147
'const   .syHeadWdCd      = 10

const   .syRdUPCE2nd      = 148
'const   .syHeadWdCd      = 10

const   .syRdUPCEAddon    = 149
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdUPCEAddOnly  = 150
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdUPCEAddDgt   = 151
'const   .syAddOnly25     = 0
'const   .syAddOnly2      = 1
'const   .syAddOnly5      = 2

const   .syRdITF          = 152
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdITFMin       = 153

const   .syRdITFMax       = 154

const   .syRdITFCD        = 155
const   .syCDOff          = 0
const   .syCDOn           = 1

const   .syRdNW7          = 156
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdNW7Min       = 157

const   .syRdNW7Max       = 158

const   .syRdNW7StCd      = 159
const   .syStcdWdCd       = 0
const   .syStCdA          = 1
const   .syStCdB          = 2
const   .syStCdC          = 3
const   .syStCdD          = 4

const   .syRdNW7SpCd      = 160
'const   .syStcdWdCd      = 0
'const   .syStCdA         = 1
'const   .syStCdB         = 2
'const   .syStCdC         = 3
'const   .syStCdD         = 4

const   .syRdNW7CD        = 161
'const   .syCDOff         = 0
'const   .syCDOn          = 1

const   .syRdCd39         = 162
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdCd39Min      = 163

const   .syRdCd39Max      = 164

const   .syRdCd39CD       = 165
'const   .syCDOff         = 0
'const   .syCDOn          = 1

const   .syRdCd93         = 166
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdCd93Min      = 167

const   .syRdCd93Max      = 168

const   .syRdCd128        = 169
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdCd128Min     = 170

const   .syRdCd128Max     = 171

const   .syRdRSS          = 176
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdRSS14        = 177
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdRSS14St      = 178
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdRSSLm        = 179
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdRSSEx        = 180
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdRssExMin     = 181

const   .syRdRssExMax     = 182

const   .syRdRSSExSt      = 183
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdQR           = 184
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdQRSplit      = 185
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdQRSpMd       = 186
const   .syQREdit         = 0
const   .syQRBATCH        = 1
const   .syQRNoEdit       = 2

const   .syRdQR1          = 187
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdQR1Min       = 188

const   .syRdQR1Max       = 189

const   .syRdQR2          = 190
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdQR2Min         = 191

const   .syRdQR2Max         = 192

const   .syRdMQR          = 193
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdMQRMin       = 194

const   .syRdMQRMax       = 195

const   .syRdSQRC         = 196
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdSQRCMin      = 197

const   .syRdSQRCMax      = 198

const   .syRdSQRCPbl      = 199
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdiQR          = 200
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdiQRSplit     = 201
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdiQRSpMd      = 202
'const   .syQREdit        = 0
'const   .syQRNoEdit      = 2

const   .syRdiQRSqu       = 203
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdiQRSquMin    = 204

const   .syRdiQRSquMax    = 205

const   .syRdiQRRct       = 206
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdiQRRctMin    = 207

const   .syRdiQRRctMax    = 208

const   .syRdPDF          = 209
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdPDF417       = 210
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdMicroPDF417  = 211
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdMaxi         = 212
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdDMX          = 213
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdDMXSqu       = 214
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdDMXSquMin    = 215

const   .syRdDMXSquMax    = 216

const   .syRdDMXRct       = 217
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdDMXRctMin    = 218

const   .syRdDMXRctMax    = 219

const   .syRdCmp          = 220
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdMltLine      = 221
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const   .syRdML1Code      = 222
const   .syMLEAN13UPCA    = 1
const   .syMLEAN8         = 2
const   .syMLUPCE         = 3
const   .syMLITF          = 4
const   .syMLNW7          = 5
const   .syMLCd39         = 6
const   .syMLCd93         = 7
const   .syMLCd128        = 8

const   .syRdML11st       = 223
'const   .syHeadWdCd      = 10

const   .syRdML12nd       = 224
'const   .syHeadWdCd      = 10

const   .syRdML1Min       = 225

const   .syRdML1Max       = 226

const   .syRdML1Start     = 227
'const   .syStcdWdCd      = 0
'const   .syStCdA         = 1
'const   .syStCdB         = 2
'const   .syStCdC         = 3
'const   .syStCdD         = 4

const   .syRdML1Stop      = 228
'const   .syStcdWdCd      = 0
'const   .syStCdA         = 1
'const   .syStCdB         = 2
'const   .syStCdC         = 3
'const   .syStCdD         = 4

const   .syRdML1CD        = 229
'const   .syCDOff         = 0
'const   .syCDOn          = 1

const   .syRdML2Code      = 230
'const   .syMLEAN13UPCA   = 1
'const   .syMLEAN8        = 2
'const   .syMLUPCE        = 3
'const   .syMLITF         = 4
'const   .syMLNW7         = 5
'const   .syMLCd39        = 6
'const   .syMLCd93        = 7
'const   .syMLCd128       = 8

const    .syRdML21ST      = 231
'const   .syHeadWdCd      = 10

const    .syRdML22ND      = 232
'const   .syHeadWdCd      = 10

const    .syRdML2Min      = 233

const    .syRdML2Max      = 234

const    .syRdML2Start    = 235
'const   .syStcdWdCd      = 0
'const   .syStCdA         = 1
'const   .syStCdB         = 2
'const   .syStCdC         = 3
'const   .syStCdD         = 4

const    .syRdML2Stop     = 236
'const   .syStcdWdCd      = 0
'const   .syStCdA         = 1
'const   .syStCdB         = 2
'const   .syStCdC         = 3
'const   .syStCdD         = 4

const    .syRdML2CD       = 237
'const   .syCDOff         = 0
'const   .syCDOn          = 1

const    .syRdML3Code     = 238
const    .syMLNone        = 0
'const   .syMLEAN13UPCA   = 1
'const   .syMLEAN8        = 2
'const   .syMLUPCE        = 3
'const   .syMLITF         = 4
'const   .syMLNW7         = 5
'const   .syMLCd39        = 6
'const   .syMLCd93        = 7
'const   .syMLCd128       = 8

const    .syRdML31ST      = 239

const    .syRdML32ND      = 240

const    .syRdML3Min      = 241

const    .syRdML3Max      = 242

const    .syRdML3Start    = 243
'const   .syStcdWdCd      = 0
'const   .syStCdA         = 1
'const   .syStCdB         = 2
'const   .syStCdC         = 3
'const   .syStCdD         = 4

const    .syRdML3Stop     = 244
'const   .syStcdWdCd      = 0
'const   .syStCdA         = 1
'const   .syStCdB         = 2
'const   .syStCdC         = 3
'const   .syStCdD         = 4

const    .syRdML3CD       = 245
'const   .syCDOff         = 0
'const   .syCDOn          = 1

const    .syRdSTF         = 249
'const   .syReadOff       = 0
'const   .syReadOn        = 1

const    .syRdSTFMin      = 250

const    .syRdSTFMax      = 251

const    .syRdSTFCD       = 252
'const   .syCDOff         = 0
'const   .syCDOn          = 1

const    .syRdSTFType     = 253
const    .sySTFTypeBoth   = 0
const    .sySTFTypeNorm   = 1
const    .sySTFTypeShort  = 2

'=====  Code mark type  ===================================================
const    .syCodeMark      = 246
const    .syCdMkType1     = 0
const    .syCdMkType2     = 1

'=====  Confirmation screen of program restart  ===========================
const    .syRestDlg       = 247
const    .syRstDlgOff     = 0
const    .syRstDlgOn      = 1

'=====  Illumination control  =============================================
const    .syIllCtr       = 248
const    .syIllBlink     = 0
const    .syIllOn        = 1
const    .syIllLowpw     = 2

'=====  Open "COM:" setting  ==============================================
const    .syOpnComSet     = 256
const    .syFromAPI       = 0
const    .syFromSys       = 1

'=====  Function limit Receive file =======================================
const    .syMtpLimitRcv   = 265

'=====  Function limit Delete file  =======================================
const    .syMtpLimitDel   = 266

'=====  Function limit Change file name ===================================
const    .syMtpLimitRnm   = 267
const    .syMtpOff        = 0
const    .syMtpOn         = 1

'=====  New line record ===================================================
const    .syMtpTranCrlf   = 268
const    .syMtpCRLF       = 0
const    .syMtpLF         = 1
const    .syMtpCR         = 2
const    .syMtpNone       = 3

'=====  Operation of new line code during the recording ===================
const    .syMtpTranRcd    = 269
const    .syMtpRSepa      = 0
const    .syMtpRData      = 1

'=====  Operation of space at the end of record ===========================
const    .syMtpTranSpc    = 270
const    .syMtpSpIgnr     = 0
const    .syMtpSpData     = 1

'=====  Filter Data file attributes =======================================
const    .syMtpAttrDat    = 272

'=====  Filter Application attributes =====================================
const    .syMtpAttrApl    = 273

'=====  Filter Font file attributes =======================================
const    .syMtpAttrFnt    = 274

'=====  Filter Other attributes ===========================================
const    .syMtpAttrAno    = 275

'=====  Filter Specify file extension display =============================
const    .syMtpExtDisp    = 280
const    .syMtpYes        = 0
const    .syMtpNo         = 1

'=====  COM1 Used Device =============================
const    .syCom1UsedDev   = 283
const    .syCom1Cradle    = 0
const    .syCom1Irda      = 1

'=====  Model Infomation =============================
const    .syModelInf      = 284
const    .syModel2D       = &h0001
const    .syModelWlan     = &h0002
const    .syModelBt       = &h0004


'+--------------------------------------+
'|  Setting String Data                 |
'+--------------------------------------+
'=====  System Version  ==================================================
const   .syVersion  = 1

'=====  Model Name  ======================================================
const   .syModel    = 3

'=====  Product Number  ==================================================
const   .syPrdctNo  = 4

'=====  Serial Number  ===================================================
const   .syBHTSNo   = 5

'=====  Execution Program Name  ==========================================
const   .syExePrg   = 6

'=====  System Version of BHT System Parameter File ======================
const   .syOsUpVer  = 7

'=====  System Version of PHS System Parameter File ======================
const   .syPHSVer   = 8

'=====  LAN-support CU system version  ===================================
const   .syCVGet    = 9

'=====  MAC address of the LAN-support CU ================================
const   .syCMacGet  = 10

'=====  Product number assigned to the LAN-support CU ====================
const   .syCPNoGet  = 11

'=====  Logo Filename ====================================================
const   .syLogoFile  = 12

'=====  Clone ============================================================
const   .syCloneNumber  = 14

'=====  RPC (BHT Manager) ================================================
const   .syRPCRmtIP    = 15
const   .syRPCWupSched = 16

'=====  Filter Specify file extension  =============================
const   .syMtpExtStr   = 22


'+------------------------------------------------------+
'|  Link Status between the BHT and the LAN-support CU  |
'+------------------------------------------------------+
const   .syNgLk     = 0
const   .syOkLk     = 1
const   .syOkOthLk  = 2
const   .syLkNoRes  = 3


'=====  Function .fcRestore ============================================
const   .fcRstOs      = &h01
const   .fcRstFile    = &h02
const   .fcRstPrmStup = &h04
const   .fcRstPrmCln  = &h08
const   .fcRstPrmAll  = &h0C
const   .fcDelfile    = 0
const   .fcNotDelfile = 1


'****************************************
'*  SYSMDFY.FN3 Parameters Definition   *
'****************************************
'===== Function Numbers  =================================================
const   .fcMdBVGet  = 1
const   .fcMdBDo    = 2
const   .fcMdBNGet  = 3
const   .fcMdBNSet  = 4
const   .fcMdCVGet  = 11
const   .fcMdCDo    = 12
const   .fcMdCNGet  = 13
const   .fcMdCNSet  = 14

'+--------------------------------------+
'|  Reconfigure BHT system              |
'+--------------------------------------+
const   .smPwOff  = 0
const   .smReset  = 1

'****************************************
'*  CONSOLE.FN3 Parameters Definition   *
'****************************************
'=====  Function #0  ======================================================
'const   .fcVersion  = 0

'=====  Function #1  ======================================================
const   .fcDot      = 1

const   .cnColor    = 0
const   .cnInvert   = 1
const   .cnBlack    = &h0000
const   .cnDGray    = &h0040
const   .cnLGray    = &h0080
const   .cnWhite    = &h00FF

'=====  Function #2  ======================================================
const   .fcLine     = 2

'const   .cnColor    = 0
'const   .cnInvert   = 1
'const   .cnBlack    = &h0000
'const   .cnDGray    = &h0040
'const   .cnLGray    = &h0080
'const   .cnWhite    = &h00FF

'=====  Function #3  ======================================================
const   .fcDtLine   = 3

'const   .cnColor    = 0
'const   .cnInvert   = 1
'const   .cnBlack    = &h0000
'const   .cnDGray    = &h0040
'const   .cnLGray    = &h0080
'const   .cnWhite    = &h00FF

'=====  Function #4  ======================================================
const   .fcRectFil  = 4

'const   .cnColor    = 0
'const   .cnInvert   = 1
'const   .cnBlack    = &h0000
'const   .cnDGray    = &h0040
'const   .cnLGray    = &h0080
'const   .cnWhite    = &h00FF

'=====  Function #5  ======================================================
const   .fcRect     = 5

'const   .cnColor    = 0
'const   .cnInvert   = 1
'const   .cnBlack    = &h0000
'const   .cnDGray    = &h0040
'const   .cnLGray    = &h0080
'const   .cnWhite    = &h00FF

'=====  Function #6  ======================================================
const   .fcDotGet   = 6

'const   .cnBlack    = &h0000
'const   .cnDGray    = &h0040
'const   .cnLGray    = &h0080
'const   .cnWhite    = &h00FF

'=====  Function #10  ======================================================
const   .fcInversion = 10

'=====  Function #11  =====================================================
const   .fcFKey     = 11

const   .cnFKey0    = 0
const   .cnFKey4    = 1
const   .cnFKey8    = 2

'=====  Function #12  =====================================================
const   .fcFKeyDsp  = 12

const   .cnAnk      = 0
const   .cnMB       = 1
const   .cnSmallFt  = 4
const   .cnW1H1     = 0
const   .cnW2H1     = 1
const   .cnW1H2     = 2
const   .cnW2H2     = 3

'=====  Function #13  =====================================================
const   .fcUKey     = 13

'const   .cnAnk      = 0
'const   .cnMB       = 1
'const   .cnSmallFt  = 4
'const   .cnW1H1     = 0
'const   .cnW2H1     = 1
'const   .cnW1H2     = 2
'const   .cnW2H2     = 3

'=====  Function #14  =====================================================
const   .fcUKeyImg  = 14

'=====  Function #15  =====================================================
const   .fcUKeyEnd  = 15

'=====  Function #21  =====================================================
const   .fcPnlGet   = 21

'=====  Function #31  =====================================================
const   .fcHBxOpen  = 31

'=====  Function #32  =====================================================
const   .fcHBxLoad  = 32

'=====  Function #33  =====================================================
const   .fcHBxSave  = 33

const   .cnBMP      = 0
const   .cnJPG      = 1

'=====  Function #34  =====================================================
const   .fcHBxClr   = 34

'=====  Function #35  =====================================================
const   .fcHBxClos  = 35

'=====  Function #41  =====================================================
const   .fcImgOpen  = 41

'=====  Function #42  =====================================================
const   .fcImgClos  = 42

'=====  Function #51  =====================================================
const   .fcLcdClr   = 51

'=====  Function #101  ====================================================
const   .fcCapOpen  = 101

'=====  Function #102  ====================================================
const   .fcCapSave  = 102

'const   .cnBMP      = 0
'const   .cnJPG      = 1
const   .cnQtyStd   = 0
const   .cnQtyHigh  = 1
const   .cnQtyLow   = 2
const   .cnVGA      = 0
const   .cnVGA2     = 1
const   .cnVGA4     = 2

'=====  Function #103  ====================================================
const   .fcCapClos  = 103

'****************************************
'*  SOCKET.FN3 Parameters Definition    *
'****************************************
'=====  Function #0  ======================================================
'const   .fcVersion  = 0

'=====  Function #1  ======================================================
const   .fcAccept   = 1

'=====  Function #2  ======================================================
const   .fcBind     = 2

const   .soINet     = 2

'=====  Function #3  ======================================================
const   .fcConnect  = 3

'const   .soINet     = 2

'=====  Function #4  ======================================================
const   .fcGPName   = 4

'=====  Function #5  ======================================================
const   .fcGSName   = 5

'=====  Function #6  ======================================================
const   .fcGSckOpt  = 6

const   .soKepAliv  = 2
const   .soSndBuff  = 8
const   .soRcvBuff  = 9
const   .soKATime   = 15
const   .soMaxRT    = 26
const   .soTIMEWAIT    = 29
const   .soRTODef   = 30
const   .soRTOMin   = 31
const   .soRTOMax   = 32
const   .soEnable   = 1
const   .soDisable  = 0

'=====  Function #7  ======================================================
const   .fcHToNL    = 7

'=====  Function #8  ======================================================
const   .fcHToNS    = 8

'=====  Function #9  ======================================================
const   .fcINetAdr  = 9

'=====  Function #10  =====================================================
const   .fcListen   = 10

'=====  Function #11  =====================================================
const   .fcNToHL    = 11

'=====  Function #12  =====================================================
const   .fcNToHS    = 12

'=====  Function #13  =====================================================
const   .fcReadv    = 13

'=====  Function #14  =====================================================
const   .fcRecv     = 14

const   .soRvNrm    = 0
const   .soRvOOB    = 1
const   .soRvPeek   = 2
const   .soRvApend  = 0
const   .soRvWrite  = 1

'=====  Function #15  =====================================================
const   .fcRcvfrom  = 15

'const   .soRvNrm    = 0
'const   .soRvOOB    = 1
'const   .soRvPeek   = 2
'const   .soINet     = 2
'const   .soRvApend  = 0
'const   .soRvWrite  = 1

'=====  Function #16  =====================================================
const   .fcResvPrt  = 16

'=====  Function #17  =====================================================
const   .fcSelect   = 17

const   .soNoWait   = -1
const   .soNotTOut  = 0

'=====  Function #18  =====================================================
const   .fcFDZERO   = 18

'=====  Function #19  =====================================================
const   .fcFDSET    = 19

'=====  Function #20  =====================================================
const   .fcFDCLR    = 20

'=====  Function #21  =====================================================
const   .fcFDISSET  = 21

const   .soFDSet    = 0
const   .soFDNoSet  = 1

'=====  Function #22  =====================================================
const   .fcSend     = 22

const   .soSdNrm    = 0
const   .soSdOOB    = 1
const   .soSdDnRt   = 4

'=====  Function #23  =====================================================
const   .fcSendto   = 23

'const   .soSdNrm    = 0
'const   .soSdOOB    = 1
'const   .soSdDnRt   = 4
'const   .soINet     = 2

'=====  Function #24  =====================================================
const   .fcSSckOpt  = 24

'const   .soKepAliv  = 2
'const   .soSndBuff  = 8
'const   .soRcvBuff  = 9
'const   .soKATime   = 15
'const   .soMaxRT    = 26
'const   .soRTODef   = 30
'const   .soRTOMin   = 31
'const   .soRTOMax   = 32
'const   .soEnable   = 1
'const   .soDisable  = 0

'=====  Function #25  =====================================================
const   .fcShutdwn  = 25

const   .soSdRecv   = 0
const   .soSdSend   = 1
const   .soSdBoth   = 2

'=====  Function #26  =====================================================
const   .fcSocket   = 26

'const   .soINet     = 2
const   .soStream   = 1
const   .soDGRam    = 2
const   .soRaw      = 3
const   .soICMP     = 1
const   .soTCP      = 6
const   .soUDP      = 17

'=====  Function #27  =====================================================
const   .fcWritev   = 27

'=====  Function #28  =====================================================
const   .fcClose    = 28


'=====  Function #40  =====================================================
const   .fcTSetup   = 40

const   .soDvCOM1   = 0
const   .soDvCOM3   = 2
const   .soDvCOM4   = 3

const   .soLyPPP    = 0
const   .soLyEther  = 2

'=====  Function #41  =====================================================
const   .fcTCnnSys  = 41

'=====  Function #42  =====================================================
const   .fcTCnnUsr  = 42

'=====  Function #43  =====================================================
const   .fcTDiscnn  = 43

'=====  Function #44  =====================================================
const   .fcTSysGet  = 44

const   .soPmIPAdr     = 1
const   .soPmNtMsk     = 2
const   .soPmDGWay     = 3
const   .soPPPAuth     = 4
const   .soPPPUser     = 5
const   .soPPPPw       = 6
const   .soDHCPTout    = 7
const   .soDHCPLeased  = 8
const   .soPmDNSPri    = 10
const   .soPmDNSSec    = 11
const   .soPmDNSDomNam = 12
const   .soPnDNSDomUse = 13
const   .soDvGet       = 100
const   .soLyGet       = 200
const   .soPPPAuthNo   = 0
const   .soPPPPAP      = 1
const   .soPPPCHAP     = 2
const   .soRelease     = 0
const   .soReuse       = 1

'=====  Function #45  =====================================================
const   .fcTSysSet  = 45

'=====  Function #46  =====================================================
const   .fcTStsGet  = 46

const   .soStRmtCl  = &h0020
'const   .soNoWait   = -1
'const   .soNotTOut  = 0

'=====  Function #48  =====================================================
const   .fcTPrmGet  = 48

'const   .soPmIPAdr  = 1
'const   .soPmNtMsk  = 2
'const   .soPmDGWay  = 3

'=====  Function #51  =====================================================
const   .fcNameToIP = 51

'=====  Function #60  =====================================================
const   .fcSSLInit         = 60

'=====  Function #61  =====================================================
const   .fcSSLSessionOpen  = 61

const   .ftSSLVer30 = 1
const   .ftSSLVer31 = 2

'=====  Function #62  =====================================================
const   .fcSSLClientStart  = 62

'=====  Function #63  =====================================================
const   .fcSSLClientEnd    = 63

'=====  Function #64  =====================================================
const   .fcSSLSessionClose = 64

'=====  Function #65  =====================================================
const   .fcSSLUninit       = 65

'****************************************
'*  FTP.FN3 Parameters Definition       *
'****************************************
'=====  Function #0  ======================================================
'const   .fcVersion  = 0

'=====  Function #1  ======================================================
const   .fcFTPOpnS  = 1

'=====  Function #2  ======================================================
const   .fcFTPOpnU  = 2

'=====  Function #3  ======================================================
const   .fcFTPClos  = 3

'=====  Function #4  ======================================================
const   .fcPWD      = 4

'=====  Function #5  ======================================================
const   .fcCWD      = 5

'=====  Function #6  ======================================================
const   .fcRETR     = 6

const   .ftCRLF     = 0
const   .ftCR       = 1
const   .ftLF       = 2
const   .ftNONE     = 3
const   .ftRcdSepa  = 0
const   .ftRcdData  = 1
const   .ftLspDel   = 10
const   .ftLspData  = 11
const   .ftNotDisp  = 0
const   .ftDisp     = 1

'=====  Function #7  ======================================================
const   .fcSTOR     = 7

const   .ftUpSTOR   = 0
const   .ftUpAPPE   = 1

'=====  Function #8  ======================================================
const   .fcFSysGet  = 8

const   .ftCRLFTyp  = 5
const   .ftCRLFMd   = 6
const   .ftUpMd     = 7
const   .ftDispMd   = 8
const   .ftDailMd   = 9
const   .ftPublic   = 0
const   .ftOffice   = 1
const   .ftSrvIP    = 1
const   .ftUsrNm    = 2
const   .ftPswd     = 3
const   .ftDefDir   = 4
const   .ftDialNo   = 10

'=====  Function #9  ======================================================
const   .fcFSysSet  = 9

'=====  Function #10  =====================================================
const   .fcRNFR     = 10

'=====  Function #11  =====================================================
const   .fcPORT     = 11

'=====  Function #12  =====================================================
const   .fcDELE     = 12

'=====  Function #13  =====================================================
const   .fcRETRC    = 13

'=====  Function #14  =====================================================
const   .fcSTORC    = 14

'=====  Function #15  =====================================================
const   .fcFTPPasv  = 15

const   .ftDisable  = 0
const   .ftEnable   = 1

'****************************************
'*  SS.FN3 Parameters Definition        *
'****************************************
'=====  Function #0  ======================================================
'const   .fcVersion  = 0

'=====  Function #1  ======================================================
const   .fcParaIGet = 1

const   .ssDmnGet   = 1

'=====  Function #2  ======================================================
const   .fcParaSGet = 2

const   .ssFWVerGet = 1
const   .ssMACIDGet = 2
const   .ssFWVER.SZ = 4
const   .ssMACID.SZ = 6

'=====  Function #3  ======================================================
const   .fcParaISet = 3

const   .ssDmnSet   = 1

'=====  Function #4  ======================================================
const   .fcParaSSet = 4

const   .ssSIDSet   = 3
const   .ssSID.SZ   = 20

'=====  Function #7  ======================================================
const   .fcSyncInf  = 7

const   .ssNowInf   = 0
const   .ssWtSync   = -1

'=====  Function #11 ======================================================
const   .fcParaInit   = 11

'=====  Function #12 ======================================================
const   .fcParaStart  = 12

'=====  Function #13 ======================================================
const   .fcParaEnd    = 13

'=====  Function #14 ======================================================
const   .fcParaDIGet  = 14

const   .ssPsp         = 1
const   .ssWEP         = 2
const   .ssAuthen      = 3
const   .ssRadio       = 4
const   .ssScrty       = 10
const   .ssEAPType     = 11
const   .ssWPACphr     = 12
const   .ssEAPStart    = 20
const   .ssAuthPeriod  = 21
const   .ssHeldPeriod  = 22
const   .ssStartPeriod = 23
const   .ssMaxStart    = 24
const   .ssBSSType     = 30
const   .ssADChan      = 31
const   .ssBaseRate    = 106

const   .ssPsOFF      = 0
const   .ssPsON       = 1
const   .ssWepDis     = 0
const   .ssWepEn      = 1
const   .ssOpen       = 0
const   .ssShrdKey    = 1
const   .ss11b        = 0
const   .ss11g        = 1
const   .ssSecNone    = 0
const   .ss1xSupp     = 1
const   .ssWPA1x      = 2
const   .ssWPAPSK     = 3
const   .ssWPA21x     = 4
const   .ssWPA2PSK    = 5
const   .ssPEAP       = 0
const   .ssEAPTLS     = 1
const   .ssTKIP       = 0
const   .ssAES        = 1
const   .ssNWInfra    = 0
const   .ssNWAdhoc    = 1
const   .ssBsRate1M   = 1
const   .ssBsRate2M   = 2
const   .ssBsRate5M   = 3
const   .ssBsRate11M  = 4

'=====  Function #15 ======================================================
const   .fcParaDISet  = 15

'=====  Function #16 ======================================================
const   .fcParaDSGet  = 16

const   .ssFwVer      = 1
const   .ssMacID      = 2
const   .ssSSID       = 3
const   .ssClientID   = 6
const   .ssEAPID      = 10
const   .ssEAPPass    = 11
const   .ssRootCert   = 12
const   .ssClientCert = 13
const   .ssPSKKey     = 14
const   .ssAnonyID    = 15

'=====  Function #17 ======================================================
const   .fcParaDSSet  = 17

'=====  Function #20 ======================================================
const   .fcWepGet     = 20

const   .ssWEPNo      = -1
const   .ssWEP40      = 0
const   .ssWEP128     = 1

'=====  Function #21 ======================================================
const   .fcWepSet     = 21

'=====  Function #22 ======================================================
const   .fcWTGet      = 22

'=====  Function #23 ======================================================
const   .fcWTSet      = 23

'=====  Function #30 ======================================================
const   .fcInfoGet    = 30

const   .ssCurSpd     = 1
const   .ssCurCh      = 2
const   .ssCurSpdErr  = -1
const   .ssCurSpd1M   = 1
const   .ssCurSpd2M   = 2
const   .ssCurSpd5M   = 3
const   .ssCurSpd11M  = 4

'=====  Function #31 ======================================================
const   .fcSrvyStart  = 31

'=====  Function #32 ======================================================
const   .fcSrvyEnd    = 32

'=====  Function #33 ======================================================
const   .fcSrvyGet    = 33

const   .ssLQOff      = 0
const   .ssLQPoor     = 1
const   .ssLQFair     = 2
const   .ssLQGood     = 3
const   .ssLQExcellent= 4

'=====  Function #40 ======================================================
const   .fcSetPMK     = 40

'****************************************
'*  BT.FN3 Parameters Definition        *
'****************************************
'=====  Function #0  ======================================================
'const   .fcVersion  = 0

'=====  Function #1  ======================================================
const   .fcBTGetVal  = 1

const   .btTTOInq    = 1
const   .btNumInq    = 2
const   .btTOMst     = 3
const   .btTOSlv     = 4
const   .btSecMst    = 5
const   .btSecSlv    = 6
const   .btAutoPwOff = 7

'=====  Function #2  ======================================================
const   .fcBTSetVal = 2

'=====  Function #3  ======================================================
const   .fcBTGetStr = 3

const   .btLocNam   = 1
const   .btRmtAdr   = 2
const   .btKeyMst   = 3
const   .btKeySlv   = 4
const   .btSppSrv   = 54

'=====  Function #4  ======================================================
const   .fcBTSetStr = 4

'=====  Function #7  ======================================================
const   .fcBTSysVer = 7

'=====  Function #8  ======================================================
const   .fcBTDevInf = 8

const   .btFWVer    = 1
const   .btDevAdr   = 2
const   .btDevNam   = 3

'=====  Function #9  ======================================================
const   .fcBTRmtNam = 9

'=====  Function #10 ======================================================
const   .fcBTInqRes = 10

'=====  Function #11 ======================================================
const   .fcBTRmtInf = 11

'=====  Function #12 ======================================================
const   .fcBTGetStt = 12

'=====  Function #13 ======================================================
const   .fcBTGetLnk = 13

'=====  Function #14 ======================================================
const   .fcBTClrLnk = 14

'=====  Function #15 ======================================================
const   .fcBTHold   = 15

'=====  Function #20 ======================================================
const   .fcBTChkSnd = 20

'=====  Function #21 ======================================================
const   .fcBTGetSvc = 21

'****************************************
'*  FILE.FN3 Parameters Definition      *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion    = 0
const   .fcInfGetF     = 1
const   .fcInfGetD     = 2
const   .fcFNumGet     = 3
const   .fcRename      = 4
const   .fcCopy        = 5
const   .fcInfGetF40   = 11
const   .fcInfGetD40   = 12
const   .fcWRcNumGet   = 13
const   .fcRcDelete    = 14
const   .fcFOptimize   = 15
const   .fcVerGetPD4   = 20
const   .fcInfGetPD4   = 21
const   .fcExePNameGet = 22
const   .fcLDFnameGet  = 23
const   .fcGetDateTime = 24
const   .fcFormat      = 41
const   .fcCreateFolder= 42
const   .fcDeleteFolder= 43
const   .fcFsFirst     = 44
const   .fcFsNext      = 45

'=====  Set Values  ======================================================
const   .fiDriveA   = 1
const   .fiDriveB   = 2

const   .fiOPNoDsp  = 0
const   .fiOPGraph  = 256

'=====  Function .fcFsFirst ==========================================
const   .fiFile     = &h00
const   .fiFolder   = &h10


'****************************************
'*  GRAPH.FN3 Parameters Definition     *
'****************************************
'=====  Function Numbers =================================================
'const   .fcVersion  = 0
'const   .fcDot      = 1
'const   .fcLine     = 2
'const   .fcDtLine   = 3
'const   .fcRectFil  = 4
'const   .fcRect     = 5
'const   .fcDotGet   = 6
'const   .fcInversion = 10

const   .fcGetTextColor = 31
const   .fcSetTextColor = 32
const   .fcPictureBox   = 34


'=====  Set Values  =======================================================
const   .grWhite    = 0
const   .grBlack    = 1
const   .grReverse  = 2

'=====  Function .fcGetTextColor ==========================================
const   .grColor.White       = &hFFFFFF00
const   .grColor.Red         = &hFF000000
const   .grColor.Green       = &h00FF0000
const   .grColor.Blue        = &h0000FF00
const   .grColor.Black       = &h00000000
const   .grColor.Cyan        = &h00FFFF00
const   .grColor.Magenta     = &hFF00FF00
const   .grColor.Yellow      = &hFFFF0000
const   .grColor.Transparent = &h00000001

'const   .pvEmph.Off  = &h00
'const   .pvEmph.On   = &h01

'const   .scInvert   = &h0001

'=====  Function .fcPictureBox ============================================
const    .grFit.Equal = 0
const    .grFit.Smart = 1
const    .grFit.Just  = 2
const    .grFit.Center= 3


'****************************************
'*  SEARCH.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  =================================================
'const   .fcVersion  = 0
const   .fcAndSrch  = 1
const   .fcOrSrch   = 2
const   .fcAndSrchN = 11
const   .fcOrSrchN = 12

'****************************************
'*  BSEARCH.FN3 Parameters Definition   *
'****************************************
'=====  Function Numbers  =================================================
'const   .fcVersion  = 0
const   .fcBSrcOp   = 1
const   .fcBSrcNOp  = 2

'****************************************
'*  STRING.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  =================================================
'const   .fcVersion  = 0
const   .fcStrLink  = 1
const   .fcAcToEc   = 2
const   .fcEcToAc   = 3

'****************************************
'*  STRING2.FN3 Parameters Definition   *
'****************************************
'=====  Function Numbers  ===============================================
'const   .fcVersion  = 0
const   .fcAcToPc   = 1
const   .fcPcToAc   = 2
const   .fcAcToBn   = 3
const   .fcBnToAc   = 4
const   .fcHAcToIt  = 5
const   .fcItToHAc  = 6
const   .fcHAcToBn  = 7
const   .fcBnToHAc  = 8

'=====  Set Values  =======================================================
const   .stZeroPrs  = 0
const   .stNotPrs   = 1

'****************************************
'*  CRC.FN3 Parameters Definition       *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcCrcPp    = 1
const   .fcCcitt    = 2
const   .fcCrc16    = 3

'****************************************
'*  XMODEM.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  =================================================
'const   .fcVersion  = 0
const   .fcXmdRecv  = 1
const   .fcXmdSend  = 2

'=====  Set Values  =======================================================
const   .xmCRLF     = 0
const   .xmCR       = 1
const   .xmNONE     = 2

const   .xmRcdSepa  = 0
const   .xmRcdData  = 10

const   .xmLspDel   = 0
const   .xmLspData  = 100

'****************************************
'*  YMODEM.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcYmdRecv   = 1
const   .fcYmdSend   = 2
const   .fcYmRecvEx  = 3
const   .fcYmSendEx  = 4
const   .fcYmRecvExC = 5
const   .fcYmSendExC = 6

'=====  Set Values  ======================================================
const   .ymCRLF      = 0
const   .ymCR        = 1
const   .ymNONE      = 2
const   .ymLF        = 3

const   .ymRcdSepa   = 0
const   .ymRcdData   = 10

const   .ymLspDel    = 0
const   .ymLspData   = 100

const   .ymCRLFEx    = 0
const   .ymLFEx      = 1
const   .ymCREx      = 2
const   .ymNONEEx    = 3

const   .ymRcdSepaEx = 0
const   .ymRcdDataEx = 1

const   .ymLspDelEx  = 0
const   .ymLspDataEX = 10

const   .ymNotDisp   = 0
const   .ymDisp      = 1

const   .ymLast      = 0
const   .ymNext      = 1
const   .ymSingle    = 2

const   .ymNotID     = 0
const   .ymBhtID     = 1

'****************************************
'*  SCREEN.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcScrnGet   = 1
const   .fcScrnSet   = 2

'****************************************
'*  SOUND.FN3 Parameters Definition     *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion    =  0
const   .fcSndPlay     =  1
const   .fcSndStop     =  2
const   .fcSndCheck    =  3
const   .fcSndPlaySync = 11

const   .sndStop       =  0
const   .sndPlay       =  1

'****************************************
'*  PROGRAM.FN3 Parameters Definition   *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcPrgSGet   = 1

'=====  Function .fcPrgSGet ==============================================
const   .prVersion   = 1
const   .prComment   = 2
const   .prFileDesc  = 3
const   .prCompany   = 4
const   .prTrademark = 5
const   .prProduct   = 6
const   .prCopyright = 7
const   .prBuild     = 8

'****************************************
'*  CAMERA.FN3 Parameters Definition    *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcCapture   = 1
const   .fcSetKey    = 10
const   .fcSetPart   = 11
const   .fcSetFinder = 12

'=====  Function .fcCapture ==============================================
const   .caQQVGA     = 0
const   .caQVGA      = 1
const   .caVGA       = 2
const   .caLow       = 0
const   .caStandard  = 1
const   .caHigh      = 2

'=====  Function .fcSetKey ===============================================
const   .caKeyM1     = 1
const   .caKeyM2     = 2
const   .caKeyM3     = 3
const   .caKeyM4     = 4
const   .caKeyM5     = 5

'=====  Function .fcSetPart ==============================================
const   .caPtFinder   = 0
const   .caPtBg       = 1
const   .caPtTitle    = 2
const   .caPtStatus   = 4
const   .caPtGuide    = 8

'****************************************
'*  IME.FN3 Parameters Definition       *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion        = 0
const   .fcIMERun          = 1
const   .fcIMERunTextField = 2

'=====  Function .fcIMERun and fcIMERunTextField =========================
const   .imeKanaKanji      = 1
const   .imeZenKana        = 2
const   .imeHanKana        = 4
const   .imeZenAlpha       = 8
const   .imeHanAlpha       = 16
const   .imeNum            = 32
const   .imeKigou          = 64

'****************************************
'*  UHFRFID.FN3 Parameters Definition   *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion  = 0
const   .fcUHFParaInit     = 1
const   .fcUHFParaIGet     = 2
const   .fcUHFParaISet     = 3
const   .fcUHFGetPC        = 6
const   .fcUHFGetLen       = 7
const   .fcUHFClrRRD       = 8
const   .fcUHFSetArea      = 10
const   .fcUHFSetFilter    = 11
const   .fcUHFResult       = 12
const   .fcUHFSetFilterOr  = 13
const   .fcUHFSetFilterAnd = 14
const   .fcUHFReadTagCtrl  = 15
const   .fcUHFRead         = 20
const   .fcUHFWrite        = 21
const   .fcUHFSetPwd       = 22
const   .fcUHFPwdLock      = 23
const   .fcUHFPermaLock    = 24
const   .fcUHFSetUII       = 25
const   .fcUHFKill         = 26

'+--------------------------------------+
'|  Setting Numeric Data                |
'+--------------------------------------+
'===== Parameter Number  ===================================================
const   .uhfCh           = 1
const   .uhfQparam       = 2
const   .uhfSession      = 3
const   .uhfSessionInit  = 4
const   .uhfCmdTimeOut   = 5
const   .uhfAntiReRead   = 6
const   .uhfReadPowerLv  = 10
const   .uhfWritePowerLv = 11
const   .uhfPowerSave    = 12

'===== Parameter(uhfSession)  ===============================================
const   .uhfS0           = 0
const   .uhfS1           = 1
const   .uhfS2           = 2
const   .uhfS3           = 3

'===== Parameter(uhfSessionInit)  ============================================
const   .uhfDisable      = 0
const   .uhfEnable       = 1

'===== Parameter(uhfAntiReRead)  ============================================
'const  .uhfDisable      = 0
const   .uhfClrTrgOn     = 1
const   .uhfClrOpen      = 2

'===== Parameter(uhfPowerSave)  ============================================
const   .uhfPSOff        = 0
const   .uhfPSOn         = 1

'=====  Function .fcUHFResult ============================================
const   .uhfRetSuccess   = &h0000      'NormalEnd
const   .uhfRetMaxSize   = &h0001
const   .uhfRetTmout     = &h0002
const   .uhfRetMemOver   = &h0003
const   .uhfRetMemLock   = &h0004
const   .uhfRetLCarrier  = &h000B
const   .uhfRetTagErr    = &h000F
const   .uhfRetInvalid   = &h0010

'=====  Function .fcSetFilter ============================================
'=====  Function .fcRead =================================================
const   .uhfRSVbank      = 0    'Reserved bank

'=====  Function .fcUHFPwdLock ===========================================
'=====  Function .fcUHFPermaLock =========================================
const   .uhfRSVKill      = 1    'Kill Password area
const   .uhfRSVAcc       = 2    'Access Password area
const   .uhfUIIbank      = 10   'UII bank
const   .uhfTIDbank      = 20   'TID bank
const   .uhfUSERbank     = 30   'USER bank

'=====  Function .fcUHFSetPwd ============================================
const   .uhfKillPwd      = 1    'Kill Password
const   .uhfAccPwd       = 2    'Access Password

'=====  Function .fcUHFPwdLock ===========================================
const   .uhfUnLock       = 0    'Unlock
const   .uhfPwdLock      = 1    'Pwd Lock

'=====  Function .fcUHFPermaLock =========================================
const   .uhfPmUnLock     = 0    'Permanent Unlock
const   .uhfPmLock       = 1    'Permanent Lock

'****************************************
'*  USB.FN3 Parameters Definition       *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion      = 0
const   .fcUSBSetClass   = 1
const   .fcUSBGetClass   = 2
const   .fcUSBGetStatus  = 3
const   .fcCRADLEGetStt  = 4
const   .fcMTPStart      = 20
const   .fcMTPStartWay   = 22

'=====  Function .fcUSBSetClass and fcUSBGetClass ========================
const   .usbMTPClass     = 0
const   .usbCOMClass     = 1

'=====  Function .fcUSBGetStatus  ========================================
const   .usbDisconnect   = 0
const   .usbStandby      = 1
const   .usbActive       = 2

'=====  Function .fcMTPStart =============================================
const   .mtpCancel       = 0
const   .mtpPullUSB      = 1
const   .mtpPowerOff     = 2

'=====  Function .fcMTPStartWay ==========================================
const   .mtpAutoStart    = 0
const   .mtpAprStart     = 1

'****************************************
'*  DEVCTRL.FN3 Parameters Definition   *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion      = 0
const   .fcLedCtl        = 1
const   .fcLedBlink      = 2

'****************************************
'*  CRYPT.FN3 Parameters Definition     *
'****************************************
'=====  Function Numbers  ================================================
'const   .fcVersion      = 0
const   .fcEncMD5        = 1
const   .fcEncDesEcb     = 2
const   .fcDecDesEcb     = 3
const   .fcEncTDesEcb    = 4
const   .fcDecTDesEcb    = 5
const   .fcEncDesCbc     = 6
const   .fcDecDesCbc     = 7
const   .fcEncTDesCbc    = 8
const   .fcDecTDesCbc    = 9
const   .fcEncAesEcb     = 10
const   .fcDecAesEcb     = 11
const   .fcEncAesCbc     = 12
const   .fcDecAesCbc     = 13




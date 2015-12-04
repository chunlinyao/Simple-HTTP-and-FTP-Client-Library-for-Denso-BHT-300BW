'-----------------------------------------------
' 定数宣言
'-----------------------------------------------
'◆ 定数定義■ Boolean定数(フラグ用) No	定数名	値	内容	備考
	const Lc.True = 1		'真	
	const Lc.False = 0		'偽	

'■ 表示モード定数No	定数名	値	内容	備考
	const Lc.SCR.ANK = 0		'ANKモード
	const Lc.SCR.KANJI = 1		'漢字モード
	const Lc.SCR.SMKANJI = 2	'縮小漢字モード(使用不可)

'■ 倍角属性定数No	定数名	値	内容	備考
	const Lc.WAT.NORMAL = 0	'標準サイズ
	const Lc.WAT.WIDTH = 1		'横倍角
	const Lc.WAT.HEIGHT = 2	'縦倍角	※将来拡張用
	const Lc.WAT.DOUBLE = 3	'四倍角	※将来拡張用

'■ 反転属性定数No	定数名	値	内容	備考
	const Lc.RAT.NORMAL = 0		'通常
	const Lc.RAT.REVERSE = 1		'反転

'■ 表示フォント定数No	定数名	値	内容	備考
	const Lc.DFT.NORMAL = 0	'標準フォント
	const Lc.DFT.SMALL = 1	'小フォント

'■ 文字色背景色定数No	定義名	値	内容	備考
	const Lc.COL.WHITE = &hFFFFFF00		'白	
	const Lc.COL.RED = &hFF000000			'赤	
	const Lc.COL.GREEN = &h00FF0000		'緑	
	const Lc.COL.BLUE = &h0000FF00		'青	
	const Lc.COL.BLACK = &h00000000		'黒	
	const Lc.COL.CYAN = &h00FFFF00		'シアン	
	const Lc.COL.MAGENTA = &hFF00FF00	'マゼンダ	
	const Lc.COL.YELLOW = &hFFFF0000	'黄	

'■ 折り返し有無フラグ定数No	定数名	値	内容	備考
	const Lc.ALF.NO = 0		'折り返し無し
	const Lc.ALF.YES = 1	'折り返し有り

'■ 入力モード定数No	定数名	値	内容	備考
	const Lc.CMD.NUMERIC = 0			'数字
	const Lc.CMD.ALPHABET = 1			'英字
	const Lc.CMD.ALPHANUMERIC = 2	'英数字

'■ デフォルト値表示後のカーソル位置定数No	定数名	値	内容	備考
	const Lc.DCP.ADDWRITE = 0		'追加書込み
	const Lc.DCP.OVERWRITE = 1	'上書き

'■ カーソルスイッチ定数No	定数名	値	内容	備考
	const Lc.CUR.NODISP = 0			'表示無し	※将来拡張用
	const Lc.CUR.UNDERLINE = 1	'アンダーライン	※将来拡張用
	const Lc.CUR.BLOCK = 2			'ブロック	
	const Lc.CUR.USER = 255				'ユーザー定義	※将来拡張用

'■ ブザー音量定数No	定数名	値	内容	備考
	const Lc.BVL.NOVOL = 0	'なし
	const Lc.BVL.SMALL = 1	'小
	const Lc.BVL.MEDIAM = 2	'中
	const Lc.BVL.LARGE = 3	'大

'■ ビープ出力時のバイブレータ設定定数No	定数名	値	内容	備考
	const Lc.VIB.OFF = 0	'非作動
	const Lc.VIB.ON = 1		'作動

'■ ブザー音程定数No	定数名	値	内容	備考
	const Lc.TNI.LOW = 0		'低
	const Lc.TNI.MEDDLE = 1	'中
	const Lc.TNI.HIGH = 2		'高

'■ バーコード読取モード定数No	定数名	値	内容	備考
	const Lc.BRM.M = 0	'
	const Lc.BRM.F = 1	'
	const Lc.BRM.A = 2	'
	const Lc.BRM.C = 3	'連続読取

'■ LED制御定数（バーコード読取時）No	定数名	値	内容	備考
	const Lc.LED.OFF = 0		'LED点灯なし
	const Lc.LED.GREEN = 1	'緑LED点灯
	const Lc.LED.RED = 2		'赤LED点灯
	const Lc.LED.BLUE = 3		'青LED点灯

'■ 入力デバイスからの入力待ち戻り値定数No	定数名	値	内容	備考
	const Lc.RIN.OK = 1		'成功
	const Lc.RIN.ESC = 2	'エスケープキー入力
	const Lc.RIN.ERR = 0		'エラー(パラメータ不正)

'■ 汎用戻り値定数No	定数名	値	内容	備考
	const Lc.RTN.OK = 0		'OK
	const Lc.RTN.NG = 1		'NG
	const Lc.RTN.ERR = -1	'ERROR(パラメータ不正)
	const Lc.RTN.WAR = -2	'WARNING(マスタ照合で、照合条件不正時に使用)
	const Lc.RTN.MTT = 2	'MoveToTail(マスタ照合で、後回し時に使用)

'■　YModem改行コード指定定数No	定数名	値	内容	備考
	const Lc.LFC.CRLF = 0	'CRLF	
	const Lc.LFC.LF = 1		'LF	
	const Lc.LFC.CR = 2		'CR	
	const Lc.LFC.NONE = 3	'改行なし

'■　レコード中の改行コードの扱い定数No	定数名	値	内容	備考
	const Lc.LFD.SEPA = 0	'データとしてみなさない	
	const Lc.LFD.DATA = 1	'データとみなす	

'■	データ受信時スペース扱いフラグ
	const Lc.DSP.OFF = 0		'受信時をとして扱わない
	const Lc.DSP.ON  = 1		'受信時をとして扱う

'■	リスト選択戻り値
	const Lc.LST.ENT = 1		'Entキー押下
	const Lc.LST.ESC = 2		'エスケープキー入力
	const Lc.LST.F5 = 3		'F5キー押下
	const Lc.LST.F6 = 4		'F6キー押下
	const Lc.LST.F7 = 5		'F7キー押下
	const Lc.LST.F8 = 6		'F8キー押下
	const Lc.LST.ERR = 0		'エラー(パラメータ不正)
'---------------END---------------

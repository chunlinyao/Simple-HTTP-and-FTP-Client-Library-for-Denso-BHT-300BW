'-----------------------------------------------
' �萔�錾
'-----------------------------------------------
'�� �萔��`�� Boolean�萔(�t���O�p) No	�萔��	�l	���e	���l
	const Lc.True = 1		'�^	
	const Lc.False = 0		'�U	

'�� �\�����[�h�萔No	�萔��	�l	���e	���l
	const Lc.SCR.ANK = 0		'ANK���[�h
	const Lc.SCR.KANJI = 1		'�������[�h
	const Lc.SCR.SMKANJI = 2	'�k���������[�h(�g�p�s��)

'�� �{�p�����萔No	�萔��	�l	���e	���l
	const Lc.WAT.NORMAL = 0	'�W���T�C�Y
	const Lc.WAT.WIDTH = 1		'���{�p
	const Lc.WAT.HEIGHT = 2	'�c�{�p	�������g���p
	const Lc.WAT.DOUBLE = 3	'�l�{�p	�������g���p

'�� ���]�����萔No	�萔��	�l	���e	���l
	Global Lc.RAT.NORMAL : Lc.RAT.NORMAL = 0		'�ʏ�
	Global Lc.RAT.REVERSE : Lc.RAT.REVERSE = 1		'���]

'�� �\���t�H���g�萔No	�萔��	�l	���e	���l
	Global Lc.DFT.NORMAL : Lc.DFT.NORMAL = 0	'�W���t�H���g
	Global Lc.DFT.SMALL : Lc.DFT.SMALL = 1	'���t�H���g

'�� �����F�E�w�i�F�萔No	��`��	�l	���e	���l
	Global Lc.COL.WHITE : Lc.COL.WHITE = &hFFFFFF00		'��	
	Global Lc.COL.RED : Lc.COL.RED = &hFF000000			'��	
	Global Lc.COL.GREEN : Lc.COL.GREEN = &h00FF0000		'��	
	Global Lc.COL.BLUE : Lc.COL.BLUE = &h0000FF00		'��	
	Global Lc.COL.BLACK : Lc.COL.BLACK = &h00000000		'��	
	Global Lc.COL.CYAN : Lc.COL.CYAN = &h00FFFF00		'�V�A��	
	Global Lc.COL.MAGENTA : Lc.COL.MAGENTA = &hFF00FF00	'�}�[���_	
	Global Lc.COL.YELLOW : Lc.COL.YELLOW = &hFFFF0000	'��	

'�� �܂�Ԃ��L���t���O�萔No	�萔��	�l	���e	���l
	Global Lc.ALF.NO : Lc.ALF.NO = 0		'�܂�Ԃ�����
	Global Lc.ALF.YES : Lc.ALF.YES = 1	'�܂�Ԃ��L��

'�� ���̓��[�h�萔No	�萔��	�l	���e	���l
	Global Lc.CMD.NUMERIC : Lc.CMD.NUMERIC = 0			'����
	Global Lc.CMD.ALPHABET : Lc.CMD.ALPHABET = 1			'�p��
	Global Lc.CMD.ALPHANUMERIC : Lc.CMD.ALPHANUMERIC = 2	'�p����

'�� �f�t�H���g�l�\����̃J�[�\���ʒu�萔No	�萔��	�l	���e	���l
	Global Lc.DCP.ADDWRITE : Lc.DCP.ADDWRITE = 0		'�ǉ�������
	Global Lc.DCP.OVERWRITE : Lc.DCP.OVERWRITE = 1	'�㏑��

'�� �J�[�\���X�C�b�`�萔No	�萔��	�l	���e	���l
	Global Lc.CUR.NODISP : Lc.CUR.NODISP = 0			'�\������	�������g���p
	Global Lc.CUR.UNDERLINE : Lc.CUR.UNDERLINE = 1	'�A���_�[���C��	�������g���p
	Global Lc.CUR.BLOCK : Lc.CUR.BLOCK = 2			'�u���b�N	
	Global Lc.CUR.USER : Lc.CUR.USER = 255				'���[�U�[��`����	�������g���p

'�� �u�U�[���ʒ萔No	�萔��	�l	���e	���l
	Global Lc.BVL.NOVOL : Lc.BVL.NOVOL = 0	'�Ȃ�
	Global Lc.BVL.SMALL : Lc.BVL.SMALL = 1	'��
	Global Lc.BVL.MEDIAM : Lc.BVL.MEDIAM = 2	'��
	Global Lc.BVL.LARGE : Lc.BVL.LARGE = 3	'��

'�� �r�[�v�o�͎��̃o�C�u���[�^�ݒ�萔No	�萔��	�l	���e	���l
	Global Lc.VIB.OFF : Lc.VIB.OFF = 0	'��쓮
	Global Lc.VIB.ON : Lc.VIB.ON = 1		'�쓮

'�� �u�U�[�����萔No	�萔��	�l	���e	���l
	Global Lc.TNI.LOW : Lc.TNI.LOW = 0		'��
	Global Lc.TNI.MEDDLE : Lc.TNI.MEDDLE = 1	'��
	Global Lc.TNI.HIGH : Lc.TNI.HIGH = 2		'��

'�� �o�[�R�[�h�ǎ惂�[�h�萔No	�萔��	�l	���e	���l
	Global Lc.BRM.M : Lc.BRM.M = 0	'����ؽ���Ӱ��
	Global Lc.BRM.F : Lc.BRM.F = 1	'��ĵ�Ӱ��
	Global Lc.BRM.A : Lc.BRM.A = 2	'���Ȱ�޽���Ӱ��
	Global Lc.BRM.C : Lc.BRM.C = 3	'�A���ǎ�Ӱ��

'�� LED����萔�i�o�[�R�[�h�ǎ掞�jNo	�萔��	�l	���e	���l
	Global Lc.LED.OFF : Lc.LED.OFF = 0		'LED�_���Ȃ�
	Global Lc.LED.GREEN : Lc.LED.GREEN = 1	'��LED�_��
	Global Lc.LED.RED : Lc.LED.RED = 2		'��LED�_��
	Global Lc.LED.BLUE : Lc.LED.BLUE = 3		'��LED�_��

'�� ���̓f�o�C�X����̓��͑҂��߂�l�萔No	�萔��	�l	���e	���l
	Global Lc.RIN.OK : Lc.RIN.OK = 1		'����
	Global Lc.RIN.ESC : Lc.RIN.ESC = 2	'�G�X�P�[�v�L�[����
	Global Lc.RIN.ERR :Lc.RIN.ERR = 0		'�G���[(�p�����[�^�s��)

'�� �ėp�߂�l�萔No	�萔��	�l	���e	���l
	Global Lc.RTN.OK : Lc.RTN.OK = 0		'OK
	Global Lc.RTN.NG : Lc.RTN.NG = 1		'NG
	Global Lc.RTN.ERR : Lc.RTN.ERR = -1	'ERROR(�p�����[�^�s��)
	Global Lc.RTN.WAR : Lc.RTN.WAR = -2	'WARNING(�}�X�^�ƍ��ŁA�ƍ������s�����Ɏg�p)
	Global Lc.RTN.MTT : Lc.RTN.MTT = 2	'MoveToTail(�}�X�^�ƍ��ŁA��񂵎��Ɏg�p)

'���@YModem���s�R�[�h�w��萔No	�萔��	�l	���e	���l
	Global Lc.LFC.CRLF : Lc.LFC.CRLF = 0	'CRLF	
	Global Lc.LFC.LF : Lc.LFC.LF = 1		'LF	
	Global Lc.LFC.CR : Lc.LFC.CR = 2		'CR	
	Global Lc.LFC.NONE : Lc.LFC.NONE = 3	'���s�Ȃ�

'���@���R�[�h���̉��s�R�[�h�̈����萔No	�萔��	�l	���e	���l
	Global Lc.LFD.SEPA : Lc.LFD.SEPA = 0	'�f�[�^�Ƃ��Ă݂Ȃ��Ȃ�	
	Global Lc.LFD.DATA : Lc.LFD.DATA = 1	'�f�[�^�Ƃ݂Ȃ�	

'��	�f�[�^��M���X�y�[�X�����t���O
	Global Lc.DSP.OFF : Lc.DSP.OFF = 0		'̧�َ�M����߰����ް��Ƃ��Ĉ���Ȃ�
	Global Lc.DSP.ON  : Lc.DSP.ON  = 1		'̧�َ�M����߰����ް��Ƃ��Ĉ���

'��	���X�g�I��߂�l
	Global Lc.LST.ENT : Lc.LST.ENT = 1		'Ent�L�[����
	Global Lc.LST.ESC : Lc.LST.ESC = 2		'�G�X�P�[�v�L�[����
	Global Lc.LST.F5  : Lc.LST.F5 = 3		'F5�L�[����
	Global Lc.LST.F6  : Lc.LST.F6 = 4		'F6�L�[����
	Global Lc.LST.F7  : Lc.LST.F7 = 5		'F7�L�[����
	Global Lc.LST.F8  : Lc.LST.F8 = 6		'F8�L�[����
	Global Lc.LST.ERR : Lc.LST.ERR = 0		'�G���[(�p�����[�^�s��)
'---------------END---------------
;==================================================================
;These lines are used to 'fix' TI's include files to work with TASM
;==================================================================
#DEFINE equ 							=
#DEFINE EQU 							=
#DEFINE 0FCH							0FCh
#DEFINE 0D4H							0D4h
#DEFINE 0E8H    						0E8h
#DEFINE 0C0H							0C0h

;====================================================================
;These are common zshell and usgard calls that are known on the TI-86
;If possible, use the call that is commented next to the one you want
;====================================================================
MUL_HL = $4547

CP_HL_DE = $403C
LD_HL_MHL = $4010
GET_KEY = $5371
UNPACK_HL = $4044

D_HL_DECI = $4a33

BUSY_OFF = $4ab1			;_runindoff
BUSY_ON = $4aad				;_runindicon
D_ZT_STR = $4a37			;_puts
D_LT_STR = $4a3b			;_putps
TX_CHARPUT = $4a2b			;_putc
D_ZM_STR = $4aa5			;_vputs
D_LM_STR = $4aa9			;_vputsn
M_CHARPUT = $4aa1			;_vputmap
CLEARLCD = $4a7e			;_clrLCD


;========================================================
;These are memory addresses common for zshell programming
;If possible, use the one on the right
;========================================================

CONTRAST = $c008			
CURSOR_ROW = $c00f			;_curRow
CURSOR_COL = $c010			;_curCol
BUSY_COUNTER = $c087 
BUSY_BITMAP	= $c088
TEXT_MEM = $c0f9			;_textShadow
CURSOR_X = $c37c			;_penCol
CURSOR_Y = $c37d			;_penRow
GRAPH_MEM = $c9fa			;_plotSScreen
TEXT_MEM2 = $cfab			;_cmdShadow
VAT_END = $d298
VAT_START = $8000
VIDEO_MEM = $fc00

;==================================================================
;all the keys are used with <call GET_KEY>, not TI's <call _getkey>
;==================================================================
;exitcall.asm
;sikware - adam pluth
[SECTION .text]
global _start
_start:
	mov	ebx,0 ;exit code 0=normal exit
	mov 	eax,1 ;exit command to kernal
	int	0x80  ;intterupt 80 hex, call kernel

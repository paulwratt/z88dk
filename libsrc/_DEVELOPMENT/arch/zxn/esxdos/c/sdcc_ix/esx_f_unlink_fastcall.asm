; unsigned char esx_f_unlink(unsigned char *filename)

SECTION code_esxdos

PUBLIC _esx_f_unlink_fastcall

EXTERN asm_esx_f_unlink

_esx_f_unlink_fastcall:

   push ix
   
   call asm_esx_f_unlink

   pop ix
   ret

; unsigned char esx_m_tapein_info(uint8_t *drive,unsigned char *filename)

SECTION code_esxdos

PUBLIC esx_m_tapein_info_callee

EXTERN asm_esx_m_tapein_info

esx_m_tapein_info_callee:

   pop af
   pop hl
   pop de
   push af

   jp asm_esx_m_tapein_info


; void *w_vector_max_size(w_vector_t *v)

XDEF w_vector_max_size

w_vector_max_size:

   pop af
   pop hl
   
   push hl
   push af

   INCLUDE "../../z80/asm_w_vector_max_size.asm"

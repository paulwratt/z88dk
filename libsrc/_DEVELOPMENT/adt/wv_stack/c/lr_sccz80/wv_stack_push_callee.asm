
; int wv_stack_push(wv_stack_t *s, void *item)

XDEF wv_stack_push_callee

LIB w_vector_append_callee

defc wv_stack_push_callee = w_vector_append_callee

INCLUDE "../../z80/asm_wv_stack_push.asm"

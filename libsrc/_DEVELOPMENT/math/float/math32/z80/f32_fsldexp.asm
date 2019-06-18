;
;  feilipu, 2019 May
;
;  This Source Code Form is subject to the terms of the Mozilla Public
;  License, v. 2.0. If a copy of the MPL was not distributed with this
;  file, You can obtain one at http://mozilla.org/MPL/2.0/.
;
;-------------------------------------------------------------------------
; m32_ldexp - z80, z180, z80-zxn load exponent
;-------------------------------------------------------------------------
;
;   float m32_ldexpf (float x, int16_t pw2)
;   {
;       union float_long fl;
;       int32_t e;
;
;       fl.f = x;
;
;       e = (fl.l >> 23) & 0x000000ff;
;       e += pw2;
;       fl.l = ((e & 0xff) << 23) | (fl.l & 0x807fffff);
;
;       return(fl.f);
;   }
;
;-------------------------------------------------------------------------
; FIXME clocks
;-------------------------------------------------------------------------

SECTION code_clib
SECTION code_fp_math32

EXTERN m32_fszero_fastcall
EXTERN m32_fsmin_fastcall

PUBLIC m32_fsldexp_callee
PUBLIC _m32_ldexpf


; float ldexpf (float x, int16_t pw2);
._m32_ldexpf

.m32_fsldexp_callee
    ; evaluation of fraction and exponent
    ;
    ; enter : stack = int16_t pw2, float x, ret
    ;
    ; exit  : dehl  = 32-bit result
    ;         carry reset
    ;
    ; uses  : af, bc, de, hl

    pop af                      ; return
    pop hl                      ; (float)x in dehl
    pop de
    pop bc                      ; pw2 maximum int8_t actually
    push af                     ; return on stack

    sla e                       ; get the exponent
    rl d
    jp Z,m32_fszero_fastcall    ; return IEEE zero
    rr e                        ; save the sign in e[7]

    ld a,d
    add c                       ; pw2
    ld d,a                      ; exponent returned

    sla e                       ; restore sign to C
    rr d
    rr e

    and a                       ; check for zero exponent
    ret NZ                      ; return IEEE DEHL
    jp m32_fsmin_fastcall       ; otherwise return IEEE underflow zero 

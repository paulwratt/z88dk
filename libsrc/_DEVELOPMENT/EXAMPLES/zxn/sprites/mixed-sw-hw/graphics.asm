SECTION rodata_user

;; SP1 Software Sprite
;; Masked Sprite Happy Face

PUBLIC _gfx_happy_face

   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000

_gfx_happy_face:

   defb @11000011, @00111100
   defb @10000001, @01000010
   defb @00000000, @10100101
   defb @00000000, @10000001
   defb @00000000, @10100101
   defb @00000000, @10011001
   defb @10000001, @01000010
   defb @11000011, @00111100

   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000
   defb @11111111, @00000000

;; Splat
;; SP1 Background UDG

PUBLIC _gfx_splat

_gfx_splat:

   defb @10101010
   defb @01010101
   defb @10101010
   defb @01010101
   defb @10101010
   defb @01010101
   defb @10101010
   defb @01010101

;; ZX Next Hardware Sprite
;; Sword $E3 is transparent

PUBLIC _gfx_sword

EXTERN __ZXN_RGB332_NEXTOS_BRIGHT_MAGENTA

defc TRAN = __ZXN_RGB332_NEXTOS_BRIGHT_MAGENTA

_gfx_sword:

   defb 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN
   defb 0x04, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x04, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN
   defb 0x04, 0xFF, 0xFB, 0xFB, 0xFB, 0xFF, 0x04, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN
   defb 0x04, 0xFF, 0xFB, 0xF5, 0xF5, 0xFB, 0xFF, 0x04, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN
   defb 0x04, 0xFF, 0xFB, 0xF5, 0xA8, 0xA8, 0xFB, 0xFF, 0x04, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN
   defb 0x04, 0xFF, 0xFF, 0xFB, 0xA8, 0x44, 0xA8, 0xFB, 0xFF, 0x04, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN
   defb 0x04, 0x04, 0x04, 0xFF, 0xFB, 0xA8, 0x44, 0xA8, 0xFB, 0xFF, 0x04, TRAN, TRAN, TRAN, TRAN, TRAN
   defb TRAN, TRAN, TRAN, 0x04, 0xFF, 0xFB, 0xA8, 0x44, 0x44, 0xFB, 0xFF, 0x04, TRAN, 0x04, TRAN, TRAN
   defb TRAN, TRAN, TRAN, TRAN, 0x04, 0xFF, 0xFB, 0x44, 0x44, 0x44, 0xFB, 0xFF, 0x04, 0x4D, 0x04, TRAN
   defb TRAN, TRAN, TRAN, TRAN, TRAN, 0x04, 0xFF, 0xFB, 0x44, 0x44, 0x44, 0x44, 0xFA, 0x4D, 0x04, TRAN
   defb TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, 0x04, 0xFF, 0xFB, 0x44, 0xFF, 0xF5, 0x44, 0x04, TRAN, TRAN
   defb TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, 0x04, 0xFF, 0x44, 0xF5, 0xA8, 0x04, TRAN, TRAN, TRAN
   defb TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, 0x04, 0xFA, 0x44, 0x04, 0xA8, 0x04, TRAN, TRAN
   defb TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, 0x04, 0x4D, 0x4D, 0x04, TRAN, 0x04, 0xF5, 0x04, TRAN
   defb TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, 0x04, 0x04, TRAN, TRAN, TRAN, 0x04, 0xFA, 0x04
   defb TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, TRAN, 0x04, 0x04

;; Layer 2 Tile 16x16

PUBLIC _gfx_tile

EXTERN __ZXN_RGB332_ARCADE29_LGRAY
EXTERN __ZXN_RGB332_ARCADE29_BLUEGRAY




_gfx_tile:
   
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY
   defb __ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY
   defb __ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_BLUEGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY,__ZXN_RGB332_ARCADE29_LGRAY




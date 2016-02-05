
// automatically generated by m4 from headers in proto subdir


#ifndef _INTRINSIC_H
#define _INTRINSIC_H

#ifdef __SDCC

#define intrinsic_label(name)  { extern void intrinsic_label_##name(void) __preserves_regs(a,b,c,d,e,h,l); intrinsic_label_##name(); }
#define intrinsic_load16(address)  ((unsigned int)intrinsic_load16_##address())
#define intrinsic_store16(address,value)  ((unsigned int)(intrinsic_store16_address_##address(),intrinsic_store16_value_##value()))

#define intrinsic_in8(port)  ((unsigned char)intrinsic_in8_port_##port())
#define intrinsic_out8(port,value)  ((unsigned char)(intrinsic_out8_port_##port(),intrinsic_out8_value_##value()))
#define intrinsic_in16(port)  ((unsigned char)intrinsic_in16_port_##port())
#define intrinsic_out16(port,value)  ((unsigned char)(intrinsic_out16_port_##port(),intrinsic_out16_value_##value()))

#else

#define intrinsic_label(name)  asm("name:");
#define intrinsic_load16(address)  ((unsigned int)intrinsic_load16_##address())
#define intrinsic_store16(address,value)  ((unsigned int)(intrinsic_store16_address_##address(),intrinsic_store16_value_##value()))

#define intrinsic_in8(port)  ((unsigned char)intrinsic_in8_port_##port())
#define intrinsic_out8(port,value)  ((unsigned char)(intrinsic_out8_port_##port(),intrinsic_out8_value_##value()))
#define intrinsic_in16(port)  ((unsigned char)intrinsic_in16_port_##port())
#define intrinsic_out16(port,value)  ((unsigned char)(intrinsic_out16_port_##port(),intrinsic_out16_value_##value()))

#endif

extern void intrinsic_di(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_ei(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_halt(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_reti(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_retn(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_im_0(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_im_1(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_im_2(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_nop(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_push_af(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_push_bc(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_push_de(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_push_hl(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_push_ix(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_push_iy(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_pop_af(void) __preserves_regs(b,c,d,e,h,l);

extern void intrinsic_pop_bc(void) __preserves_regs(a,d,e,h,l);

extern void intrinsic_pop_de(void) __preserves_regs(a,b,c,h,l);

extern void intrinsic_pop_hl(void) __preserves_regs(a,b,c,d,e);

extern void intrinsic_pop_ix(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_pop_iy(void) __preserves_regs(a,b,c,d,e,h,l);

extern void intrinsic_exx(void) __preserves_regs(a);


#endif

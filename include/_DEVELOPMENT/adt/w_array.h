
#ifndef _ADT_W_ARRAY_H
#define _ADT_W_ARRAY_H

#include <_DEVELOPMENT/stddef.h>

// DATA STRUCTURES

typedef struct w_array_s
{

   void       *data;
   size_t      size;
   size_t      capacity;

} w_array_t;

#if __SDCC | __SDCC_IX | __SDCC_IY

// SDCC

extern size_t      w_array_append(w_array_t *a, void *item);
extern size_t      w_array_append_n(w_array_t *a, size_t n, void *item);
extern void       *w_array_at(w_array_t *a, size_t idx);
extern void       *w_array_back(w_array_t *a);
extern size_t      w_array_capacity(w_array_t *a);
extern void        w_array_clear(w_array_t *a);
extern void       *w_array_data(w_array_t *a);
extern void        w_array_destroy(w_array_t *a);
extern int         w_array_empty(w_array_t *a);
extern size_t      w_array_erase(w_array_t *a, size_t idx);
extern size_t      w_array_erase_range(w_array_t *a, size_t idx_first, size_t idx_last);
extern void       *w_array_front(w_array_t *a);
extern w_array_t  *w_array_init(void *p, void *data, size_t capacity);
extern size_t      w_array_insert(w_array_t *a, size_t idx, void *item);
extern size_t      w_array_insert_n(w_array_t *a, size_t idx, size_t n, void *item);
extern void       *w_array_pop_back(w_array_t *a);
extern size_t      w_array_push_back(w_array_t *a, void *item);
extern int         w_array_resize(w_array_t *a, size_t n);
extern size_t      w_array_size(w_array_t *a);

#else

// SCCZ80

extern size_t     __LIB__               w_array_append(w_array_t *a, void *item);
extern size_t     __LIB__               w_array_append_n(w_array_t *a, size_t n, void *item);
extern void       __LIB__              *w_array_at(w_array_t *a, size_t idx);
extern void       __LIB__ __FASTCALL__ *w_array_back(w_array_t *a);
extern size_t     __LIB__ __FASTCALL__  w_array_capacity(w_array_t *a);
extern void       __LIB__ __FASTCALL__  w_array_clear(w_array_t *a);
extern void       __LIB__ __FASTCALL__ *w_array_data(w_array_t *a);
extern void       __LIB__ __FASTCALL__  w_array_destroy(w_array_t *a);
extern int        __LIB__ __FASTCALL__  w_array_empty(w_array_t *a);
extern size_t     __LIB__               w_array_erase(w_array_t *a, size_t idx);
extern size_t     __LIB__               w_array_erase_range(w_array_t *a, size_t idx_first, size_t idx_last);
extern void       __LIB__ __FASTCALL__ *w_array_front(w_array_t *a);
extern w_array_t  __LIB__              *w_array_init(void *p, void *data, size_t capacity);
extern size_t     __LIB__               w_array_insert(w_array_t *a, size_t idx, void *item);
extern size_t     __LIB__               w_array_insert_n(w_array_t *a, size_t idx, size_t n, void *item);
extern void       __LIB__ __FASTCALL__ *w_array_pop_back(w_array_t *a);
extern size_t     __LIB__               w_array_push_back(w_array_t *a, void *item);
extern int        __LIB__               w_array_resize(w_array_t *a, size_t n);
extern size_t     __LIB__ __FASTCALL__  w_array_size(w_array_t *a);

// SCCZ80 CALLEE LINKAGE

extern size_t     __LIB__ __CALLEE__    w_array_append_callee(w_array_t *a, void *item);
extern size_t     __LIB__ __CALLEE__    w_array_append_n_callee(w_array_t *a, size_t n, void *item);
extern void       __LIB__ __CALLEE__   *w_array_at_callee(w_array_t *a, size_t idx);
extern size_t     __LIB__ __CALLEE__    w_array_erase_callee(w_array_t *a, size_t idx);
extern size_t     __LIB__ __CALLEE__    w_array_erase_range_callee(w_array_t *a, size_t idx_first, size_t idx_last);
extern w_array_t  __LIB__ __CALLEE__   *w_array_init_callee(void *p, void *data, size_t capacity);
extern size_t     __LIB__ __CALLEE__    w_array_insert_callee(w_array_t *a, size_t idx, void *item);
extern size_t     __LIB__ __CALLEE__    w_array_insert_n_callee(w_array_t *a, size_t idx, size_t n, void *item);
extern size_t     __LIB__ __CALLEE__    w_array_push_back_callee(w_array_t *a, void *item);
extern int        __LIB__ __CALLEE__    w_array_resize_callee(w_array_t *a, size_t n);

// SCCZ80 MAKE CALLEE LINKAGE THE DEFAULT

#define w_array_append(a,b)                      w_array_append_callee(a,b)
#define w_array_append_n(a,b,c)                  w_array_append_n_callee(a,b,c)
#define w_array_at(a,b)                          w_array_at_callee(a,b)
#define w_array_erase(a,b)                       w_array_erase_callee(a,b)
#define w_array_erase_range(a,b,c)               w_array_erase_range_callee(a,b,c)
#define w_array_init(a,b,c)                      w_array_init_callee(a,b,c)
#define w_array_insert(a,b,c)                    w_array_insert_callee(a,b,c)
#define w_array_insert_n(a,b,c,d)                w_array_insert_n_callee(a,b,c,d)
#define w_array_push_back(a,b)                   w_array_push_back_callee(a,b)
#define w_array_resize(a,b)                      w_array_resize_callee(a,b)

#endif

#endif

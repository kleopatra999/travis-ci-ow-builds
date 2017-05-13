/*
 *  malloc.h    Memory allocation functions
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2002-2016 The Open Watcom Contributors. All Rights Reserved.
 * Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */
#ifndef _MALLOC_H_INCLUDED
#define _MALLOC_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _M_IX86
 #pragma pack( __push, 1 )
#else
 #pragma pack( __push, 8 )
#endif

#ifdef __cplusplus
 #ifndef _STDSIZE_T_DEFINED
 #define _STDSIZE_T_DEFINED
  namespace std {
    typedef unsigned size_t;
  }
  typedef std::size_t _w_size_t;
 #endif
 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  using std::size_t;
 #endif
#else  /* __cplusplus not defined */
 #ifndef _SIZE_T_DEFINED
 #define _SIZE_T_DEFINED
  #define _SIZE_T_DEFINED_
  typedef unsigned size_t;
  typedef size_t   _w_size_t;
 #endif
#endif /* __cplusplus not defined */

#ifndef NULL
 #ifdef __cplusplus
  #if !defined(_M_I86) || defined(__SMALL__) || defined(__MEDIUM__)
   #define NULL 0
  #else
   #define NULL 0L
  #endif 
 #else
  #define NULL ((void *)0)
 #endif
#endif

#ifndef alloca
 _WCRTLINK extern unsigned stackavail( void );
 _WCRTLINK extern unsigned _stackavail( void );
 #ifdef _M_IX86
  _WCRTLINK extern void __based(__segname("_STACK")) *alloca(_w_size_t __size);
  _WCRTLINK extern void __based(__segname("_STACK")) *_alloca(_w_size_t __size);
  extern void __based(__segname("_STACK")) *__doalloca(_w_size_t __size);
  #pragma aux stackavail __modify __nomemory
  #pragma aux _stackavail __modify __nomemory

  #define __ALLOCA_ALIGN( s )   (((s)+(sizeof(int)-1))&~(sizeof(int)-1))
  #define __alloca( s )         __doalloca(__ALLOCA_ALIGN(s))

  #if defined( _M_I86 )
   #define alloca( s )  ((__ALLOCA_ALIGN(s)<stackavail())?__alloca(s):(void __based(__segname("_STACK")) *)0)
   #define _alloca( s ) ((__ALLOCA_ALIGN(s)<stackavail())?__alloca(s):(void __based(__segname("_STACK")) *)0)
  #else
   extern void __GRO(_w_size_t __size);
   #pragma aux __GRO "*" __parm __routine []
   #define alloca( s )  ((__ALLOCA_ALIGN(s)<stackavail())?(__GRO(__ALLOCA_ALIGN(s)),__alloca(s)):(void __based(__segname("_STACK")) *)0)
   #define _alloca( s ) ((__ALLOCA_ALIGN(s)<stackavail())?(__GRO(__ALLOCA_ALIGN(s)),__alloca(s)):(void __based(__segname("_STACK")) *)0)
  #endif

  #if defined( _M_I86 )
    #pragma aux __doalloca = \
            "sub sp,ax"     \
            __parm __nomemory [__ax] __value [__sp] __modify __exact __nomemory [__sp]
  #else
     #pragma aux __doalloca = \
            "sub esp,eax"   \
            __parm __nomemory [__eax] __value [__esp] __modify __exact __nomemory [__esp]
  #endif
 #else
  _WCRTLINK extern void *alloca(_w_size_t __size);
  _WCRTLINK extern void *_alloca(_w_size_t __size);
  extern void *__builtin_alloca(_w_size_t __size);
  #pragma intrinsic(__builtin_alloca)

  #define __alloca( s ) (__builtin_alloca(s))

  #define alloca( s )   ((s<stackavail())?__alloca(s):(void *)0)
  #define _alloca( s )  ((s<stackavail())?__alloca(s):(void *)0)
 #endif
#endif

#define _HEAPOK         0
#define _HEAPEMPTY      1       /* heap isn't initialized */
#define _HEAPBADBEGIN   2       /* heap header is corrupted */
#define _HEAPBADNODE    3       /* heap entry is corrupted */
#define _HEAPEND        4       /* end of heap entries (_heapwalk) */
#define _HEAPBADPTR     5       /* invalid heap entry pointer (_heapwalk) */

#define _USEDENTRY      0
#define _FREEENTRY      1

typedef struct _heapinfo {
    void _WCFAR *_pentry;               /* heap pointer */
    size_t      _size;                  /* heap entry size */
    int         _useflag;               /* heap entry 'in-use' flag */
} _HEAPINFO;

_WCRTLINK extern int _heapenable( int __enabled );
_WCRTLINK extern int _heapchk( void );
_WCRTLINK extern int _nheapchk( void );
_WCRTLINK extern int _heapset( unsigned int __fill );
_WCRTLINK extern int _nheapset( unsigned int __fill );
_WCRTLINK extern int _heapwalk( struct _heapinfo *__entry );
_WCRTLINK extern int _nheapwalk( struct _heapinfo *__entry );

_WCRTLINK extern void _heapgrow( void );
_WCRTLINK extern void _nheapgrow( void );
_WCRTLINK extern int _heapmin( void );
_WCRTLINK extern int _nheapmin( void );
_WCRTLINK extern int _heapshrink( void );
_WCRTLINK extern int _nheapshrink( void );

#if defined(_M_I86)
_WCRTLINK extern int _fheapchk( void );
_WCRTLINK extern int _fheapset( unsigned int __fill );
_WCRTLINK extern int _fheapwalk( struct _heapinfo *__entry );

_WCRTLINK extern void _fheapgrow( void );
_WCRTLINK extern int _fheapmin( void );
_WCRTLINK extern int _fheapshrink( void );
#endif

_WCRTLINK extern int __nmemneed( size_t );
#if !defined(_ncalloc) || !defined(_INC_WINDOWSX)
_WCRTLINK extern void _WCNEAR *_ncalloc( size_t __n, size_t __size );
#endif
_WCRTLINK extern void *_expand( void *__ptr, size_t __size );
#if !defined(_nexpand) || !defined(_INC_WINDOWSX)
_WCRTLINK extern void _WCNEAR *_nexpand( void _WCNEAR *__ptr, size_t __size );
#endif
_WCRTLINK extern unsigned int _freect( size_t __size );
#if !defined(_nfree) || !defined(_INC_WINDOWSX)
_WCRTLINK extern void _nfree( void _WCNEAR *__ptr );
#endif
#if !defined(_nmalloc) || !defined(_INC_WINDOWSX)
_WCRTLINK extern void _WCNEAR *_nmalloc( size_t __size );
#endif
#if !defined(_nrealloc) || !defined(_INC_WINDOWSX)
_WCRTLINK extern void _WCNEAR *_nrealloc( void _WCNEAR *__ptr, size_t __size );
#endif
_WCRTLINK extern size_t _msize( void *__ptr );
#if !defined(_nmsize) || !defined(_INC_WINDOWSX)
_WCRTLINK extern size_t _nmsize( void _WCNEAR *__ptr );
#endif

#if defined(_M_I86)
_WCRTLINK extern int __fmemneed( size_t );
#if !defined(_fcalloc) || !defined(_INC_WINDOWSX)
_WCRTLINK extern void _WCFAR *_fcalloc( size_t __n, size_t __size );
#endif
#if !defined(_fexpand) || !defined(_INC_WINDOWSX)
_WCRTLINK extern void _WCFAR *_fexpand( void _WCFAR *__ptr, size_t __size );
#endif
#if !defined(_ffree) || !defined(_INC_WINDOWSX)
_WCRTLINK extern void _ffree( void _WCFAR *__ptr );
#endif
#if !defined(_fmalloc) || !defined(_INC_WINDOWSX)
_WCRTLINK extern void _WCFAR *_fmalloc( size_t __size );
#endif
_WCRTLINK extern void _WCHUGE *halloc( long __n, size_t __size );
_WCRTLINK extern void hfree( void _WCHUGE * );
#if !defined(_frealloc) || !defined(_INC_WINDOWSX)
_WCRTLINK extern void _WCFAR *_frealloc( void _WCFAR *__ptr, size_t __size );
#endif
#if !defined(_fmsize) || !defined(_INC_WINDOWSX)
_WCRTLINK extern size_t _fmsize( void _WCFAR *__ptr );
#endif
#endif

_WCRTLINK extern size_t _memavl( void );
_WCRTLINK extern size_t _memmax( void );

#ifdef __cplusplus
namespace std {
#endif

_WCRTLINK extern void *calloc( size_t __n, size_t __size );
_WCRTLINK extern void free( void *__ptr );
_WCRTLINK extern void *malloc( size_t __size );
_WCRTLINK extern void *realloc( void *__ptr, size_t __size );

#if defined(__OS2__) && !defined(_M_I86)
_WCRTLINK extern int _use_os2_high_mem( int __himem );     /* Returns prior setting */
_WCRTLINK extern void *_os2lmalloc( size_t __size );
_WCRTLINK extern void *_os2hmalloc( size_t __size );
#endif

#ifdef __cplusplus
}
using std::calloc;
using std::free;
using std::malloc;
using std::realloc;
#endif

#if defined(_M_I86)
/* based heap function prototypes */

#define _NULLSEG ((__segment)0)
#define _NULLOFF ((void __based(void) *)~0)

_WCRTLINK extern int _bfreeseg( __segment __seg );
_WCRTLINK extern __segment _bheapseg( size_t size );
_WCRTLINK extern void __based(void) *_bcalloc( __segment __seg, size_t __num, size_t __size );
_WCRTLINK extern void __based(void) *_bexpand( __segment __seg, void __based(void) *__mem, size_t __size );
_WCRTLINK extern void _bfree( __segment __seg, void __based(void) *__mem );
_WCRTLINK extern int _bheapchk( __segment __seg );
_WCRTLINK extern int _bheapmin( __segment __seg );
_WCRTLINK extern int _bheapshrink( __segment __seg );
_WCRTLINK extern int _bheapset( __segment __seg, unsigned int __fill );
_WCRTLINK extern int _bheapwalk( __segment __seg, struct _heapinfo *__entry );
_WCRTLINK extern void __based(void) *_bmalloc( __segment __seg, size_t __size );
_WCRTLINK extern size_t _bmsize( __segment __seg, void __based(void) *__mem );
_WCRTLINK extern void __based(void) *_brealloc( __segment __seg, void __based(void) *__mem, size_t __size );
#endif

#pragma pack( __pop )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif

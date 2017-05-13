//
//  complex.h   Complex Numbers
//
// =========================================================================
//
//                          Open Watcom Project
//
// Copyright (c) 2002-2016 The Open Watcom Contributors. All Rights Reserved.
// Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
//
//    This file is automatically generated. Do not edit directly.
//
// =========================================================================
//
#ifndef _COMPLEX_H_INCLUDED
#define _COMPLEX_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __cplusplus
 #if __STDC_VERSION__ < 199901L
  #error complex.h is for use with C++ or C99
 #else

#define complex _Complex
/* NB. This will change, it's not C99 standard */
#define _Complex_I ((float _Complex)(_Imaginary)1.0f)

#define imaginary _Imaginary
#define _Imaginary_I ((_Imaginary)_Complex_I)

#define I _Imaginary_I

/* Trigonometric Functions */
double complex cacos(double complex z);
float complex cacosf(float complex z);
long double complex cacosl(long double complex z);

double complex casin(double complex z);
float complex casinf(float complex z);
long double complex casinl(long double complex z);

double complex catan(double complex z);
float complex catanf(float complex z);
long double complex catanl(long double complex z);

double complex ccos(double complex z);
float complex ccosf(float complex z);
long double complex ccosl(long double complex z);

double complex csin(double complex z);
float complex csinf(float complex z);
long double complex csinl(long double complex z);

double complex ctan(double complex z);
float complex ctanf(float complex z);
long double complex ctanl(long double complex z);

/* Hyperbolic Functions */
double complex cacosh(double complex z);
float complex cacosfh(float complex z);
long double complex cacoshl(long double complex z);

double complex casinh(double complex z);
float complex casinhf(float complex z);
long double complex casinhl(long double complex z);

double complex catanh(double complex z);
float complex catanhf(float complex z);
long double complex catanhl(long double complex z);

double complex ccosh(double complex z);
float complex ccosfh(float complex z);
long double complex ccoshl(long double complex z);

double complex csinh(double complex z);
float complex csinhf(float complex z);
long double complex csinhl(long double complex z);

double complex ctanh(double complex z);
float complex ctanhf(float complex z);
long double complex ctanhl(long double complex z);

/* Exponential and Logarithmic Functions */
double complex cexp(double complex z);
float complex cexpf(float complex z);
long double complex cexpl(long double complex z);

double complex clog(double complex z);
float complex clogf(float complex z);
long double complex clogl(long double complex z);

/* Power and Absolute-value Functions */
double cabs(double complex z);
float cabsf(float complex z);
long double cabsl(long double complex z);

double complex cpow(double complex x, double complex y);
float complex cpowf(float complex x, float complex y);
long double complex cpowl(long double complex x, long double complex y);

double complex csqrt(double complex z);
float complex csqrtf(float complex z);
long double complex csqrtl(long double complex z);

/* Manipulation Functions */
double carg(double complex z);
float cargf(float complex z);
long double cargl(long double complex z);

double cimag(double complex z);
float cimagf(float complex z);
long double cimagl(long double complex z);

double complex conj(double complex z);
float complex conjf(float complex z);
long double complex conjl(long double complex z);

double complex cproj(double complex z);
float complex cprojf(float complex z);
long double complex cprojl(long double complex z);

double creal(double complex z);
float crealf(float complex z);
long double creall(long double complex z);

 #endif
#else  /* __cplusplus */

#if !defined(_M_IX86)
 #pragma library( "cplx.lib" )
#elif defined(__SW_FPC)
 #if defined(_M_I86)
  #if defined(__MEDIUM__)
   #pragma library ( "cplxm.lib" )
  #elif defined(__COMPACT__)
   #pragma library ( "cplxc.lib" )
  #elif defined(__LARGE__)
   #pragma library ( "cplxl.lib" )
  #elif defined(__HUGE__)
   #pragma library ( "cplxh.lib" )
  #else
   #pragma library ( "cplxs.lib" )
  #endif
 #else
  #if defined(__3S__)
   #pragma library ( "cplx3s.lib" )
  #else
   #pragma library ( "cplx3r.lib" )
  #endif
 #endif
#else
 #if defined(_M_I86)
  #if defined(__MEDIUM__)
   #pragma library ( "cplx7m.lib" )
  #elif defined(__COMPACT__)
   #pragma library ( "cplx7c.lib" )
  #elif defined(__LARGE__)
   #pragma library ( "cplx7l.lib" )
  #elif defined(__HUGE__)
   #pragma library ( "cplx7h.lib" )
  #else
   #pragma library ( "cplx7s.lib" )
  #endif
 #else
  #if defined(__3S__)
   #pragma library ( "cplx73s.lib" )
  #else
   #pragma library ( "cplx73r.lib" )
  #endif
 #endif
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _IOSTREAM_H_INCLUDED
 #include <iostream.h>
#endif

#ifdef _M_IX86
 #pragma pack( __push, 1 )
#else
 #pragma pack( __push, 8 )
#endif

class _WPRTLINK Complex {
    double  __r;
    double  __i;

public:
    Complex();
    Complex( Complex const & );
    Complex( double __real, double __imag = 0.0 );

    Complex &operator = ( Complex const & );
    Complex &operator = ( double );
    Complex &operator += ( Complex const & );
    Complex &operator += ( double );
    Complex &operator -= ( Complex const & );
    Complex &operator -= ( double );
    Complex &operator *= ( Complex const & );
    Complex &operator *= ( double );
    Complex &operator /= ( Complex const & );
    Complex &operator /= ( double );

    Complex operator + () const;
    Complex operator - () const;

    double imag () const;
    double real () const;

    friend _WPRTLINK istream &operator >> ( istream &, Complex & );
    friend _WPRTLINK ostream &operator << ( ostream &, Complex const & );
};

#pragma pack( __pop )

typedef Complex complex;        // for compatibility

_WPRTLINK extern Complex operator + ( Complex const &, Complex const & );
_WPRTLINK extern Complex operator + ( Complex const &, double );
_WPRTLINK extern Complex operator + ( double,         Complex const & );
_WPRTLINK extern Complex operator - ( Complex const &, Complex const & );
_WPRTLINK extern Complex operator - ( Complex const &, double );
_WPRTLINK extern Complex operator - ( double,         Complex const & );
_WPRTLINK extern Complex operator * ( Complex const &, Complex const & );
_WPRTLINK extern Complex operator * ( Complex const &, double );
_WPRTLINK extern Complex operator * ( double,         Complex const & );
_WPRTLINK extern Complex operator / ( Complex const &, Complex const & );
_WPRTLINK extern Complex operator / ( Complex const &, double );
_WPRTLINK extern Complex operator / ( double,         Complex const & );

_WPRTLINK extern int operator == ( Complex const &, Complex const & );
_WPRTLINK extern int operator == ( Complex const &, double );
_WPRTLINK extern int operator == ( double,         Complex const & );
_WPRTLINK extern int operator != ( Complex const &, Complex const & );
_WPRTLINK extern int operator != ( Complex const &, double );
_WPRTLINK extern int operator != ( double,         Complex const & );

_WPRTLINK extern double  abs  ( Complex const & );      // magnitude of vector
_WPRTLINK extern Complex acos ( Complex const & );      // arccosine
_WPRTLINK extern Complex acosh( Complex const & );      // hyperbolic arccosine
_WPRTLINK extern double  arg  ( Complex const & );      // angle of vector
_WPRTLINK extern Complex asin ( Complex const & );      // arcsin
_WPRTLINK extern Complex asinh( Complex const & );      // hyperbolic arcsin
_WPRTLINK extern Complex atan ( Complex const & );      // arctangent
_WPRTLINK extern Complex atanh( Complex const & );      // hyperbolic arctangent
_WPRTLINK extern Complex conj ( Complex const & );      // conjugate
_WPRTLINK extern Complex cos  ( Complex const & );      // cosine
_WPRTLINK extern Complex cosh ( Complex const & );      // hyperbolic cosine
_WPRTLINK extern Complex exp  ( Complex const & );      // e raised to a power
_WPRTLINK extern double  imag ( Complex const & );      // imaginary part
_WPRTLINK extern Complex log  ( Complex const & );      // log base e
_WPRTLINK extern Complex log10( Complex const & );      // log base 10
_WPRTLINK extern double  norm ( Complex const & );      // square of magnitude
_WPRTLINK extern Complex polar( double __mag,           // polar to Complex
                                double __angle = 0 );
_WPRTLINK extern Complex pow  ( Complex const &__base,  // Complex ** Complex
                                Complex const &__power );
_WPRTLINK extern Complex pow  ( Complex const &__base,  // Complex ** double
                                double         __power );
_WPRTLINK extern Complex pow  ( double         __base,  // double ** Complex
                                Complex const &__power );
_WPRTLINK extern Complex pow  ( Complex const &__base,  // Complex ** int
                                int            __power );
_WPRTLINK extern double  real ( Complex const & );      // real part
_WPRTLINK extern Complex sin  ( Complex const & );      // sin
_WPRTLINK extern Complex sinh ( Complex const & );      // hyperbolic sin
_WPRTLINK extern Complex sqrt ( Complex const & );      // square root
_WPRTLINK extern Complex tan  ( Complex const & );      // tan
_WPRTLINK extern Complex tanh ( Complex const & );      // hyperbolic tangent

inline Complex::Complex() {
    __r = 0.0;
    __i = 0.0;
}

inline Complex::Complex( Complex const &__cv ) {
    __r = __cv.__r;
    __i = __cv.__i;
}

inline Complex::Complex( double __real, double __imag ) {
    __r = __real;
    __i = __imag;
}

inline Complex &Complex::operator = ( Complex const &__cv ) {
    __r = __cv.__r;
    __i = __cv.__i;
    return( *this );
}

inline Complex &Complex::operator = ( double __dv ) {
    __r = __dv;
    __i = 0.0;
    return( *this );
}

inline Complex &Complex::operator += ( Complex const &__cv ) {
    __r += __cv.__r;
    __i += __cv.__i;
    return( *this );
}

inline Complex &Complex::operator += ( double __dv ) {
    __r += __dv;
    return( *this );
}

inline Complex &Complex::operator -= ( Complex const &__cv ) {
    __r -= __cv.__r;
    __i -= __cv.__i;
    return( *this );
}

inline Complex &Complex::operator -= ( double __dv ) {
    __r -= __dv;
    return( *this );
}

inline Complex &Complex::operator *= ( double __dv ) {
    __r *= __dv;
    __i *= __dv;
    return( *this );
}

inline Complex &Complex::operator /= ( double __dv ) {
    __r /= __dv;
    __i /= __dv;
    return( *this );
}

inline Complex operator + ( Complex const &__cv1, Complex const &__cv2 ) {
    return Complex( __cv1.real() + __cv2.real(), __cv1.imag() + __cv2.imag() );
}

inline Complex operator + ( Complex const &__cv, double __dv ) {
    return Complex( __cv.real() + __dv, __cv.imag() );
}

inline Complex operator + ( double __dv, Complex const &__cv ) {
    return Complex( __dv + __cv.real(), __cv.imag() );
}

inline Complex operator - ( Complex const &__cv1, Complex const &__cv2 ) {
    return Complex( __cv1.real() - __cv2.real(), __cv1.imag() - __cv2.imag() );
}

inline Complex operator - ( Complex const &__cv, double __dv ) {
    return Complex( __cv.real() - __dv, __cv.imag() );
}

inline Complex operator - ( double __dv, Complex const &__cv ) {
    return Complex( __dv - __cv.real(), - __cv.imag() );
}

inline Complex operator * ( Complex const &__cv1, Complex const &__cv2 ) {
    return Complex( __cv1.real()*__cv2.real() - __cv1.imag()*__cv2.imag(),
                    __cv1.imag()*__cv2.real() + __cv1.real()*__cv2.imag() );
}

inline Complex operator * ( Complex const &__cv, double __dv ) {
    return Complex( __cv.real() * __dv, __cv.imag() * __dv );
}

inline Complex operator * ( double __dv, Complex const &__cv ) {
    return Complex( __dv * __cv.real(), __dv * __cv.imag() );
}

inline Complex operator / ( Complex const &__cv, double __dv ) {
    return Complex( __cv.real() / __dv, __cv.imag() / __dv );
}

inline Complex Complex::operator + () const {
    return( *this );
}

inline Complex Complex::operator - () const {
    return Complex( -__r, -__i );
}

inline int operator == ( Complex const &__cv1, Complex const &__cv2 ) {
    return( __cv1.real() == __cv2.real()  &&  __cv1.imag() == __cv2.imag() );
}

inline int operator == ( Complex const &__cv, double __dv ) {
    return( __cv.imag() == 0.0  &&  __cv.real() == __dv );
}

inline int operator == ( double __dv, Complex const &__cv ) {
    return( __cv.imag() == 0.0  &&  __dv == __cv.real() );
}

inline int operator != ( Complex const &__cv1, Complex const &__cv2 ) {
    return( __cv1.real() != __cv2.real()  ||  __cv1.imag() != __cv2.imag() );
}

inline int operator != ( Complex const &__cv, double __dv ) {
    return( __cv.imag() != 0.0  ||  __cv.real() != __dv );
}

inline int operator != ( double __dv, Complex const &__cv ) {
    return( __cv.imag() != 0.0  ||  __dv != __cv.real() );
}

inline Complex conj( Complex const &__cv ) {
    return Complex( __cv.real(), -__cv.imag() );
}

inline double Complex::real() const {
    return( __r );
}

inline double real( Complex const &__cv ) {
    return( __cv.real() );
}

inline double Complex::imag() const {
    return( __i );
}

inline double imag( Complex const &__cv ) {
    return( __cv.imag() );
}

inline double norm( Complex const &__cv ) {
    return( __cv.real() * __cv.real() + __cv.imag() * __cv.imag() );
}

#endif /* __cplusplus */

#endif

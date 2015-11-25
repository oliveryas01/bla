/*
 * File:    functions.h
 * Date:    11/24/2015
 *
 * Desc:    
 */

#ifndef EGF_MATH_FUNCTIONS_H
#define EGF_MATH_FUNCTIONS_H

#include <cmath>

namespace EGF
{
    /**** Basic Operations ****/

    template <typename T>
    T abs(const T v);

    template <typename T>
    T max(const T v1, const T v2);

    template <typename T>
    T min(const T v1, const T v2);

    template <typename T>
    T diff(const T v1, const T v2);

    /**** Exponential Functions ****/

    template <typename T>
    T exp(const T v);

    template <typename T>
    T exp2(const T v);

    template <typename T>
    T log(const T v);

    template <typename T>
    T log10(const T v);

    template <typename T>
    T log2(const T v);

    /**** Power Functions ****/

    template <typename T, typename T2>
    T pow(const T v, const T2 exp);

    template <typename T>
    T sqrt(const T v);

    template <typename T>
    T cbrt(const T v);

    template <typename T, typename T2>
    T root(const T v, const T2 root);

    /**** Trigonometric Functions ****/

    template <typename T>
    T sin(const T v);

    template <typename T>
    T cos(const T v);

    template <typename T>
    T tan(const T v);

    template <typename T>
    T asin(const T v);

    template <typename T>
    T acos(const T v);

    template <typename T>
    T atan(const T v);

    template <typename T>
    T atan(const T vy, const T vx);

    /**** Hyperbolic Functions ****/

    template <typename T>
    T sinh(const T v);

    template <typename T>
    T cosh(const T v);

    template <typename T>
    T tanh(const T v);

    template <typename T>
    T asinh(const T v);

    template <typename T>
    T acosh(const T v);

    template <typename T>
    T atanh(const T v);

    /**** Rounding And Remainder Functions ****/

    template <typename T>
    T ceil(const T v);

    template <typename T>
    T floor(const T v);

    template <typename T, typename T2>
    T mod(const T v, const T2 denom);

    template <typename T>
    T round(const T v);

    /**** Other Functions ****/

    template <typename T, typename T2>
    T clamp(const T v, const T2 min, const T2 max);

    template <typename T>
    T clamp(const T v, const T min, const T max);
}

#include "basic_functions.tpp"

#endif

/*
 * File:    vec4.h
 * Date:    11/24/2015
 *
 * Desc:    4 dimensional vector.
 */

#ifndef EGF_MATH_VEC4_H
#define EGF_MATH_VEC4_H

#include "vec.h"

namespace EGF
{
    template <typename T>
    struct vec4
    {
        /**** Constructors ****/

        vec4(const T val1, const T val2, const T val3, const T val4);
        vec4(const vec4<T>& copy);

        /**** Arithmetic Operators ****/

        vec4<T> operator+(const vec4<T>& v);
        vec4<T> operator-(const vec4<T>& v);
        vec4<T> operator*(const vec4<T>& v);
        vec4<T> operator/(const vec4<T>& v);
        vec4<T> operator%(const vec4<T>& v);

        /**** Assignment Operators ****/

        vec4<T>& operator=(const vec4<T>& v);
        vec4<T>& operator+=(const vec4<T>& v);
        vec4<T>& operator-=(const vec4<T>& v);
        vec4<T>& operator*=(const vec4<T>& v);
        vec4<T>& operator/=(const vec4<T>& v);
        vec4<T>& operator%=(const vec4<T>& v);

        /**** Relation Operators ****/

        bool operator==(const vec4<T>& v);
        bool operator!=(const vec4<T>& v);

        /**** Increment/Decrement Operators ****/

        vec4<T>& operator++();
        vec4<T>& operator--();
        vec4<T> operator++(int);
        vec4<T> operator--(int);

        /**** Members ****/

        T val1, val2, val3, val4;
    };
}

#endif

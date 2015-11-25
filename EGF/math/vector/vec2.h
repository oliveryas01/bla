/*
 * File:    vec2.h
 * Date:    11/24/2015
 *
 * Desc:    2 dimensional vector.
 */

#ifndef EGF_MATH_VEC2_H
#define EGF_MATH_VEC2_H

#include "vec.h"

namespace EGF
{
    template <typename T>
    struct vec2
    {
        /**** Constructors ****/

        vec2(const T val1, const T val2);
        vec2(const vec2<T>& copy);

        /**** Arithmetic Operators ****/

        vec2<T> operator+(const vec2<T>& v);
        vec2<T> operator-(const vec2<T>& v);
        vec2<T> operator*(const vec2<T>& v);
        vec2<T> operator/(const vec2<T>& v);
        vec2<T> operator%(const vec2<T>& v);

        /**** Assignment Operators ****/

        vec2<T>& operator=(const vec2<T>& v);
        vec2<T>& operator+=(const vec2<T>& v);
        vec2<T>& operator-=(const vec2<T>& v);
        vec2<T>& operator*=(const vec2<T>& v);
        vec2<T>& operator/=(const vec2<T>& v);
        vec2<T>& operator%=(const vec2<T>& v);

        /**** Relation Operators ****/

        bool operator==(const vec2<T>& v);
        bool operator!=(const vec2<T>& v);

        /**** Increment/Decrement Operators ****/

        vec2<T>& operator++();
        vec2<T>& operator--();
        vec2<T> operator++(int);
        vec2<T> operator--(int);

        /**** Members ****/

        T val1, val2;
    };
}

#endif

/*
 * File:    vec3.h
 * Date:    11/24/2015
 *
 * Desc:    3 dimensional vector.
 */

#ifndef EGF_MATH_VEC3_H
#define EGF_MATH_VEC3_H

#include "vec.h"

namespace EGF
{
    template <typename T>
    struct vec3
    {
        /**** Constructors ****/

        vec3(const int val1, const int val2, const int val3);
        vec3(const float val1, const float val2, const float val3);
        vec3(const double val1, const double val2, const double val3);
        vec3(const vec3<T>& copy);

        /**** Arithmetic Operators ****/

        vec3<T> operator+(const vec3<T>& v);
        vec3<T> operator-(const vec3<T>& v);
        vec3<T> operator*(const vec3<T>& v);
        vec3<T> operator/(const vec3<T>& v);
        vec3<T> operator%(const vec3<T>& v);

        /**** Assignment Operators ****/

        vec3<T>& operator=(const vec3<T>& v);
        vec3<T>& operator+=(const vec3<T>& v);
        vec3<T>& operator-=(const vec3<T>& v);
        vec3<T>& operator*=(const vec3<T>& v);
        vec3<T>& operator/=(const vec3<T>& v);
        vec3<T>& operator%=(const vec3<T>& v);

        /**** Relation Operators ****/

        bool operator==(const vec3<T>& v);
        bool operator!=(const vec3<T>& v);

        /**** Increment/Decrement Operators ****/

        vec3<T>& operator++();
        vec3<T>& operator--();
        vec3<T> operator++(int);
        vec3<T> operator--(int);

        /**** Members ****/

        T val1, val2, val3;
    };
}

#include "vec3.tpp"

#endif

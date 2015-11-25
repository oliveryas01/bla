/*
 * File:    vec1.h
 * Date:    11/24/2015
 *
 * Desc:    1 dimensional vector.
 */

#ifndef EGF_MATH_VEC1_H
#define EGF_MATH_VEC1_H

#include "vec.h"

namespace EGF
{
    template <typename T>
    struct vec1
    {
        /**** Constructors ****/

        vec1(const T val);
        vec1(const vec1<T>& copy);

        /**** Arithmetic Operators ****/

        vec1<T> operator+(const vec1<T>& v);
        vec1<T> operator-(const vec1<T>& v);
        vec1<T> operator*(const vec1<T>& v);
        vec1<T> operator/(const vec1<T>& v);
        vec1<T> operator%(const vec1<T>& v);

        /**** Assignment Operators ****/

        vec1<T>& operator=(vec1<T> const & v);
        vec1<T>& operator+=(const vec1<T>& v);
        vec1<T>& operator-=(const vec1<T>& v);
        vec1<T>& operator*=(const vec1<T>& v);
        vec1<T>& operator/=(const vec1<T>& v);
        vec1<T>& operator%=(const vec1<T>& v);

        /**** Relation Operators ****/

        bool operator==(const vec1<T>& v);
        bool operator!=(const vec1<T>& v);

        /**** Increment/Decrement Operators ****/

        vec1<T>& operator++();
        vec1<T>& operator--();
        vec1<T> operator++(int);
        vec1<T> operator--(int);

        /**** Members ****/

        T val;
    };
}

#endif

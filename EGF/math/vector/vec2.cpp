/*
 * File:    vec2.cpp
 * Date:    11/24/2015
 *
 * Desc:    2 dimension vector.
 */

#include "vec2.h"

namespace EGF
{
    template <typename T>
    vec2<T>::vec2(const T val1, const T val2)
    {
        this->val1 = val1;
        this->val2 = val2;
    }

    template <typename T>
    vec2<T>::vec2(const vec2<T>& copy)
    {
        val1 = copy.val1;
        val2 = copy.val2;
    }

    template <typename T>
    vec2<T> vec2<T>::operator+(const vec2<T>& v)
    {
        return vec2(val1 + v.val1, val2 + v.val2);
    }

    template <typename T>
    vec2<T> vec2<T>::operator-(const vec2<T>& v)
    {
        return vec2(val1 - v.val1, val2 - v.val2);
    }

    template <typename T>
    vec2<T> vec2<T>::operator*(const vec2<T>& v)
    {
        return vec2(val1 * v.val1, val2 * v.val2);
    }

    template <typename T>
    vec2<T> vec2<T>::operator/(const vec2<T>& v)
    {
        return vec2(val1 / v.val1, val2 / v.val2);
    }

    template <typename T>
    vec2<T> vec2<T>::operator%(const vec2<T>& v)
    {
        return vec2(val1 % v.val1, val2 % v.val2);
    }

    template <typename T>
    vec2<T>& vec2<T>::operator=(const vec2<T>& v)
    {
        val1 = v.val1;
        val2 = v.val2;

        return *this;
    }

    template <typename T>
    vec2<T>& vec2<T>::operator+=(const vec2<T>& v)
    {
        val1 += v.val1;
        val2 += v.val2;

        return *this;
    }

    template <typename T>
    vec2<T>& vec2<T>::operator-=(const vec2<T>& v)
    {
        val1 -= v.val1;
        val2 -= v.val2;

        return *this;
    }

    template <typename T>
    vec2<T>& vec2<T>::operator*=(const vec2<T>& v)
    {
        val1 *= v.val1;
        val2 *= v.val2;

        return *this;
    }

    template <typename T>
    vec2<T>& vec2<T>::operator/=(const vec2<T>& v)
    {
        val1 /= v.val1;
        val2 /= v.val2;

        return *this;
    }

    template <typename T>
    vec2<T>& vec2<T>::operator%=(const vec2<T>& v)
    {
        val1 %= v.val1;
        val2 %= v.val2;

        return *this;
    }

    template <typename T>
    bool vec2<T>::operator==(const vec2<T>& v)
    {
        return (val1 == v.val1 && val2 == v.val2);
    }

    template <typename T>
    bool vec2<T>::operator!=(const vec2<T>& v)
    {
        return (val1 != v.val1 || val2 != v.val2);
    }

    template <typename T>
    vec2<T>& vec2<T>::operator++()
    {
        ++val1;
        ++val2;

        return *this;
    }

    template <typename T>
    vec2<T>& vec2<T>::operator--()
    {
        --val1;
        --val2;

        return *this;
    }

    template <typename T>
    vec2<T> vec2<T>::operator++(int)
    {
        vec2<T> result = *this;

        ++val1;
        ++val2;

        return result;
    }

    template <typename T>
    vec2<T> vec2<T>::operator--(int)
    {
        vec2<T> result = *this;

        --val1;
        --val2;

        return result;
    }
}

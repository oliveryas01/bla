/*
 * File:    vec4.cpp
 * Date:    11/24/2015
 *
 * Desc:    4 dimensional vector.
 */

#include "vec4.h"

namespace EGF
{
    template <typename T>
    vec4<T>::vec4(const T val1, const T val2, const T val3, const T val4)
    {
        this->val1 = val1;
        this->val2 = val2;
        this->val3 = val3;
        this->val4 = val4;
    }

    template <typename T>
    vec4<T>::vec4(const vec4<T> &copy)
    {
        val1 = copy.val1;
        val2 = copy.val2;
        val3 = copy.val3;
        val4 = copy.val4;
    }

    template <typename T>
    vec4<T> vec4<T>::operator+(const vec4<T>& v)
    {
        return vec4(val1 + v.val1, val2 + v.val2, val3 + v.val3, val4 + v.val4);
    }

    template <typename T>
    vec4<T> vec4<T>::operator-(const vec4<T>& v)
    {
        return vec4(val1 - v.val1, val2 - v.val2, val3 - v.val3, val4 - v.val4);
    }

    template <typename T>
    vec4<T> vec4<T>::operator*(const vec4<T>& v)
    {
        return vec4(val1 * v.val1, val2 * v.val2, val3 * v.val3, val4 * v.val4);
    }

    template <typename T>
    vec4<T> vec4<T>::operator/(const vec4<T>& v)
    {
        return vec4(val1 / v.val1, val2 / v.val2, val3 / v.val3, val4 / v.val4);
    }

    template <typename T>
    vec4<T> vec4<T>::operator%(const vec4<T>& v)
    {
        return vec4(val1 % v.val1, val2 % v.val2, val3 % v.val3, val4 % v.val4);
    }

    template <typename T>
    vec4<T>& vec4<T>::operator=(const vec4<T>& v)
    {
        val1 = v.val1;
        val2 = v.val2;
        val3 = v.val3;
        val4 = v.val4;

        return *this;
    }

    template <typename T>
    vec4<T>& vec4<T>::operator+=(const vec4<T>& v)
    {
        val1 += v.val1;
        val2 += v.val2;
        val3 += v.val3;
        val4 += v.val4;

        return *this;
    }

    template <typename T>
    vec4<T>& vec4<T>::operator-=(const vec4<T>& v)
    {
        val1 -= v.val1;
        val2 -= v.val2;
        val3 -= v.val3;
        val4 -= v.val4;

        return *this;
    }

    template <typename T>
    vec4<T>& vec4<T>::operator*=(const vec4<T>& v)
    {
        val1 *= v.val1;
        val2 *= v.val2;
        val3 *= v.val3;
        val4 *= v.val4;

        return *this;
    }

    template <typename T>
    vec4<T>& vec4<T>::operator/=(const vec4<T>& v)
    {
        val1 /= v.val1;
        val2 /= v.val2;
        val3 /= v.val3;
        val4 /= v.val4;

        return *this;
    }

    template <typename T>
    vec4<T>& vec4<T>::operator%=(const vec4<T>& v)
    {
        val1 %= v.val1;
        val2 %= v.val2;
        val3 %= v.val3;
        val4 %= v.val4;

        return *this;
    }

    template <typename T>
    bool vec4<T>::operator==(const vec4<T>& v)
    {
        return (val1 == v.val1 && val2 == v.val2 && val3 == v.val3 && val4 == v.val4);
    }

    template <typename T>
    bool vec4<T>::operator!=(const vec4<T>& v)
    {
        return (val1 != v.val1 || val2 != v.val2 || val3 != v.val3 || val4 != v.val4);
    }

    template <typename T>
    vec4<T>& vec4<T>::operator++()
    {
        ++val1;
        ++val2;
        ++val3;
        ++val4;

        return *this;
    }

    template <typename T>
    vec4<T>& vec4<T>::operator--()
    {
        --val1;
        --val2;
        --val3;
        --val4;

        return *this;
    }

    template <typename T>
    vec4<T> vec4<T>::operator++(int)
    {
        vec4<T> result = *this;

        ++val1;
        ++val2;
        ++val3;
        ++val4;

        return result;
    }

    template <typename T>
    vec4<T> vec4<T>::operator--(int)
    {
        vec4<T> result = *this;

        --val1;
        --val2;
        --val3;
        --val4;

        return result;
    }
}

/*
 * File:    vec3.cpp
 * Date:    11/24/2015
 *
 * Desc:    3 dimensional vector.
 */

#include "vec3.h"

namespace EGF
{
    template <typename T>
    vec3<T>::vec3(const int val1, const int val2, const int val3)
    {
        this->val1 = val1;
        this->val2 = val2;
        this->val3 = val3;
    }

    template <typename T>
    vec3<T>::vec3(const float val1, const float val2, const float val3)
    {
        this->val1 = val1;
        this->val2 = val2;
        this->val3 = val3;
    }

    template <typename T>
    vec3<T>::vec3(const double val1, const double val2, const double val3)
    {
        this->val1 = val1;
        this->val2 = val2;
        this->val3 = val3;
    }

    template <typename T>
    vec3<T>::vec3(const vec3<T> &copy)
    {
        val1 = copy.val1;
        val2 = copy.val2;
        val3 = copy.val3;
    }

    template <typename T>
    vec3<T> vec3<T>::operator+(const vec3<T>& v)
    {
        return vec3(val1 + v.val1, val2 + v.val2, val3 + v.val3);
    }

    template <typename T>
    vec3<T> vec3<T>::operator-(const vec3<T>& v)
    {
        return vec3(val1 - v.val1, val2 - v.val2, val3 - v.val3);
    }

    template <typename T>
    vec3<T> vec3<T>::operator*(const vec3<T>& v)
    {
        return vec3(val1 * v.val1, val2 * v.val2, val3 * v.val3);
    }

    template <typename T>
    vec3<T> vec3<T>::operator/(const vec3<T>& v)
    {
        return vec3(val1 / v.val1, val2 / v.val2, val3 / v.val3);
    }

    template <typename T>
    vec3<T> vec3<T>::operator%(const vec3<T>& v)
    {
        return vec3(val1 % v.val1, val2 % v.val2, val3 % v.val3);
    }

    template <typename T>
    vec3<T>& vec3<T>::operator=(const vec3<T>& v)
    {
        val1 = v.val1;
        val2 = v.val2;
        val3 = v.val3;

        return *this;
    }

    template <typename T>
    vec3<T>& vec3<T>::operator+=(const vec3<T>& v)
    {
        val1 += v.val1;
        val2 += v.val2;
        val3 += v.val3;

        return *this;
    }

    template <typename T>
    vec3<T>& vec3<T>::operator-=(const vec3<T>& v)
    {
        val1 -= v.val1;
        val2 -= v.val2;
        val3 -= v.val3;

        return *this;
    }

    template <typename T>
    vec3<T>& vec3<T>::operator*=(const vec3<T>& v)
    {
        val1 *= v.val1;
        val2 *= v.val2;
        val3 *= v.val3;

        return *this;
    }

    template <typename T>
    vec3<T>& vec3<T>::operator/=(const vec3<T>& v)
    {
        val1 /= v.val1;
        val2 /= v.val2;
        val3 /= v.val3;

        return *this;
    }

    template <typename T>
    vec3<T>& vec3<T>::operator%=(const vec3<T>& v)
    {
        val1 %= v.val1;
        val2 %= v.val2;
        val3 %= v.val3;

        return *this;
    }

    template <typename T>
    bool vec3<T>::operator==(const vec3<T>& v)
    {
        return (val1 == v.val1 && val2 == v.val2 && val3 == v.val3);
    }

    template <typename T>
    bool vec3<T>::operator!=(const vec3<T>& v)
    {
        return (val1 != v.val1 || val2 != v.val2 || val3 != v.val3);
    }

    template <typename T>
    vec3<T>& vec3<T>::operator++()
    {
        ++val1;
        ++val2;
        ++val3;

        return *this;
    }

    template <typename T>
    vec3<T>& vec3<T>::operator--()
    {
        --val1;
        --val2;
        --val3;

        return *this;
    }

    template <typename T>
    vec3<T> vec3<T>::operator++(int)
    {
        vec3<T> result = *this;

        ++val1;
        ++val2;
        ++val3;

        return result;
    }

    template <typename T>
    vec3<T> vec3<T>::operator--(int)
    {
        vec3<T> result = *this;

        --val1;
        --val2;
        --val3;

        return result;
    }
}

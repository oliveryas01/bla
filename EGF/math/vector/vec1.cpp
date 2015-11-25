/*
 * File:    vec1.cpp
 * Date:    11/24/2015
 *
 * Desc:    1 dimensional vector.
 */

#include "vec1.h"

namespace EGF
{
    template <typename T>
    vec1<T>::vec1(const T val)
    {
        this->val = val;
    }

    template <typename T>
    vec1<T>::vec1(const vec1<T>& copy)
    {
        this->val = copy.val;
    }

    template <typename T>
    vec1<T> vec1<T>::operator+(const vec1<T>& v)
    {
        return vec1(val + v.val);
    }

    template <typename T>
    vec1<T> vec1<T>::operator-(const vec1<T>& v)
    {
        return vec1(val - v.val);
    }

    template <typename T>
    vec1<T> vec1<T>::operator*(const vec1<T>& v)
    {
        return vec1(val * v.val);
    }

    template <typename T>
    vec1<T> vec1<T>::operator/(const vec1<T>& v)
    {
        return vec1(val / v.val);
    }

    template <typename T>
    vec1<T> vec1<T>::operator%(const vec1<T>& v)
    {
        return vec1(val % v.val);
    }

    template <typename T>
    vec1<T>& vec1<T>::operator=(const vec1<T>& v)
    {
        val = v.val;

        return *this;
    }

    template <typename T>
    vec1<T>& vec1<T>::operator+=(const vec1<T>& v)
    {
        val += v.val;

        return *this;
    }

    template <typename T>
    vec1<T>& vec1<T>::operator-=(const vec1<T>& v)
    {
        val -= v.val;

        return *this;
    }

    template <typename T>
    vec1<T>& vec1<T>::operator*=(const vec1<T>& v)
    {
        val *= v.val;

        return *this;
    }

    template <typename T>
    vec1<T>& vec1<T>::operator/=(const vec1<T>& v)
    {
        val /= v.val;

        return *this;
    }

    template <typename T>
    vec1<T>& vec1<T>::operator%=(const vec1<T>& v)
    {
        val %= v.val;

        return *this;
    }

    template <typename T>
    bool vec1<T>::operator==(const vec1<T>& v)
    {
        return (val == v.val);
    }

    template <typename T>
    bool vec1<T>::operator!=(const vec1<T>& v)
    {
        return (val != v.val);
    }

    template <typename T>
    vec1<T>& vec1<T>::operator++()
    {
        ++val;

        return *this;
    }

    template <typename T>
    vec1<T>& vec1<T>::operator--()
    {
        --val;

        return *this;
    }

    template <typename T>
    vec1<T> vec1<T>::operator++(int)
    {
        vec1<T> result = *this;

        ++val;

        return result;
    }

    template <typename T>
    vec1<T> vec1<T>::operator--(int)
    {
        vec1<T> result = *this;

        --val;

        return result;
    }
}

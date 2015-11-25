/*
 * File:    basic_functions.cpp
 * Date:    11/24/2015
 *
 * Desc:    
 */

#include "functions.h"

#include <typeinfo>

#include "vector/vec.h"

namespace EGF
{
    template <typename T>
    T abs(const T v)
    {
        if(typeid(v) == typeid(vec3<int>))
        {
        }
    }

    template <typename T>
    T max(const T v0, const T v1)
    {
    }

    template <typename T>
    T min(const T v0, const T v1)
    {
    }

    template <typename T>
    T diff(const T v0, const T v1)
    {
    }
}

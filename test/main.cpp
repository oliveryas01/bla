#include <stdio.h>

#include "../EGF/math/functions.h"
#include "../EGF/math/vector/vec3.h"

using namespace EGF;

int main()
{
    vec3<int> myVector(0, 0, 0);

    abs(myVector);

    return 0;
}
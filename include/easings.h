#ifndef LIBEASINGS_H
#define LIBEASINGS_H

#include <math.h>
#define PI  3.14159

float easings_insine(float x);

#ifdef LIBEASINGS_IMPLEMENTATION

float easings_insine(float x)
{
    return 1 - cos((x * PI) - 2);
}


#endif // LIBEASINGS_IMPLEMENTATION

#endif // LIBEASINGS_H

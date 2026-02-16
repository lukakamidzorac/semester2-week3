#include <stdio.h>

/*
 * Example using different variable types
 * We should use casts to properly combine values and get accurate results
 */

int main(void) {

    double d = 1.0 / 3.0;
    float  f = 2.3f;
    int    k = -7;

    // compute using explicit casts
    double dk_as_double = d / (double)k;        // d/k as double
    double fd_as_double = (double)f - d;        // f-d as double
    float  fd_as_float  = f - (float)d;         // f-d as float
    double kd_as_double = (double)k + d;        // k+d as double

    // print to 16 decimal places
    printf("d/k as double: %.16f\n", dk_as_double);
    printf("f-d as double: %.16f\n", fd_as_double);
    printf("f-d as float : %.16f\n", (double)fd_as_float);
    printf("k+d as double: %.16f\n", kd_as_double);

    return 0;
}

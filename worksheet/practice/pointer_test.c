#include <stdio.h>

/*
 * Example using pointers and dereferencing
 */

int main(void) {

    float f = 2.3f;
    int k = -2;

    float *pf = &f;  // pointer na f
    int *pk = &k;    // pointer na k (mora biti int*)

    float sum = 0.0f; // compute the sum of the primitive values with appropriate casting
    sum = f + (float)k;

    printf("%f\n", sum);

    sum = 0.0f; // compute the sum via the pointers, using appropriate casting
    sum = *pf + (float)(*pk);

    printf("%f\n", sum); // same value, now using pointers

    return 0;
}

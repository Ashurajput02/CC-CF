#include <stdio.h>

int main() {
    int x = 10;  // An integer variable
    float *ptr = (float*)&x;  // Type punning: Treating the memory of 'x' as a float

    // Accessing the same memory location as a float
    printf("Value as float: %f\n", *ptr);

    return 0;
}

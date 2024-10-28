#include <stdio.h>

int main() {
    int result = 1000000 * 1000;  // Overflow occurs here
    printf("Result: %d\n", result);
    return 0;
}

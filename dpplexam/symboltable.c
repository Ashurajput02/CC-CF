#include <stdio.h>

struct ash
{
    int a;
    int b;
};

union jig
{
    int a;
    char b;
};

int main()
{
    int a = 9;
    int *ptr = &a;
    struct ash jiggi;

    int **yash = &ptr;

    union jig ash;
    printf("the size of union is=%d\n", sizeof(ash));
}
#include <stdio.h>
int main()
{
    int jig = {};
    int(*tashu)[2] = {7, 9};
    printf("the value inside the tashu array=%d", (*tashu)[0]);
    return 0;
}
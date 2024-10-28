#include <stdio.h>
int main()
{
    // int a = 5;
    // int *p;
    // p = &a;
    // printf("%d", p);
    // printf("\n%d", *p);
    // printf("\n%d", p + 1);
    // printf("size of integer=%d", ((p + 1) - p));
    int arr[5] = {1, 2, 3, 4, 5};
    int *jig[5];
    jig[0] = &arr[0];

    jig[1] = &arr[1];
    jig[2] = &arr[2];
    jig[3] = &arr[3];
    jig[4] = &arr[4];

    printf("the address of jig ke different pointers are: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", jig[i]);

    printf("\nthe address of arr ke different pointers are: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", &arr[i]);

    printf("\nthe value of jig ke different pointers are: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *jig[i]);

    printf("\n\n");
    int(*kanak)[5] = &arr;
    printf("hey there %d", arr[0]);
    printf("%d", **kanak + 2);
}

//*(b+0)=1.2;

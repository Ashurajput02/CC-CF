#include <stdio.h>

struct element
{
    char name[2];
    int atomic_number;
    double atomic_weight;
    _Bool metallic;
};

struct jig
{
    char name[2];
    int a;
    double b;
    //_Bool ash;
};
int main()
{
    // int p = 1025;
    // char *a = (char *)&p;
    // printf("%c", *a);
    // struct element babe;
    // printf("the size of struct is =%d\n", sizeof(babe));
    // struct jig babe1;
    // printf("the size of struct is =%d\n", sizeof(babe1));
    // printf("%d", sizeof());

    int a = 1025;
    void *ashbabe = &a; // isme konno dikkat naahi
    int *ptr = (int *)ashbabe;
    printf("%d is the address of ashbabe\n", &ashbabe);

    printf("%d is the address inside  ashbabe\n", ashbabe);

    printf("%d is the address of ashbabe\n", &a);

    printf("%d is the value pointed by ashbabe\n", *ptr);
    int *ptr2 = ashbabe;

    printf("%d hey sneha  is the value of a\n", *ptr2);
    printf("%d jigyasa\n", &ashbabe);

    printf("%d is the address of ashbabe\n", *((char *)ashbabe));
    int *jig = &a;
    int *sim = jig; // equality is ok with pointers;
    printf("the value of a using two pointer equal approach=%d\n", *sim);

    int *jiggi = &a;
    double *simmi = jiggi;
    // *(jiggi + 1) = 98;
    printf("the value using different types of pointers =%d\n", *simmi);

    int p = 4;
    int q = 5;
    int *ash[2];
    ash[0] = &p;
    ash[1] = &q;
    printf("the value at 0th index in ash array=%d\n", *ash[0]);
    int gagan[3] = {7, 9, 12};
    int(*tashu)[3] = &gagan;
    printf("the value inside the tashu array=%d\n", (*tashu)[0]);
    printf("the value inside the tashu at second index array=%d\n", *(*tashu + 2)); // bhery bhery imp
    // pointers pe hone waale operations
    /*1.assignment
    2.equality check
    3.subtract two pointers

    rest ille*/

    int *p1 = &a;
    int *p2 = &a;
    if (p1 == p2)
        printf("ashbabe won\n");

    int kkr = 1;
    int csk = 2;
    int dc = 3;
    int *jpmorgan[3];
    jpmorgan[0] = &kkr;
    jpmorgan[1] = &csk;
    jpmorgan[2] = &dc;
    printf("%d\n", **(jpmorgan + 1));

    int *final[3];
    int aus = 1;
    int ind = 2;
    int us = 3;
    final[0] = &aus;
    final[1] = &ind;
    final[2] = &us;
    printf("value at first index is %d\n", *final[1]);
    printf("the address of india is =%d\n", &ind);

    int rajput[3] = {1, 7, 3};
    int(*rathore)[3];
    rathore = &rajput;
    printf("the array ka pehla element=%d\n", *rathore[0]);

    printf("the array ka pehla element=%d\n", *(*rathore + 1));
}

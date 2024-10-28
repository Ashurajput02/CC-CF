#include <stdio.h>
// #pragma pack(1)
struct jig
{
    int a;
    char b;
    char c;
};

union ash
{
    char a;
    int b;
};

int main()
{
    struct jig ash;
    printf("%d", sizeof(ash));
    printf("%d", sizeof(ash.b));
    union ash dish;
    dish.b = 97;
    printf("\n %c \n%d", dish.a, dish.b);
    dish.a = 'A';
    printf("\n %c \n%d", dish.a, dish.b);
}

// type element (naturally occuring :Boolean :=true) is record
// name:string(1..2)
// atomic_number:integer;
// atomic_weight:real;
// metallic:Boolean;
// case naturally_occuring is
// when true =>
// source :string_ptr;
// prevalence:real;
// when false=>
// lifetime:real;

// end case;
// end record;
int a;
int arr[a];
int n;
cinn >> n;
int arr[n];

procedure foo(size : integer) is
    M : array(1..size, 1..size) of real;
....begin....end foo;

void foo(int size)
{
    double M[size][size];
    ...
}
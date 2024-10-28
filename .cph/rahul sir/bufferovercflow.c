#include <stdio.h>
int main()
{
    int a[2];
    for (int i = 0; i < 26; i++)
    {
        a[i] = 45;
    }
    printf("%d", a[1]);
    return 0;
}
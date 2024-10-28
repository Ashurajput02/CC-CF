#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int get_accnt_num(FILE *s)
{
    char buf[100];
    char *p = buf;
    int n = 0;
    do
    {
        *p = getc(s);
        n++;
    } while (*p++ != '\n');
    *p = '\0';
    return (n);
}

int main()
{
    FILE *fp;
    int r;
    fp = fopen("xyz.txt", "r");
    r = get_accnt_num(fp);
    printf("The no. of bytes read is %d\n", r);
    return 0;
}

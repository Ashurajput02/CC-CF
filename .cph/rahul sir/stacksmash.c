#include <stdio.h>

void fillArray(int arr[])
{
    int i = 0;
    while (1)
    {
        printf("Enter a number (or -1 to stop): ");
        scanf("%d", &arr[i]);
        if (arr[i] == -1)
        {
            break;
        }
        i++;
    }
}

int main()
{
    int numbers[5]; // Assume array size is 5
    fillArray(numbers);
    printf("Numbers entered: ");
    for (int j = 0; numbers[j] != -1; j++)
    {
        printf("%d ", numbers[j]);
    }
    printf("\n");
    return 0;
}

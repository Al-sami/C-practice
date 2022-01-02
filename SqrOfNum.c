#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    char arr[30];
    itoa(num, arr, 10);
    int size = strlen(arr);
    for (int i = 0; i < size; i++)
    {
        num = arr[i] - '0';
        printf("%d", num * num);
    }

    return 0;
}
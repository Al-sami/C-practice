#include <stdio.h>

int main()
{
    int sum = 0, times;
    printf("How many  numbers sum do you want? ");
    scanf("%d", &times);
    for (int i = 0; i <= times; i++)
    {
        sum = sum + i;
    }
    printf("The sum of first %d natural numbers is %d", times, sum);

    return 0;
}
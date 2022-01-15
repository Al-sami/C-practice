#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

long sum_two_smallest_numbers(size_t n, const int numbers[])
{
    int *pNumbers;
    pNumbers = (int *)malloc(1 * n);
    for (size_t i = 0; i < n; i++)
    {
        pNumbers[i] = numbers[i];
    }
    for (size_t j = 0; j < n; j++)
    {
        for (size_t h = 0; h < n; h++)
        {
            if (pNumbers[j] < pNumbers[h])
            {
                int small = pNumbers[h];
                pNumbers[h] = pNumbers[j];
                pNumbers[j] = small;
            }
        }
    }

    long sum = pNumbers[0] + pNumbers[1];
    return sum;
}

int main()
{
    int numbers[] = {992, 962, 950, 929, 925, 913, 901, 861, 835, 796, 702, 834, 690, 669, 659, 601, 535, 534, 357, 333, 295, 231, 210, 243, 243, 471, 206, 376, 141, 152, 406, 19};
    size_t length = sizeof(numbers) / sizeof(int);
    int result = sum_two_smallest_numbers(length, numbers);
    printf("Sum is:%d\n", result);
    return 0;
}
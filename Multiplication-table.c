#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter your number:");
    scanf("%d", &num);
    printf("The multiplication table of %d is below:\n", num);
    for (int i = 0; i <= 10; i++)
    {
        int product = num * i;
        printf("%d * %d = %d\n", num, i, product);
    }

    return 0;
}

#include <stdio.h>

int maxMultiple(int divisor, int bound)
{
    int num;

    for (int i = divisor; i <= bound; i++)
    {
        if (i % divisor == 0)
        {
            num = i;
        }
        else
        {
            continue;
        }
    }

    return num;
}

int main()
{
    int num = maxMultiple(37, 200);

    printf("%d\n", num);
}
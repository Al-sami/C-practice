#include <stdio.h>

int solution(int num)
{
    int result = 0;

    if (num < 0)
    {
        printf("Invalid!");
    }
    else
    {
        for (int i = 1; i < num; i++)
        {
            if (i % 3 == 0 || i % 5 == 0)
            {
                result = result + i;
            }
            else
            {
                continue;
            }
        }
    }

    return result;
}

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

    int result = solution(num);
    printf("The sum is %d.", result);

    return 0;
}
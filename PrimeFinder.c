#include <stdio.h>

int main()
{

    int input;
    printf("Enter the number: ");
    scanf("%d", &input);
    if (input % 2 == 0)
    {
        if (input == 2)
        {
            printf("%d is a prime number", input);
        }
        else
        {
            printf("%d is not a prime number", input);
        }
    }
    else
    {
        int i = 3;
        if (input == 1)
        {
            printf("INVALID!");
        }

        else if (input != i)
        {
            while (input % i != 0)
            {
                i += 2;
            }
            if (input != i)
            {
                if (input % i == 0)
                {
                    printf("%d is not a prime number", input);
                }
            }
            else
            {
                printf("%d is a prime number", input);
            }
        }
        else
        {
            printf("%d is a prime number", input);
        }
    }
    return 0;
}

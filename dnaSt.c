#include <stdio.h>
#include <string.h>

char *stInterchanger(char dnaSt[])
{

    int size = strlen(dnaSt);

    for (int i = 0; i < size; i++)
    {
        if (dnaSt[i] == 'a')
        {
            dnaSt[i] = 't';
            continue;
        }
        else if (dnaSt[i] == 't')
        {
            dnaSt[i] = 'a';
            continue;
        }
        else if (dnaSt[i] == 'c')
        {
            dnaSt[i] = 'g';
            continue;
        }
        else if (dnaSt[i] == 'g')
        {
            dnaSt[i] = 'c';
            continue;
        }

        return dnaSt;
    }

    return dnaSt;
}
int main()
{
    char dnaSt[20];
    scanf("%s", &dnaSt);
    printf("%s", stInterchanger(dnaSt));

    return 0;
}

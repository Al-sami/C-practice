#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *DuplicateEncoder(char *str)
{

    int size = strlen(str), count = 0;
    char *newStr = (char *)malloc(size + 1);
    char *protoStr = (char *)malloc(size + 1);

    for (size_t h = 0; h < size; h++)
    {
        protoStr[h] = tolower(str[h]);
    }
    for (size_t i = 0; i < size; i++)
    {

        for (size_t j = 0; j < size; j++)
        {

            if (i != j)
            {
                if (protoStr[i] == protoStr[j])
                {
                    count++;
                }
            }
        }
        if (count > 0)
        {
            newStr[i] = ')';
        }
        else
        {
            newStr[i] = '(';
        }

        count = 0;
    }
    newStr[size] = '\0';
    return newStr;
}

int main()
{
    char *result = DuplicateEncoder("Success");
    printf("the result is %s", result);

    return 0;
}
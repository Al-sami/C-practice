#include <stdbool.h>
#include <string.h>
#include <stdio.h>

bool alphanumeric(const char *strin)
{
    bool result = false;
    for (size_t i = 0; i < strlen(strin); i++)
    {
        int num = (int)strin[i];
        if (num >= 48 && num <= 57)
        {
            result = true;
        }
        else if (num >= 65 && num <= 90)
        {
            result = true;
        }
        else if (num >= 97 && num <= 122)
        {
            result = true;
        }
        else
        {
            result = false;
            break;
        }
    }
    return result;
}

int main()
{
    bool result = alphanumeric("s_am");
    printf("%i", result);
    return 0;
}
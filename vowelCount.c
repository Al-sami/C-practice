#include <stddef.h>
#include <string.h>
#include <stdio.h>
size_t get_count(const char *s)
{
    int count = 0;
    int size = strlen(s);
    for (size_t i = 0; i < size; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char string[] = "abracadebra";
    char result = get_count(string);
    printf("%d", result);
    return 0;
}
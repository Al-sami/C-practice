#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter the string: ");
    scanf("%s", &str1);
    int length = strlen(str1);

    for (int i = 0; i < length; i++)
    {

        str2[i] = str1[length - (i + 1)];
    }
    str2[0] = toupper(str2[0]);
    str2[length - 1] = tolower(str2[length - 1]);
    str2[length] = '\0';
    printf("Your string in reverse is %s", str2);

    return 0;
}
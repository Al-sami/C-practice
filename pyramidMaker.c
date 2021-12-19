#include <stdio.h>

int main()
{
    int height;
    char symbol, space = ' ';
    printf("Enter the height and the symbol of your pyramid respectively:");
    scanf("%d%c", &height, &symbol);
    int symbolMaker = (height - (height - 1)), spaceMaker = (height - 1);

    for (int i = 0; i < height; i++)
    {
        for (int c = 0; c < spaceMaker; c++)
        {
            printf("%c", space);
        }
        for (int e = 0; e < symbolMaker; e++)
        {
            printf("%c ", symbol);
        }
        spaceMaker = spaceMaker - 1;
        symbolMaker = symbolMaker + 1;
        printf("\n");
    }

    return 0;
}
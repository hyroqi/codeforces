#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int lcount;
    int i = 0;
    scanf ("%d", &lcount);
    while (lcount--)
    {
        char text[100];
        scanf("%s", text);
        i = strlen(text);
        if (i > 10)
            printf ("%c%d%c\n", text[0], i - 2, text[i - 1]);
        else
            printf ("%s\n", text);
    }
    return (0);
}


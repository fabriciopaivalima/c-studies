/*Problema da pagina 91 do luis damas*/

#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        putchar('\n');
    }

    return 0;
}

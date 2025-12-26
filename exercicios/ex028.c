/*Escreva a tabuada de 1 a 5*/
#include <stdio.h>

int main(void)
{
    int num = 1, i = 1;

    while (num <= 5)
    {
        while (i <= 10)
        {
            printf("%2d x %2d = %2d\n", num, i, num * i);
            i++;
        }
        putchar('\n');
        i = 1;
        num++;
    }

    return 0;
}

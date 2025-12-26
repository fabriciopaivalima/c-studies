/*Escreva um programa que coloque na tela as 5 primeiras tabuadas, parando a tela depois de cada uma delas*/
#include <stdio.h>

int main(void)
{
    int i = 1, j;

    for (i; i <= 5; i++)
    {
        j = 1;
        for (j; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        getchar();
    }


    return 0;
}
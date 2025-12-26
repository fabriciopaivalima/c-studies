/*Escreva um programa que mostre os 10 primeiros numeros pares*/
#include <stdio.h>

int main(void)
{
    int cont = 0, i;

    for (i = 1; cont < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d e par.\n", i);
            cont++;
        }
    }

    return 0;
}
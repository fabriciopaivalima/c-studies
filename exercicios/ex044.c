/*Escreva um programa que, recorrendo a tres funcoes distintas, escreva na tela 3 linhas, 4 linhas e 5 linhas.*/

#include <stdio.h>

void linha3()
{
    int i;
    for ( i = 1; i <= 3 ; i++)
    {
        printf("%c", '*');
    }
    putchar('\n');
}

void linha4()
{
    int i;
    for ( i = 1; i <= 4 ; i++)
    {
        printf("%c", '*');
    }

    putchar('\n');
}

void linha5()
{
    int i;
    for ( i = 1; i <= 5 ; i++)
    {
        printf("%c", '*');
    }

    putchar('\n');
}

int main(void)
{

    linha3();
    linha4();
    linha5();
    linha4();
    linha3();

    return 0;
}

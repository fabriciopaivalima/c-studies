/*Escreva um programa de quatro formas distintas, que diga se um numero e ou nao igual a zero usando switch*/
#include <stdio.h>

int main(void)
{
    int n;

    puts("Informe um numero: ");
    scanf("%d", &n);

    switch (n * 1)
    {
    case 0: printf("O numero %d e igual a 0.\n", n);
        break;
    default: printf("O numero %d nao e igual a 0\n", n);
    }

    switch (n * n)
    {
    case 0: printf("O numero %d e igual a 0.\n", n);
        break;
    default: printf("O numero %d nao e igual a 0\n", n);
    }

    switch (n / 1)
    {
    case 0: printf("O numero %d e igual a 0.\n", n);
        break;
    default: printf("O numero %d nao e igual a 0\n", n);
    }

    switch (n + 65)
    {
    case 'A': printf("O numero %d e igual a 0.\n", n);
        break;
    default: printf("O numero %d nao e igual a 0\n", n);
    }


    return 0;
}

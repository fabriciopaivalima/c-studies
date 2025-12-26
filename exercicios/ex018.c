/*Escreva um programa de quatro formas distintas, que diga se um numero e ou nao igual a zero*/
#include <stdio.h>

int main(void)
{

    int n;

    puts("Informe um numero: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Primeira forma: O numero %d e igual a 0\n", n);
    }
    if (n < 1 && n > -1)
    {
        printf("Segunda forma: O numero %d e igual a 0\n", n);
    }
    if (n == (1 - 1))
    {
        printf("Terceira forma: O numero %d e igual a 0\n", n);
    }
    if (n == ('A' - 'A'))
    {
        printf("Quarta forma: O numero %d e igual a 0\n", n);
    }
    if (n != 0)
    {
        printf("O numero %d nao e igual a 0\n", n);
    }




    return 0;
}
/*Escreva um programa que solicite um numero ao usuario ate que o valor deste esteja entre 1 e 100*/
#include <stdio.h>

int main(void)
{
    int valor;

    while (1)
    {
        puts("Informe um valor:");
        scanf("%d", &valor);

        int buffer;
        while ((buffer = getchar()) != '\n' && buffer != EOF);

        if (valor > 1 && valor < 100)
        {
            puts("Seu valor esta entre 1 e 100, ate mais.");
            break;
        }

        puts("Seu valor esta fora do intervalor de 1 e 100");
    }

    return 0;
}

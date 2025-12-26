/*Programa que retorne verdade se o numero for impar e falso se for par */
#include <stdio.h>

void impar_par(int x);
void limpar_buffer(void);


int main(void)
{
    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    limpar_buffer();

    impar_par(n);


    return 0;
}

void impar_par(int x)
{
    if (x % 2 != 0)
    {
        printf("Verdade o numero %d e impar", x);
    }
    else
    {
        printf("Falso o numero %d e par", x);
    }
}

void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

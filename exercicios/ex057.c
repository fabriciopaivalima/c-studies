/*Escreve um programa que determine se um numero x esta dentro de um intervalo fornecido pelo usuario*/

#include <stdio.h>


void intervalo(int n, int i, int s);
void limpar_buffer(void);


int main(void)
{
    int num, int_inf, int_sup;

    printf("Informe o intervalo inferior: ");
    scanf("%d", &int_inf);
    limpar_buffer();

    printf("Informe o intervalo superior: ");
    scanf("%d", &int_sup);
    limpar_buffer();

    printf("Informe o valor: ");
    scanf("%d", &num);
    limpar_buffer();

    intervalo(num, int_inf, int_sup);


    return 0;
}

void intervalo(int n, int i, int s)
{
    if (n > i && n < s)
    {
        printf("O numero %d esta no intervalo %d ---- %d\n", n, i, s);
    }
    else
    {
        printf("O numero %d esta fora do intervalo %d ---- %d\n", n, i, s);
    }
}

void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

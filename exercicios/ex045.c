/*Programa que solicite ao usuario dois numeros e depois mostre sua soma e seu produto*/
#include <stdio.h>

int soma(int n1, int n2); // cabecalhos.
int produto(int n1, int n2);

int main(void)
{
    int n1, n2, buffer;

    puts("Infome dois numeros: ");
    scanf("%d%d", &n1, &n2);
    while ((buffer = getchar()) != '\n' && buffer != EOF);

    printf("Soma: %d\n", soma(n1, n2));
    printf("Produto: %d\n", produto(n1, n2));

    return 0;
}

int soma(int n1, int n2)
{
    return n1 + n2;
}

int produto(int n1, int n2)
{
    return n1 * n2;
}
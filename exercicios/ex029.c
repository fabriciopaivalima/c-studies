/*Escreva um programa que calcule a soma e o produto do n primeiros numeros naturais*/
#include <stdio.h>

int main(void)
{
    long long i, n, soma = 0, produto = 1;

    puts("Informe o numero de naturais a serem processados: ");
    scanf("%lld", &n);
    getchar();

    for (i = 1ll; i <= n; i++)
    {
        soma += i;
        produto *= i;
    }

    printf("Soma: %lld\nProduto: %lld\n", soma, produto);


    return 0;
}

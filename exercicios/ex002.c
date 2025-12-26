/*Escreva um programa que leia dois numeros e os apresente por ordem crescente*/
#include <stdio.h>

int main(void)
{
    int n1, n2, tmp;

    puts("Informe dois numeros: ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
    {
        tmp = n1; //usando uma variavel temporaria.
        n1 = n2;
        n2 = tmp;
    }

    printf("%d > %d\n", n1, n2);

    return 0;
}

/*Um programa que peca um numero ao usuario e escreva sua tabuada*/
#include <stdio.h>

int main(void)
{
    int numero_usuario, i = 1;

    puts("Informe o valor: ");
    scanf("%d", &numero_usuario);
    getchar();

    while (i <= 10)
    {
        printf("%2d x %2d = %2d\n", numero_usuario, i, numero_usuario * i);
        i++;
    }


    return 0;
}
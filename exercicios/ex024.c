/*Escreva um programa que verifique se uma data e valida ou nao*/
#include <stdio.h>

int main(void)
{
    int dia, mes, ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);
    getchar();
    printf("Informe o mes: ");
    scanf("%d", &mes);
    getchar();
    printf("Informe o ano: ");
    scanf("%d", &ano);
    getchar();

    if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 1)
    {
        printf("%d/%d/%d e uma data valida.", dia, mes, ano);
    } else
    {
        printf("%d/%d/%d e uma data invalida.", dia, mes, ano);
    }

    return 0;
}

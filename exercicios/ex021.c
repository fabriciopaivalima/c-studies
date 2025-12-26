/*Escreva um programa que mostre a quantidade de dias de um mes usando if-else*/
#include <stdio.h>

int main(void)
{
    int mes;
    printf("Informe o mes:\n"
        "[1] - Janeiro\n"
        "[2] - Fevereiro\n"
        "[3] - Marco\n"
        "[4] - Abril\n"
        "[5] - Maio\n"
        "[6] - Junho\n"
        "[7] - Julho\n"
        "[8] - Agosto\n"
        "[9] - Setembro\n"
        "[10] - Outubro\n"
        "[11] - Novembro\n"
        "[12] - Dezembro\n");
    scanf("%d", &mes);

    if (mes == 1)
    {
        puts("Janeiro - 31 dias");
    }
    else if (mes == 2)
    {
        puts("Fevereiro - 28 dias");
    }
    else if (mes == 3)
    {
        puts("Marco - 31 dias");
    }
    else if (mes == 4)
    {
        puts("Abril - 30 dias");
    }
    else if (mes == 5)
    {
        puts("Maio - 31 dias");
    }
    else if (mes == 6)
    {
        puts("Junho - 30 dias");
    }
    else if (mes == 7)
    {
        puts("Julho - 31 dias");
    }
    else if (mes == 8)
    {
        puts("Agosto - 31 dias");
    }
    else if (mes == 9)
    {
        puts("Setembro - 30 dias");
    }
    else if (mes == 10)
    {
        puts("Outubro - 31 dias");
    }
    else if (mes == 11)
    {
        puts("Novembro - 30 dias");
    }
    else if (mes == 12)
    {
        puts("Dezembro - 31 dias");
    }
    else
    {
        puts("Mes nao existente.");
    }


    return 0;
}

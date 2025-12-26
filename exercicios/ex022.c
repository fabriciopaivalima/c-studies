/*Escreva um programa que mostre a quantidade de dias de um mes usando switch case*/
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

    switch (mes)
    {
    case 1: puts("Janeiro - 31 dias");
        break;
    case 2: puts("Fevereiro - 28 dias");
        break;
    case 3: puts("Marco - 31 dias");
        break;
    case 4: puts("Abril - 30 dias");
        break;
    case 5: puts("Maio - 31 dias");
        break;
    case 6: puts("Junho - 30 dias");
        break;
    case 7: puts("Julho - 31 dias");
        break;
    case 8: puts("Agosto - 31 dias");
        break;
    case 9: puts("Setembro - 30 dias");
        break;
    case 10: puts("Outubro - 31 dias");
        break;
    case 11: puts("Novembro - 30 dias");
        break;
    case 12: puts("Dezembro - 31 dias");
        break;
    default: puts("Mes nao existente.");
    }


    return 0;
}

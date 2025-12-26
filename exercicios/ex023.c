/*Escreva um programa que mostre a quantidade de dias de um mes usando switch case, mas sem nenhum break*/
#include <stdio.h>

int main(void)
{

    int dias = 28, mes;

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
    case 2: dias = 28;
    case 4:
    case 6:
    case 9:
    case 11: if (mes != 2) dias = dias + 2; else dias = 28;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: if ( mes != 2 && mes != 4 && mes != 6 && mes != 9 && mes != 11) dias = dias + 3;
    }

    printf("O mes escolhido tem %d dias\n", dias);

    return 0;
}
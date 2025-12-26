/*Excreva um programa que aplique uma taxa de 10% aos solteiros e 9% aos casados*/
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    float salario, taxa;
    char estado_civil;

    puts("Informe seu salario: ");
    scanf("%f", &salario);

    getchar(); // Consumir o Buffer

    puts("[C] - Casado\n[S] - Solteiro\n");
    estado_civil = tolower(getchar());

    if (estado_civil == 'c')
    {
        taxa = 0.09;
        salario = salario - (salario * taxa);
        printf("Estado civil: %c\nTaxa: %.2f%%\nSalario: R$ %.2f\n", estado_civil, taxa * 100, salario);
    }
    else if (estado_civil == 's')
    {
        taxa = 0.1;
        salario = salario - (salario * taxa);
        printf("Estado civil: %c\n%.2f%%\nSalario: R$ %.2f\n", estado_civil, taxa * 100, salario);
    }
    else
    {
        puts("Informacao errada.");
    }


    return 0;
}

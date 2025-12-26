/*Escreva um programa que calcule o imposto pago por mulheres e por homens, sabendo que as mulheres pagam 10% e que os
 * homens para mais 5% do que as mulheres
 */
#include <stdio.h>

int main(void)
{
    char sexo;
    float taxa, salario;

    printf("Informe o sexo:\n[M] - Masculino\n[F] - Femenino\n");
    sexo = getchar();
    puts("Informe o salario: ");
    scanf("%f", &salario);

    switch (sexo)
    {
    case 'm':
    case 'M':
        {
            taxa = 0.15;
            printf("Sua taxa e de %.2f%%\n", taxa * 100);
            printf("Seu salario e de R$ %.2f\n", salario - (salario * taxa));
        }
        break;
    case 'f':
    case 'F':
        {
            taxa = 0.1;
            printf("Sua taxa e de %.2f%%\n", taxa * 100);
            printf("Seu salario e de R$ %.2f\n", salario - (salario * taxa));
        }
        break;
    default: puts("Sexo invalido");
    }

    return 0;
}

/*Escreva um programa que calcule o imposto pago por mulheres e por homens, sabendo que as mulheres pagam 10% e que os
* homens para mais 5% do que as mulheres. Nao use a clausula break.
 */
#include <stdio.h>

int main(void)
{
    char sexo;
    float taxa = 0.0, salario;

    printf("Informe o sexo:\n[M] - Masculino\n[F] - Femenino\n");
    sexo = getchar();
    puts("Informe o salario: ");
    scanf("%f", &salario);

    switch (sexo)
    {
    case 'm':
    case 'M': taxa = 0.05 + taxa;
    case 'f':
    case 'F': taxa = taxa + 0.1; printf("Seu salario e de R$ %.2f\nE o imposto pago e de R$ %.2f\n", salario - (salario * taxa), salario * taxa);
    }

    return 0;
}

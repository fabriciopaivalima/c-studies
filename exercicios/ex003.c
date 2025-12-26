/*Escreva um programa que solicite um salario e mostre o imposta a pagar.
 * Se o salario for negativo ou zero mostre o erro respectivo
 * Se o salario for maior que 1000, paga 10% de imposto, se nao paga 5%.
 */

#include <stdio.h>

int main(void)
{
    float salario_sem_imposto, imposto;

    puts("Informe o salario: ");
    scanf("%f", &salario_sem_imposto);

    if (salario_sem_imposto <= 0)
    {
        puts("ERRO, salario NEGATIVO ou ZERO");
    }
    else
    {
        if (salario_sem_imposto >= 1000)
        {
            imposto = (salario_sem_imposto * 1.1) - salario_sem_imposto;
            printf("Imposto: R$ %.2f\n", imposto);
        }
        else
        {
            imposto = (salario_sem_imposto * 1.05) - salario_sem_imposto;
            printf("Imposto: R$ %.2f\n", imposto);
        }
    }


    return 0;
}

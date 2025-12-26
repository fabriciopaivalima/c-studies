/*Escreva um programa que calculep salario bruto, liquido e o importo a pagar
* salario menor que 1000 imposto 5%
* salario entre 1000 e 5000 11%
* maior que 5000 35%
 */

#include <stdio.h>

int main(void)
{
    float salario_bruto, salario_liquido, imposto;

    puts("Informe o salario bruto: ");
    scanf("%f", &salario_bruto);

    if (salario_bruto < 1000)
    {
        imposto = salario_bruto * 0.05;
        salario_liquido = salario_bruto - imposto;
    }
    else if (salario_bruto < 5000)
    {
        imposto = salario_bruto * 0.11;
        salario_liquido = salario_bruto - imposto;
    }
    else
    {
        imposto = salario_bruto * 0.35;
        salario_liquido = salario_bruto - imposto;
    }

    printf("Salario Bruto: R$ %.2f\nSalario Liquido: R$ %.2f\nImposto: R$ %.2f\n", salario_bruto, salario_liquido,
           imposto);

    return 0;
}

/*Implementem programa que calcule os aumentos de ordenado para o corrente ano. Se o ordenado for maior que 1000 deve
 * ser aumentado 5% se nao deve ser aumentado 7%
 */

#include <stdio.h>

int main(void)
{
    float salario, aumento;

    puts("Informe o salario: ");
    scanf("%f", &salario);

    aumento = (salario > 1000) ? 0.05: 0.07;

    salario = salario * (1 + aumento);

    printf("Novo salario: R$ %.2f\n", salario);


    return 0;
}

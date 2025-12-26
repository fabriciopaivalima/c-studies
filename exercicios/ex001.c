/*Programa que adiciona 1000 ao salario se ele for superior a 100000*/
#include <stdio.h>

int main(void)
{
    double salario;

    puts("Informe o salario: ");
    scanf("%lf", &salario);

    if (salario < 100000)
    {
        salario += 1000;
    }

    printf("Salario: R$ %.2lf\n", salario);


    return 0;
}

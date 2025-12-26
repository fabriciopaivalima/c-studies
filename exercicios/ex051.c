/*Programa que devolve o numero de segundos existentes numa quantidade de horas repassadas pelo usuario*/

#include <stdio.h>

void limpar_buffer(void);
int qtd_segundos(int qtd_horas);


int main(void)
{
    int qtd_horas;

    printf("Informe a quantidade de horas: ");
    scanf("%d", &qtd_horas);

    limpar_buffer();

    printf("%d horas -> %d segundos", qtd_horas, qtd_segundos(qtd_horas));

    return 0;
}

void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

int qtd_segundos(int qtd_horas)
{
    return qtd_horas * 3600;
}

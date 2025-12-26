/*Programa que calcule o valor atual liquido, dado n anos, t taxa, x valor inicial*/

#include <stdio.h>

void limpar_buffer(void);
float pot(float n, int x);
float val(float x, float t, int n);

int main(void)
{
    float valor_inicial, taxa_anual;
    int tempo;
    printf("Informe o valor incial: ");
    scanf("%f", &valor_inicial);

    limpar_buffer();

    printf("Informe a taxa de juros anual: ");
    scanf("%f", &taxa_anual);

    limpar_buffer();

    printf("Informe a quantidade de anos: ");
    scanf("%d", &tempo);

    limpar_buffer();

    taxa_anual /= 100;

    printf("O valor R$%.2f em %d anos a uma taxa anual de %.2f%% resulta em R$ %.2f\n", valor_inicial, tempo,
           taxa_anual * 100
           , val(valor_inicial, taxa_anual, tempo));

    return 0;
}

void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

float pot(float n, int x)
{
    int i;
    float j = 1.0;

    for (i = 1; i <= x; i++)
    {
        j *= n;
    }
    return j;
}

float val(float x, float t, int n)
{
    int i;
    float res = 0;


    for (i = 1; i <= n; i++)
    {
        res += x / pot((1 + t), i);
    }

    return res;
}

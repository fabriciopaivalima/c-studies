/*Implemente a funcao que calcule a pontencia de n elevado a x*/
#include <stdio.h>

float pot(float n, int x);

void limpar_buffer(void);


int main(void)
{

    int e;
    float potencia, b;

    printf("Informe a base: ");
    scanf("%f", &b);

    limpar_buffer();

    printf("Informe o expoente: ");
    scanf("%d", &e);

    limpar_buffer();

    potencia = pot(b, e);

    printf("%.2f elevado a %d e igual a %.2f\n", b, e, potencia);

    return 0;
}

float pot(float n, int x)
{
    int i;
    float j = 1.0;

    for (i = 1; i <= x ; i++)
    {
        j *= n;
    }
    return j;
}

void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}
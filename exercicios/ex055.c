/*Dados tres numeros retorne o maior deles*/
#include <stdio.h>


void limpar_bufeer(void);
float max(float x, float y, float z);


int main(void)
{
    float x, y, z;

    printf("Informe tres numeros diferentes: ");
    scanf("%f%f%f", &x, &y, &z);

    limpar_bufeer();

    printf("O maior do tres numeros e: %.2f\n", max(x, y, z));

    return 0;
}

float max(float x, float y, float z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

void limpar_bufeer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

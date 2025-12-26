/*Escreva um programa que indique qual o estado civil correspondente a um caractere introduzido em maiusculas*/
#include <stdio.h>

int main(void)
{
    char estado_civil;

    printf("Informe o estado civil:\n[C] - Casado\n[S] - Solteiro\n[V] - Viuvo\n");
    estado_civil = getchar();

    switch (estado_civil)
    {
    case 'C': puts("Casado");
        break;
    case 'S': puts("Solteiro");
        break;
    case 'V': puts("Viuvo");
        break;
    default: puts("Valor invalido");
    }

    return 0;
}

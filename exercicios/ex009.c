/*Escreva um programa que indique qual o estado civil correspondente a um caractere introduzido */
#include <stdio.h>

int main(void)
{
    char estado_civil;

    printf("Informe seu estado civil:\n[C] - Casado\n[S] - Solteiro\n[V] - Viuvo\n");
    estado_civil = getchar();

    switch (estado_civil)
    {
    case 'c':
    case 'C': puts("Casado");
        break;
    case 's':
    case 'S': puts("Solteiro");
        break;
    case 'v':
    case 'V': puts("Viuvo");
        break;
    default: puts("Valor invalido");
    }


    return 0;
}

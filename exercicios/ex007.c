/*Implemente um programa que, dada uma letra, indique qual e o estado civil da pessoa*/
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char estado_civil;

    puts("Qual o estado civil:\n"
        "[C] - Casado\n"
        "[S] - Solteiro\n"
        "[V] - Viuvo(a)\n"
    );

    estado_civil = tolower(getchar());

    if (estado_civil == 's')
    {
        puts("Solteiro");
    }
    else if (estado_civil == 'c')
    {
        puts("Casado");
    }
    else if (estado_civil == 'v')
    {
        puts("Viuvo");
    }
    else
    {
        puts("Invalido");
    }

    return 0;
}

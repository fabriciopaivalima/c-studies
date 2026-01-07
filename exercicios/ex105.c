/*Crie um programa em C que:

Declare:

char pequeno[5];


Use strcpy para copiar uma string maior que o buffer

Imprima o conteúdo de pequeno

Em comentário, explique:

o que pode acontecer

por que esse código é inseguro*/

#include <stdio.h>
#include <string.h>

int main(void) {

    char pequeno[5];
    char nome[] = "Fabricio paiva lima";

    strcpy(pequeno, nome);

    printf("Buffer: \"%s\"\n", pequeno); // Nao aparenta ter acontecido nenhum erro
    printf("Nome: \"%s\"\n", nome); // Aqui vemos o erro causado por estouro de memoria, no caso a string "invadio" o espaco imediatamente posterior ao seu.


    return 0;
}
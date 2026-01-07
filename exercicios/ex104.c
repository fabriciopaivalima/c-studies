/*
* Declare duas strings:

char origem[100];
char destino[100];


Leia uma string para origem usando fgets

Remova o '\n'

Copie origem para destino usando strcpy

Mostre a string destino
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char origem[100];
    char destino[100];
    int i;

    printf("Escreva uma frase: \n");
    fgets(origem, sizeof(origem), stdin);

    for (i = 0; origem[i] != '\0'; i++) {
        if (origem[i] == '\n') {
            origem[i] = '\0';
        }
    }

    strcpy(destino, origem); // Funcao que copia a string origem (inclusive o fim logico) para um string destino. Funcao perigosa porque nao se preocupa com o tamanho do buffer do destino.

    printf("Destino: \"%s\"\n", destino);

    return 0;
}

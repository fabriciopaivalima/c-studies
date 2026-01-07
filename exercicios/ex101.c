/*Crie um programa que:

Leia uma string origem

Copie o conteúdo para outra string destino

Mostre a string copiada*/


#include <stdio.h>

int main(void) {

    char origem[50];
    char destino[50];
    int i;

    printf("Informe uma frase: \n");
    fgets(origem, sizeof(origem), stdin);

    for (i = 0; origem[i] != '\0'; i++) {
        if (origem[i] == '\n') {
            origem[i] = '\0';
        }
    }

    i = 0;

    while (1) {
        if (origem[i] != '\0') {
            destino[i] = origem[i];
            i++;
        } else {
            destino[i] = '\0';
            break;
        }
    }

    printf("Destino: %s\n", destino);


    return 0;
}
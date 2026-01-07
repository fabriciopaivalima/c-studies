/*Declare um buffer de char com tamanho 10

Leia uma linha do teclado usando fgets

Mostre:

O que foi lido

Quantos caracteres foram armazenados (conte manualmente)*/

#include <stdio.h>

int main(void) {

    char buffer[10];
    int i;

    printf("Escreva uma frase: \n");
    fgets(buffer, sizeof(buffer), stdin);



    for (i = 0; buffer[i] != '\0'; i++ ) {

            if (buffer[i] == '\n') {
                buffer[i] = '\0';
            }

            printf("%c ", buffer[i]);
    }

    putchar('\n');
    printf("tamanho: %d", i);

    return 0;
}
/*Leia uma string com fgets

Remova o '\n'

Mostre:

O tamanho da string usando laço for

O tamanho da string usando strlen

Mostre os dois valores lado a lado*/

#include <stdio.h>
#include <string.h>

int main(void) {

    char texto[100];
    int i;

    printf("Informe uma frase: \n");
    fgets(texto, sizeof(texto), stdin);

    for (i = 0; texto[i] != '\0'; i++) {
       if (texto[i] == '\n') {
           texto[i] = '\0';
       }
    }

    for (i = 0; texto[i] != '\0'; i++) {

    }

    printf("Tamanho com FOR: %d\n", i);
    printf("Tamanho com STRLEN: %lu\n", strlen(texto)); // Retorna a quantidade de caracteres que existem antes do \0

    return 0;
}
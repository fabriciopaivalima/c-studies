/*Crie um programa em C que:

Leia uma string (frase) usando fgets

Remova o '\n'

Mostre:

O tamanho da string usando strlen

A primeira ocorrência da letra 'a' (índice)

A última ocorrência da letra 'a' (índice)*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[50];
    int i;

    printf("Informe uma frase qualquer: \n");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == '\n') {
            frase[i] = '\0';
        }
    }

    long int tamanho = strlen(frase);

    int primeira_ocorrencia;
    int ultima_ocorrencia;

    printf("Tamanho: %ld\n", tamanho);

    if (strchr(frase, 'a') != NULL) {
        primeira_ocorrencia = strchr(frase, 'a') - frase;
        ultima_ocorrencia = strrchr(frase, 'a') - frase;

        printf("Primeira ocorrencia no indice: %d\n", primeira_ocorrencia);
        printf("Ultima ocorrencia no indice: %d\n", ultima_ocorrencia);
    } else {
        printf("O caractere 'a' nao se econtra na frase.\n");
    }


    return 0;
}

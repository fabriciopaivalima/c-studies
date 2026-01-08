/*Crie um programa em C que:

Leia uma frase

Leia uma palavra

Use strstr para verificar se a palavra existe na frase

Se existir:

Mostre "Palavra encontrada"

Mostre o índice onde a palavra começa

Se não existir:

Mostre "Palavra nao encontrada"

Se a palavra for exatamente igual à frase, informe isso usando strcmp*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[50];
    char palavra[20];
    int i;

    printf("Informe uma frase: \n");
    fgets(frase, sizeof(frase), stdin);

    printf("Informe uma palavra: \n");
    fgets(palavra, sizeof(palavra), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == '\n') {
            frase[i] = '\0';
        }
    }

    for (i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == '\n') {
            palavra[i] = '\0';
        }
    }

    if (strstr(frase, palavra) != NULL) {
        printf("Palavra encontrada.\n");
        printf("A palavra comeca no indice: %ld\n", strstr(frase, palavra) - frase);
    } else {
        printf("Palavra nao encontrada.\n");
    }

    if (strcmp(frase, palavra) == 0) {
        printf("Frase e palavra sao iguais.\n");
    } else {
        printf("Frase e palavra sao diferentes.\n");
    }

    return 0;
}

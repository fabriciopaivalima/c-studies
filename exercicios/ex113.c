/*Crie um programa em C que:

Leia uma frase

Leia uma palavra

Mostre:

O tamanho da frase (strlen)

Verifique se a palavra:

é igual à frase (strcmp)

existe dentro da frase (strstr)

Se a palavra existir dentro da frase:

Mostre o índice onde começa (use ptrdiff_t)

Verifique a letra 'e' na frase:

Mostre o índice da primeira ocorrência (strchr)

Mostre o índice da última ocorrência (strrchr)

Se não existir, informe isso*/

#include <stdio.h>
#include <string.h>
#include <stddef.h>

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

    size_t tamanho = strlen(frase);

    int iguais_ou_nao = strcmp(frase, palavra);

    char *existe_substring = strstr(frase, palavra);
    char *houve_ocorrencia = strchr(frase, 'e');
    char *ultima_ocorrencia = strrchr(frase, 'e');

    printf("Tamanho total da frase: %zu\n", tamanho);

    if (iguais_ou_nao == 0) {
        printf("Frase e palavra sao iguais\n");
    } else {
        printf("Frase e palavra nao sao iguais\n");
    }

    if (existe_substring != NULL) {
        ptrdiff_t indice_substring = existe_substring - frase;
        printf("Palavra e substring de frase e se encontra no indice: %td\n", indice_substring);
    } else {
        printf("Palavra nao e substring de frase.\n");
    }

    if (houve_ocorrencia != NULL) {
        ptrdiff_t indice_primeira_ocorrencia = houve_ocorrencia - frase;
        ptrdiff_t indice_segunda_ocorrencia = ultima_ocorrencia - frase;
        printf("O caracter 'e' tem sua primeira ocorrencia no indice %td de frase.\n", indice_primeira_ocorrencia);
        printf("O caracter 'e' tem sua ultima ocorrencia no indice %td de frase.\n", indice_segunda_ocorrencia);
    } else {
        printf("O caractere 'e' nao existe em frase.\n");
    }

    return 0;
}

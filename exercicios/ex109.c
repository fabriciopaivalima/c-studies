/*
* Crie um programa em C que:

Leia uma string

Leia um caractere

Use strrchr para procurar o caractere

Se encontrar:

Mostre "Encontrado"

Mostre o índice da última ocorrência

Se não encontrar:

Mostre "Nao encontrado"
 */

#include <stdio.h>
#include <string.h>

int main(void) {

    char string[50];
    char ch;
    int i;

    printf("Informe uma string: \n");
    fgets(string, sizeof(string), stdin);

    for( i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
        }
    }

    printf("Informe um caracter: \n");
    ch = getchar();

    char *retorno = strrchr(string, ch);

    if (retorno != NULL) {
        printf("Encontrado!!\n");
        printf("Ultima ocorrencia esta no indice: %lu\n", retorno - string );
    } else {
        printf("Nao encontrado.\n");
    }
    // strrchr devolve o endereco da memoria que o caracter aparece pela ultima vez ou NULL se o caractere nao existir na string.

    return 0;
}
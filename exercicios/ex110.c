/*Crie um programa em C que:

Leia uma string principal

Leia uma substring

Use strstr para procurar a substring

Se encontrar:

Mostre "Substring encontrada"

Mostre o índice onde ela começa

Se não encontrar:

Mostre "Substring nao encontrada"*/

#include <stdio.h>
#include <string.h>

int main(void) {

    char string_principal[100];
    char substring[50];
    int i;

    printf("Informe a string principal: \n");
    fgets(string_principal, sizeof(string_principal), stdin);

    for (i = 0; string_principal[i] != '\0'; i++) {
        if (string_principal[i] == '\n') {
            string_principal[i] = '\0';
        }
    }

    printf("Informe a substring: \n");
    fgets(substring, sizeof(substring), stdin);

    for (i = 0; substring[i] != '\0'; i++) {
        if (substring[i] == '\n') {
            substring[i] = '\0';
        }
    }

    if (strstr(string_principal, substring) != NULL) {
        printf("Substring encontrada: %s\n", substring);
        printf("Ela comeca no indice: %td\n", strstr(string_principal, substring) - string_principal);
    } else {
        printf("Nao encontrada!!!");
    }

    return 0;
}

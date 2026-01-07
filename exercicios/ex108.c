/*Crie um programa em C que:

Leia uma string

Leia um caractere

Use strchr para procurar o caractere na string

Se encontrar:

Mostre "Encontrado"

Mostre a posição (índice) onde aparece

Se não encontrar:

Mostre "Nao encontrado"*/

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

   if (strchr(string, ch) != NULL) {
       printf("Encontrado!!\n");
       printf("Indice: %lu\n",strchr(string, ch) - string);
   } else {
       printf("Nao encontrado.\n");
   }
// strchr devolve o endereco da memoria que o caracter aparece pela primeira vez ou NULL se o caractere nao existir na string.

    return 0;
}
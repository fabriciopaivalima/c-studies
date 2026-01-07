/*Leia duas strings

Use strcmp

Mostre:

"Primeira vem antes" se o retorno < 0

"Segunda vem antes" se o retorno > 0

"Iguais" se o retorno == 0

Imprima também o valor retornado por strcmp*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[50];
    char str2[50];
    int i;

    printf("Informe a primeira string: \n");
    fgets(str1, sizeof(str1), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
        }
    }

    printf("Informe a segunda string: \n");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
        }
    }

    if (strcmp(str1, str2) == 0) {
        printf("Strings iguais\n");
    } else if (strcmp(str1, str2) < 0) {
        printf("String 1 vem antes da string 2\n");
    } else {
        printf("String 1 vem depois da string 2\n");
    }

    printf("Valor retornado por STRCMP: %d\n", strcmp(str1, str2)); // Retorno 0 e pq as strings sao iguais e valores positivos ou negativas a depender da posicao de cada string que depende da ordem alfabetica.


    return 0;
}
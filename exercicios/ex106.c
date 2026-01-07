/*Leia duas strings usando fgets

Remova o '\n' das duas

Compare as strings usando strcmp

Mostre:

"Iguais" se o retorno for 0

"Diferentes" caso contrário

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
    } else {
        printf("Strings diferentes\n");
    }

    printf("Valor retornado por STRCMP: %d\n", strcmp(str1, str2)); // Retorno 0 e pq as strings sao iguais, qualquer valor diferente de 0 e por que sao diferentes.


    return 0;
}

/*
 Crie um programa que:

Leia duas strings

Compare caractere por caractere

Determine se são iguais ou diferentes
 */
#include <stdio.h>

int main(void) {
    int i, estado = 1, cont_str1 = 0, cont_str2 = 0;
    char str1[50];
    char str2[50];

    printf("Informe a primeira string: \n");
    fgets(str1, sizeof(str1), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
        } else {
            cont_str1++;
        }

    }

    printf("Informe a segunda string: \n");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
        } else {
            cont_str2++;
        }

    }

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            estado = 0;
        }
    }

    if (estado == 0  || cont_str1 != cont_str2) {
        printf("Diferentes\n");
    } else {
        printf("Iguais\n");
    }

    return 0;
}

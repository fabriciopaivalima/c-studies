/*Crie um programa que:

Declare dois vetores de int com 5 posições

Leia os valores dos dois vetores

Verifique se os vetores são iguais

Mostre:

"Vetores iguais" ou

"Vetores diferentes"*/

#include <stdio.h>

int main(void) {
    int vetor_a[5] = {0};
    int vetor_b[5] = {0};

    int i, flag = 0;

    for (i = 0; i < 5; i++) {
        printf("Informe a %d posivao do vetor A: ", i + 1);
        scanf(" %d", &vetor_a[i]);
        printf("Informe a %d posivao do vetor B: ", i + 1);
        scanf(" %d", &vetor_b[i]);
        if (vetor_a[i] != vetor_b[i]) {
            flag = 1;
        }
    }

    if (flag == 1) {
        printf("Vetores diferentes.\n");
    } else {
        printf("Vetores iguais.\n");
    }


    return 0;
}

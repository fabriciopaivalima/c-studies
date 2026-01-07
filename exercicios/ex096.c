/*Crie um programa que:

Declare dois vetores de int (A e B) com 5 posições

Leia os valores do vetor A

Copie os valores de A para B posição por posição

Mostre os valores do vetor B*/

#include <stdio.h>

int main(void) {
    int vetor_a[5] = {0};
    int vetor_b[5] = {0};

    int i;

    for (i = 0; i < 5; i++) {
        printf("Informe a %d posicao do vetor A: ", i + 1);
        scanf(" %d", &vetor_a[i]);
        vetor_b[i] = vetor_a[i];
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", vetor_b[i]);
    }


    return 0;
}

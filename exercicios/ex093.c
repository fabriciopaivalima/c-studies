/*
Crie um programa que:

Declare um vetor de int com 5 posições

Leia 5 números inteiros

Determine qual é o maior valor armazenado

Mostre apenas o maior valor*/

#include <stdio.h>

int main(void) {
    int vetor[5] = {0};

    printf("Informe o 1 elemento do vetor: \n");
    scanf(" %d", &vetor[0]);

    int i, maior = vetor[0];

    for (i = 1; i < 5; i++) {
        printf("informe o %d elemento do vetor: ", i + 1);
        scanf(" %d", &vetor[i]);

        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("O maior valor armazenado e: %d\n", maior);

    return 0;
}

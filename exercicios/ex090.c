/*Crie um programa em C que:

Declare um vetor de int com 5 posições

Leia 5 números inteiros digitados pelo usuário

Mostre os números na mesma ordem em que foram digitados*/

#include <stdio.h>

int main(void) {
    int vetor[5] = {0};
    int i;

    for (i = 0; i < 5; i++) {
        printf("Insira o %d elemento do vetor: ", i + 1);
        scanf(" %d", &vetor[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

/*Crie um programa que:

Declare um vetor de int com 6 posições

Leia 6 números inteiros

Mostre os números na ordem inversa

Sem criar outro vetor*/

#include <stdio.h>

int main(void) {
    int vetor[6], i;

    for (i = 0; i < 6; i++) {
        printf("Informe a %d posicao do vetor: ", i + 1);
        scanf(" %d", &vetor[i]);
    }

    for (i = 5; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

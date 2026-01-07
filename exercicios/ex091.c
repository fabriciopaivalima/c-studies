/*Crie um programa que:

Declare um vetor de int com 5 posições

Leia 5 números inteiros

Calcule a soma de todos os elementos

Mostre apenas o valor final da soma*/

#include <stdio.h>

int main(void) {

    int vetor[5] = {0};

    int i, somatorio = 0;

    for (i = 0; i < 5; i++) {
        printf("Informe a %d posicao do vetor: ", i + 1);
        scanf(" %d", &vetor[i]);
        somatorio += vetor[i];
    }

    printf("A soma dos elementos do vetor e: %d\n", somatorio);


    return 0;
}
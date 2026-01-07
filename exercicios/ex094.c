/*Crie um programa que:

Declare um vetor de int com 10 posições

Leia 10 números inteiros

Conte quantos desses números são pares

Mostre apenas a quantidade de números pares*/

#include <stdio.h>

int main(void) {

    int vetor[10] = {0}, i, quantidade_pares = 0;

    for (i = 0; i < 10; i++) {

        printf("Informe o %d elemento do vetor: ", i + 1);
        scanf(" %d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            quantidade_pares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", quantidade_pares);


    return 0;
}
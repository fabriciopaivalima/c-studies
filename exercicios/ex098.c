/*Crie um programa que:

Leia 10 números inteiros entre 0 e 9

Conte quantas vezes cada número aparece

Mostre o resultado no formato:

0 → X vezes
1 → Y vezes
...
9 → Z vezes*/

#include <stdio.h>

int main(void) {
    int vetor[10] = {0}, vetor_contagem[10] = {0}, i;


    for (i = 0; i < 10; i++) {
        printf("Informe a %d posicao: ", i + 1);
        scanf(" %d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        vetor_contagem[vetor[i]]++; // aqui esta a logica central.
    }

    for (i = 0; i < 10; i++) {

            printf("%d -> %d vezes\n", i, vetor_contagem[i]);

    }
    return 0;
}

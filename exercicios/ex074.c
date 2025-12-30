/*Escreva um programa que declare um vetor com n=10 de inteiros que o ultimo elemento seja o resultado de i*(n-1)*/
#include <stdio.h>

const int N = 10;

void inicializador(int v[N]);

int main(void) {
    int vetor[N], i;

    inicializador(vetor);

    vetor[N - 1] *= (N -1);

    printf("%d\n", vetor[N -1]);

    return 0;
}

void inicializador(int v[N]) {
    int i;
    for (i = 0; i < N; i++) {
        v[i] = i;
    }
}
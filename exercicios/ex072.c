/*Escreve um programa que mostre o tabuleiro do jogo da velha, em qualquer estado, depois de ter sido
 * iniciado com espaco apos a declaracao do mesmo
 */

#include <stdio.h>

const int DIM = 3;
const char X = 'X';
const char O = 'O';
const char nada = ' ';
const char divisor = '|';

int main(void) {
    char velha[DIM][DIM];

    int i, j;

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            if (i == 0 && j == 0) {
                printf("%2c%2c ", X, divisor);
            } else if (i == 0 && j == 2) {
                printf("%2c\n", O);
            } else if (i == 1 && j == 1) {
                printf("%2c%2c", X, divisor);
            } else if (i == 2 && j == 2) {
                printf("%2c\n", O);
            } else if (i == 1 && j == 2) {
                printf("%2c\n", nada);
            } else if (i == 0 && j == 1) {
                printf("%2c%1c", nada, divisor);
            } else {
                printf("%2c%2c", nada, divisor);
            }
        }
        if (i != 2) {
            printf("------------\n");
        }
    }

    return 0;
}

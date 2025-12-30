/*Escreva um programa que permita gerar uma jogada para um tipo de sena, indicando os numeros a apostar, os quais
 * deverao ser criador aleatoriamente.
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

const int DIM = 7;
const char MARCACAO = 'X';
const int QTD_MAX_NUM_ESCOLHIDOS = 10;
const int QTD_MIN_NUM_ESCOLHIDOS = 1;

void inicilizar_cartao(int v[DIM][DIM]);

void mostrar_cartao(int mc[DIM][DIM]);

void gerar_numeros_aleatorios(int v[], int c[DIM][DIM], int n);

void mostrar_numeros_gerados(int v[], int n);

void limpar_buffer(void);

void marcar_volante(int v[DIM][DIM], int c[], int n);


int main(void) {
    int volante[DIM][DIM], numeros;


    inicilizar_cartao(volante);

    mostrar_cartao(volante);

    do {
        printf("Quantidade maxima de numeros %d\n", QTD_MAX_NUM_ESCOLHIDOS);
        printf("Escolha a quantidade de numeros a serem marcados:");
        scanf(" %d", &numeros);
        limpar_buffer();
    } while (numeros < QTD_MIN_NUM_ESCOLHIDOS || numeros > QTD_MAX_NUM_ESCOLHIDOS);

    int numeros_aleatorios[numeros];

    gerar_numeros_aleatorios(numeros_aleatorios, volante, numeros);

    mostrar_numeros_gerados(numeros_aleatorios, numeros);

    marcar_volante(volante, numeros_aleatorios, numeros);

    mostrar_cartao(volante);

    return 0;
}

void marcar_volante(int v[DIM][DIM], int c[], int n) {
    int i, j, k;
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            for (k = 0; k < n; k++) {
                if (v[i][j] == c[k]) {
                    v[i][j] = MARCACAO; // forma de varrer a string de numeros aleatorios
                }
            }
        }
    }
}

void mostrar_numeros_gerados(int v[], int n) {
    int i;
    printf("Os numeros gerados foram: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    putchar('\n');
}

void gerar_numeros_aleatorios(int v[], int c[DIM][DIM], int n) {
    int i;
    srand((unsigned) time(NULL)); // semente

    for (i = 0; i < n; i++) {
        v[i] = (1 + rand() % c[DIM - 1][DIM - 1]); // valores entre 1 e 49
    }
}

void inicilizar_cartao(int v[DIM][DIM]) {
    int i, j, cont = 1;

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            v[i][j] = cont;
            cont++;
        }
    }
}

void mostrar_cartao(int mc[DIM][DIM]) {
    int i, j;
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            if (mc[i][j] != 88) {
                printf(" %4d", mc[i][j]);
            } else {
                printf("   %c%c", MARCACAO, MARCACAO);
            }
        }
        putchar('\n');
    }
}

void limpar_buffer(void) {
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

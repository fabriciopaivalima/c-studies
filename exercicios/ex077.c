/*funcao que transpoe uma matriz v com MAX por MAX elementos*/
#include <stdio.h>

const int MAX = 3;

void transposta(int v[MAX][MAX]) {
    int i, j;
    int temp;

    for (i = 0; i < MAX; i++) {
        for (j = i + 1; j < MAX; j++) {
            temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
}

int main(void) {

    int matriz[3][3], i, j, cont = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = cont;
            cont++;
        }
    }

    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%6d", matriz[i][j]);
        }
        putchar('\n');
        putchar('\n');
    }
        putchar('\n');
        putchar('\n');

    transposta(matriz);

    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%6d", matriz[i][j]);
        }
        putchar('\n');
        putchar('\n');
    }

    return 0;
}
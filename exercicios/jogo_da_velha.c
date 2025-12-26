/*Crie um jogo da velha*/

#include <stdio.h>

// constantes

const int DIM = 3;
const char X = 'X';
const char O = 'O';

// Cabecalhos de funcoes

void carga_inicial_velha(char m[DIM][DIM]);

void formato(char mc[DIM][DIM]);

char func_simbolo(char i);

int realizar_jogada(char m[DIM][DIM], char posicao, char simbolo);

int tabuleiro(char mc[DIM][DIM]);


//Funcao principal
int main(void) {
    char simbolo_jogador1, simbolo_jogador2;

    char mat[DIM][DIM], simbolo, posicao;
    int turno = 0, c, resultado;
    carga_inicial_velha(mat);
    // Validacao para que o jogador so possa escolher 1 ou 2
    do {
        printf("Jogador 1 escolha seu simbolo:\n[X] - 1\n[O] - 2\n");
        scanf(" %c", &simbolo);
    } while (simbolo != '1' && simbolo != '2');


    simbolo_jogador1 = func_simbolo(simbolo);

    if (simbolo_jogador1 == X) {
        simbolo_jogador2 = O;
    } else {
        simbolo_jogador2 = X;
    }

    formato(mat);

    while (turno < 9) {
        int jogador_atual;
        char simbolo_atual;

        if (turno % 2 == 0) {
            jogador_atual = 1;
            simbolo_atual = simbolo_jogador1;
        } else {
            jogador_atual = 2;
            simbolo_atual = simbolo_jogador2;
        }
        while (1) {
            printf("Jogador %d escolha uma posicao: \n", jogador_atual);
            scanf(" %c", &posicao);
            c = getchar();
            if (posicao >= '1' && posicao <= '9' && c == '\n') {
                break;
            }
            printf("Posicao inesistente, repita.\n");
            formato(mat);

            while (c != '\n' && c != EOF) {
                c = getchar();
            }
        }

        if (realizar_jogada(mat, posicao, simbolo_atual) == 1) {
            turno++;
        }

        resultado = tabuleiro(mat);

        switch (resultado) {
            case 0: {
                printf("Jogador 1 venceu!!!\n");
                turno = 10;
                break;
            }
            case 1: {
                printf("Jogador 2 venceu!!!\n");
                turno = 10;
                break;
            }
        }

        formato(mat);
    }
    if (turno != 10) {
        printf("Empate!!!\n");
    }

    return 0;
}

// Funcao que inicia a matriz com numeros inteiros de 1 a 9

void carga_inicial_velha(char m[DIM][DIM]) {
    int i, j, cont = 1;

    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            m[i][j] = cont + '0';
            cont++;
        }
    }
}

//Funcao que da o formato da matriz
void formato(char mc[DIM][DIM]) {
    int i, j;
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            if (j != 2) {
                printf(" %4c%4c", mc[i][j], '|');
            } else {
                printf(" %4c", mc[i][j]);
            }
        }
        putchar('\n');
        if (i < 2) {
            printf("   ----------------------\n");
        }
    }
}


//Funcao para o jogador definir seu simbolo
char func_simbolo(char i) {
    return (i == '1') ? X : O;
}

int realizar_jogada(char m[DIM][DIM], char posicao, char simbolo) {
    int i, j, ajuste_posicao;


    switch (posicao) {
        case '1': ajuste_posicao = 1;
            break;
        case '2': ajuste_posicao = 2;
            break;
        case '3': ajuste_posicao = 3;
            break;
        case '4': ajuste_posicao = 4;
            break;
        case '5': ajuste_posicao = 5;
            break;
        case '6': ajuste_posicao = 6;
            break;
        case '7': ajuste_posicao = 7;
            break;
        case '8': ajuste_posicao = 8;
            break;
        case '9': ajuste_posicao = 9;
            break;
        default: return 0;
    }

    i = (ajuste_posicao - 1) / 3;
    j = (ajuste_posicao - 1) % 3;

    if (m[i][j] >= '1' && m[i][j] <= '9') {
        m[i][j] = simbolo;
        return 1;
    } else {
        return 0;
    }
}

int tabuleiro(char mc[DIM][DIM]) {
    // return -1 quando nao ha vitoria
    // return 0 vitoria x
    // return 1 vitoria o

    int i, j, verificador_linha_x = 0, verificador_linha_o = 0, verificador_coluna_x = 0, verificador_coluna_o = 0,
            verificador_diagonal_principal_x = 0, verificador_diagonal_principal_o = 0,
            verificador_diagonal_secundaria_x = 0,
            verificador_diagonal_secundaria_o = 0;


    for (i = 0; i < DIM; i++) {
        // loop verificador de linhas
        for (j = 0; j < DIM; j++) {
            if (mc[i][j] == X) {
                verificador_linha_x++;
            } else if (mc[i][j] == O) {
                verificador_linha_o++;
            }
        }

        if (verificador_linha_x == 3) {
            return 0;
        } else if (verificador_linha_o == 3) {
            return 1;
        }

        verificador_linha_x = 0;
        verificador_linha_o = 0;
    }

    for (i = 0; i < DIM; i++) {
        // loop verificador de colunas
        for (j = 0; j < DIM; j++) {
            if (mc[j][i] == X) {
                verificador_coluna_x++;
            } else if (mc[j][i] == O) {
                verificador_coluna_o++;
            }
        }
        if (verificador_coluna_x == 3) {
            return 0;
        } else if (verificador_coluna_o == 3) {
            return 1;
        }

        verificador_coluna_x = 0;
        verificador_coluna_o = 0;
    }

    for (i = 0, j = 0; i < DIM; i++, j++) {
        // loop verificador  diagonal principal
        if (mc[i][j] == X) {
            verificador_diagonal_principal_x++;
        } else if (mc[i][j] == O) {
            verificador_diagonal_principal_o++;
        }
    }
    if (verificador_diagonal_principal_x == 3) {
        return 0;
    } else if (verificador_diagonal_principal_o == 3) {
        return 1;
    }

    for (i = 0, j = 2; i < DIM; i++, j--) {
        // loop verificador  diagonal secundaria
        if (mc[i][j] == X) {
            verificador_diagonal_secundaria_x++;
        } else if (mc[i][j] == O) {
            verificador_diagonal_secundaria_o++;
        }
    }
    if (verificador_diagonal_secundaria_x == 3) {
        return 0;
    } else if (verificador_diagonal_secundaria_o == 3) {
        return 1;
    }

    return -1;
}

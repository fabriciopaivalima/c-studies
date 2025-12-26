/*Programa que receba um caracter e o retorne como maiusculo*/

#include <stdio.h>

char maiusculo(char ch);
void limpar_buffer(void);

int main(void) {


    char caracter;

    printf("informe um caracter: ");
    caracter = getchar();

    limpar_buffer();

    if (caracter >= 'a' && caracter <= 'z' || caracter >= 'A' && caracter <= 'Z') {
        printf("'%c' ----> '%c'", caracter, maiusculo(caracter));
    } else {
        printf("O caracter informado nao e uma letra.");
    }


    return 0;
}

char maiusculo(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch;
    } else {
        return ch - 32;
    }
}



void limpar_buffer(void) {
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

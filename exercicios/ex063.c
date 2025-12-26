/*Programa que diga se o caracter e um espaco ou tab*/
#include <stdio.h>


void espaco_tab(char ch);

void limpar_buffer(void);

int main() {
    char ch;

    printf("Informe um caracter:");
    ch = getchar();

    limpar_buffer();

    espaco_tab(ch);


    return 0;
}

void espaco_tab(char ch) {
    if (ch == ' ' || ch == '\t') {
        printf("'%c' e um espaco ou uma tabulacao", ch);
    } else {
        printf("'%c' nao e um espaco ou uma tabulacao", ch);
    }
}

void limpar_buffer(void) {
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

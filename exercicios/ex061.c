/*Programa que diga se uma letra e minuscula ou nao*/
#include <stdio.h>

void e_minuscula(char ch);

void limpar_buffer(void);

int main(void) {
    char letra;

    printf("Informe uma letra: ");
    letra = getchar();
    limpar_buffer();

    if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')) {
        e_minuscula(letra);
    } else {
        printf("O caracter informado nao e uma letra.");
    }


    return 0;
}

void e_minuscula(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        printf("'%c' e minuscula\n", ch);
    } else {
        printf("'%c' nao e minuscula\n", ch);
    }
}


void limpar_buffer(void) {
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

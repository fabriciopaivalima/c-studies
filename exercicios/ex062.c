/*Programa que diga se uma letra e maiscula ou nao*/
#include <stdio.h>

void e_maiuscula(char ch);

void limpar_buffer(void);

int main(void) {
    char letra;

    printf("Informe uma letra: ");
    letra = getchar();
    limpar_buffer();

    if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')) {
        e_maiuscula(letra);
    } else {
        printf("O caracter informado nao e uma letra.");
    }


    return 0;
}

void e_maiuscula(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' e maiuscula\n", ch);
    } else {
        printf("'%c' nao e maiuscula\n", ch);
    }
}


void limpar_buffer(void) {
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

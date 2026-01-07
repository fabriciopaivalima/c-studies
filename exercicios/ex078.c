/*Programa que leia nomes e o apresente na tela ate que um nome vazio seja introduzido pelo operador*/


#include <stdio.h>

int main(void) {

    char nome[100];

    while (1) {

        printf("Informe um nome:\n");
        fgets(nome, 100, stdin);

        if (nome[0] == '\n') {
            break;
        } else {
            printf("Nome: %s", nome);
        }
    }

    return 0;

}


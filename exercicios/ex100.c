/*Crie um programa que:

Declare uma string char nome[50]

Leia um nome completo (com espaços)

Remova o '\n'

Mostre:

O nome digitado

A quantidade de caracteres (sem '\0')*/

#include <stdio.h>

int main(void) {

    char nome[50];
    int i, cont = 0;

    printf("Informe um nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') {
            nome[i] = '\0';
        } else {
            cont++;
        }
    }

    printf("Nome: %s\n", nome);
    printf("Quantidade: %d", cont);

    return 0;
}
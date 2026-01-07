#include <stdio.h>
#include <string.h>

int main(void) {

    char nome[20];
    char sobrenome[20];
    char destino[50];

    printf("Informe o nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Informe o sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);

    nome[strcspn(nome, "\n")] = ' ';
    sobrenome[strcspn(sobrenome, "\n")] = '\0';

    destino[0] = '\0';

    strcat(destino, (strcat(nome, sobrenome)));

    printf("%s", destino);

    return 0;
}
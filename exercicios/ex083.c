/*escreva um programa que leia nome e sobre nomes de pessoas e os mostre na tela no fortamato "Sobrenome, nome". O programa
 *deve terminar quando o usuario inserir um nome vazio.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[50];
    char nome[20];
    char sobre_nome[20];

    while (1) {

        printf("Informe seu nome: ");
        fgets(nome, sizeof(nome), stdin);

        if (nome[0] == '\n') {
            break;
        }

        printf("Informe o sobre nome: ");
        fgets(sobre_nome, sizeof(sobre_nome), stdin);

        nome[strcspn(nome, "\n")] = '\0';
        sobre_nome[strcspn(sobre_nome, "\n")] = '\0';

        snprintf(buffer, sizeof(buffer), "%s, %s", sobre_nome, nome);

        printf("%s\n", buffer);

    }
    return 0;
}
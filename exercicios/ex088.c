#include <stdio.h>
#include <string.h>

int main(void) {

    char linha[100];

    printf("Escreva uma linha de texto:");
    fgets(linha, sizeof(linha), stdin);

    linha[strcspn(linha, "\n")] = 0;

    printf("%s\n", linha);

    return 0;
}
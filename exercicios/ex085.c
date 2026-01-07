#include <stdio.h>
#include <string.h>

int main(void) {

    char palavra[20];
    char destino[4];

    printf("Informe um palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    strcpy(destino, palavra);

    printf("Origem: %s\n", palavra);
    printf("Destino: %s\n", destino); // O destino ira "tranbordar" e ocupar o espaco alocado vizinho, que no caso e da str palavra.


    return 0;
}

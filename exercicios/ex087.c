#include <stdio.h>
#include <string.h>

int main(void) {
    int tamanho;
    printf("Informe o tamanho do nome: \n");
    scanf("%d", &tamanho);
    getchar();
    char buffer[tamanho + 50];
    char nome[tamanho + 1];
    printf("Informe o nome: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = 0;


    if (strlen(nome) == tamanho - 1 && nome[tamanho - 2] != '\n') {
        printf("[Aviso: O nome foi cortado para caber no tamanho]\n");
    }

    snprintf(buffer, sizeof(buffer), "Usuario: %s | Tamanho: %zu", nome, strlen(nome));
    printf("%s\n", buffer);


    return 0;
}

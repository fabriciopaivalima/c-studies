/*Programa deve apresentar a opcao escolhida pelo usuario ate ele desejar sair*/

#include <ctype.h>
#include <stdio.h>


int main(void)
{

    char opcao = ' ';

    do
    {
        printf("************\n");
        printf("*          *\n");
        printf("*  OPCOES  *\n");
        printf("*          *\n");
        printf("************\n");

        printf("[C] - Clientes\n");
        printf("[F] - Fornecedores\n");
        printf("[V] - Vendas\n");
        printf("[M] - Mercadorias\n");
        printf("[S] - Sair\n");
        opcao = tolower(getchar());
        getchar();

        switch (opcao)
        {
        case 'c': puts("Secao Clientes"); break;
        case 'f': puts("Secao Fornecedores"); break;
        case 'v': puts("Secao Vendas"); break;
        case 'm': puts("Secao Mercadorias"); break;
        case 's': puts("Sair"); break;
            default: puts("Escolha uma opcao valida");
        }

    } while (opcao != 's');

    return 0;
}
/*Escreva um programa em C que escreva na tela toda a tabela ASCII ( 0 a 255), escrevendo em cada linha o codigo ASCII
 *  e o caractere correspondente. A cada 20 linhas a tela deve ser parada ate que o usuario digite 'c' ou 'C' seguida de
 *  enter, para continuar a mostrar os proximo 20 caracteres.
 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char ch = 'c';

    int i, cont = 0;

    for (i = 0; i <= 255; i++)
    {
        if (cont < 20 && tolower(ch) == 'c')
        {
            printf("%3d -> %3c\n", i, (char)i);
            cont++;
        }
        else
        {
            printf("[C] - Para exibir os proximos 20 caracteres.\n");
            ch = getchar();

            int buffer;
            while ((buffer = getchar()) != '\n' && buffer != EOF);

            i--;
            cont = 0;
        }
    }

    return 0;
}

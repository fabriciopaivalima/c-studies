/*Escreva um programa que coloque na tela meia arvore de natal com asteriscos. O numero  de ramos devera ser
 * intriduzido pelo usuario.
 */

#include <stdio.h>

int main(void)
{
    int n, i, j;

    puts("Informe o numero de ramos: ");
    scanf("%d", &n);

    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Melhor forma de limpar o BUFFER

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", '*');
        }
        putchar('\n');
    }


    return 0;
}

/*Escreva um programa que solicite do usuario um numero e um caractere. Em seguida, tera que preencher
 * n linhas, caca uma delas com n caracteres
 */

#include <stdio.h>

int main(void)
{
    int n, i, j;
    char ch;

    puts("Informe um numero: ");
    scanf("%d", &n);
    while (getchar() != '\n' && getchar() != EOF);
    puts("Informe um caractere: ");
    ch = getchar();
    while (getchar() != '\n' && getchar() != EOF);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <=n; j++)
        {
            printf("%c ", ch);
        }
        putchar('\n');
    }
    return 0;
}

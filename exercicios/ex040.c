/*Altere o programa anterior de forma que em vez de asteriscos, sejam escritas letas em cada nivel, comencando
 *o nivel inicial com a letra 'A'
 */

#include <stdio.h>

int main(void)
{
    int n, i, j, ch = 65;

    puts("Informe o numero de ramos: ");
    scanf("%d", &n);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", (char) ch);
        }
        ch++;
        putchar('\n');
    }


    return 0;
}

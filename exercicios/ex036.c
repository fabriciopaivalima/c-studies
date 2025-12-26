/*escreva um programa que solicite ao usuario um numero e escreva simultaneamente a sequencia crescente e decrescente
* entre 1 e esse numero, este programa deve usar apenas duas variaveis
 */

#include <stdio.h>

int main(void)
{
    int n, i;
    puts("Informe um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d %d\n", i, ((n - i) + 1));

    }

    return 0;
}
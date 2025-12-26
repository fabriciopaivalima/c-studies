/*escreva um programa que solicite ao usuario um numero e escreva simultaneamente a sequencia crescente e decrescente
 * entre 1 e esse numero
 */

#include <stdio.h>

int main(void)
{
    int n, i = 1;
    puts("Informe um numero: ");
    scanf("%d", &n);
    int j = n;
    for (i; i <= n; i++, j--)
    {
        printf("%d %d\n", i, j);
    }



    return 0;
}

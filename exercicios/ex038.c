/*Escreva um programa que solicite ao usuario um numero. Em seguida escreva todos os numeros inteiros
 * a partir desse numero, exceto os multiplos de 3. Quando encontrar a primeiro multiplo de 10 a execucao
 * termina
 */

#include <stdio.h>

int main(void)
{
    int n;

    puts("Informe um numero: ");
    scanf("%d", &n);
    while (getchar() != '\n' && getchar() != EOF);

    while (1)
    {
        if ( n % 10 == 0)
        {
            break;
        }
        if (n % 3 != 0)
        {   printf("%d\n", n);

        }

        n++;
    }

    return 0;
}

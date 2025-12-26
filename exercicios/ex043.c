/*Escreva um programa em C que solicite ao usuario dois numeros inteirosentre 0 e 255 e escreva na tela todos
 *os caracteres da tabela ACSII cujos codigos variem entre os dois numeros introduzidos. Escrevendo em cada linha
 * o codigo ASCII e o caractere correspondente.
 */

#include <stdio.h>

int main(void)
{

    int n1, n2, buffer, i, inicio_ascii = 0, fim_ascii = 255, aux;
    do
    {
        puts("Informe dois numeros inteiros entre 0  e 255: ");
        scanf("%d%d", &n1, &n2);

        while ((buffer = getchar()) != '\n' && buffer != EOF);

        if (n1 > n2)
        {
            aux = n1;
            n1 = n2;
            n2 = aux;
        }

    } while (n1 < inicio_ascii || n1 > fim_ascii || n2 < inicio_ascii || n2 > fim_ascii);

    for (i = n1; i <= n2; i++)
    {
        printf("%3d -> %3c\n", i, (char) i);
    }

    return 0;
}
/*Escreva um programa em C que escreva na tela toda a tabela ASCII(0...255), escrevendo em cada linha
 * o codigo ASCII e seu caractere correspondente
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i <= 255; i++)
    {
        printf("%3d ---> %c\n", i, (char)i);
    }


    return 0;
}

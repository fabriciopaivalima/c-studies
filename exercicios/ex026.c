/*Escreva um programa que coloque na tela a tabuada de 5*/
#include <stdio.h>

int main(void)
{
    int n = 1;

    while (n <= 10)
    {
        printf("5 x %2d = %2d\n",n, 5 * n); // %2d permite que os valores ocupem sempre duas casa
        n++;
    }

    return 0;
}
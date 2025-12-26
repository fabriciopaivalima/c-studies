/*Escreva um funcao que verifique se determinado caracter e digito ou nao*/

#include <stdio.h>

int e_digito(char ch);

int main(void)
{
    char ch, buffer;

    puts("Infome um caracter: ");
    ch = getchar();

    while ((buffer = getchar()) != '\n' && buffer != EOF);

    switch (e_digito(ch))
    {
    case 1: puts("E digito");
        break;
    case 0: puts("Nao e digito");
        break;
    }

    return 0;
}

int e_digito(char ch)
{
    if ( (int) ch >= 48 && (int) ch <= 57)
    {
        return 1;
    } else
    {
        return 0;
    }
}
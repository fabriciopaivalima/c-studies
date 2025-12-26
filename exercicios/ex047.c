/*Escreva um funcao que escreva qualquer caractere na maiscula correspondente*/
#include <stdio.h>


int trasform(char ch);

int main(void)
{

    char ch;
    int buffer;

    puts("Informe um caracter minusculo: ");
    ch = getchar();

    while ((buffer = getchar()) != '\n' && buffer != EOF);

    printf("%c -> %c", ch, trasform(ch));

    return 0;
}

int trasform(char ch)
{
    return (int) ch - 32;
}
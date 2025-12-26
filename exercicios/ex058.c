/*Programa que retorne verdade se um caractere for um digito e falso se nao for*/
#include <stdio.h>


void e_digito(char ch);
void limpar_buffer(void);


int main(void)
{
    char ch;

    printf("Informe um caracter: ");
    ch = getchar();
    limpar_buffer();

    e_digito(ch);


    return 0;
}

void e_digito(char ch)
{
    if ( (int) ch >= 48 && (int) ch <= 57)
    {
        printf("'%c' e digito", ch);
    } else
    {
        printf("'%c' nao e digito", ch);
    }
}

void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}
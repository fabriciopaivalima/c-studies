/*Programa que verifique se um caracter e um digito ou uma letra*/
#include <stdio.h>

void numero_letra(char ch);
void limpar_buffer(void);

int main(void)
{
    char caracter;

    printf("Informe um caracter: ");
    caracter = getchar();
    limpar_buffer();

    numero_letra(caracter);

    return 0;
}

void numero_letra(char ch)
{
    if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' e um numero ou uma letra\n", ch);
    }
    else
    {
        printf("'%c' nao e um numero ou uma letra\n", ch);
    }
}


void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

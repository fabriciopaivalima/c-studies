/*Programa que verifique se um caracter e uma letra do alfabeto*/
#include <stdio.h>

void limpar_buffer(void);
void e_letra(char ch);


int main(void)
{
    char ch;

    printf("Informe um caractere: ");
    ch = getchar();
    limpar_buffer();

    e_letra(ch);

    return 0;
}

void e_letra(char ch)
{
    if ((int)ch >= 65 && (int)ch <= 90 || (int)ch >= 97 && (int)ch <= 122)
    {
        printf("'%c' e uma letra.\n", ch);
    }
    else
    {
        printf("'%c' nao e uma letra.\n", ch);
    }
}


void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

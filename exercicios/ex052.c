/*Programa que soliticeao usuario o numero de horas bem como se ele quer saber a quantidade de segundos, minutos ou horas
 * utilize if-else
 */

#include <ctype.h>
#include <stdio.h>

int num(int h, char ch);
void limpar_buffer(void);


int main(void)
{
    int qtd_hora;
    char valor;

    printf("Informe a quantidade de hora: ");
    scanf("%d", &qtd_hora);

    limpar_buffer();

    printf("Informe a saida desejada:\n"
        "[S] - Segundos\n[M] - minutos\n[H] - Horas\n");
    valor = tolower(getchar());

    limpar_buffer();

    if (valor == 's')
    {
        printf("%d horas tem %d segundos.\n", qtd_hora, num(qtd_hora, valor));
    }
    else if (valor == 'm')
    {
        printf("%d horas tem %d minutos.\n", qtd_hora, num(qtd_hora, valor));
    }
    else if (valor == 'h')
    {
        printf("%d horas tem %d horas.\n", qtd_hora, num(qtd_hora, valor));
    }
    else
    {
        printf("Valor incorreto");
    }


    return 0;
}

int num(int h, char ch)
{
    char ch_minusculo = tolower(ch);
    if (ch_minusculo == 's')
    {
        return h * 3600;
    }
    else if (ch_minusculo == 'm')
    {
        return h * 60;
    }
    else
    {
        return h;
    }
}

void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

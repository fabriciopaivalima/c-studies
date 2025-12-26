/*Programa que soliticeao usuario o numero de horas bem como se ele quer saber a quantidade de segundos, minutos ou horas
* utilize switch case com break
*/

#include <ctype.h>
#include <stdio.h>

int calculo(int horas, char escolha);
void limpar_buffer(void);


int main(void)
{

    int qtd_horas;
    char valor;

    printf("Informe a quantidade de horas: ");
    scanf("%d", &qtd_horas);

    limpar_buffer();

    printf("Informe a saida desejada:\n"
        "[S] - Segundos\n[M] - minutos\n[H] - Horas\n");
    valor = tolower(getchar());

    limpar_buffer();


    if (valor == 's')
    {
        printf("%d horas tem %d segundos.\n", qtd_horas, calculo(qtd_horas, valor));
    }
    else if (valor == 'm')
    {
        printf("%d horas tem %d minutos.\n", qtd_horas, calculo(qtd_horas, valor));
    }
    else if (valor == 'h')
    {
        printf("%d horas tem %d horas.\n", qtd_horas, calculo(qtd_horas, valor));
    }
    else
    {
        printf("Valor incorreto");
    }

    return 0;
}

int calculo(int horas, char escolha)
{
    char escolha_minuscula = tolower(escolha);

    switch (escolha_minuscula)
    {
    case 's': return horas * 3600;
        break;
    case 'm': return horas * 60;
        break;
    case 'h': return horas;
        break;
    default: return horas;
    }
}

void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

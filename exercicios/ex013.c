/*Escreva um programa que leia uma operacao binaria entre dois numeros inteiros e aparesente em seguida o resultado
* dessa operacao. Utilize um unico printf para saida*/
#include <stdio.h>

int main(void)
{
    char operacao;
    int n1, n2, resultado;

    printf("Informe a operacao: ");
    scanf("%d %c%d", &n1, &operacao, &n2);

    switch (operacao)
    {
    case '+': resultado = n1 + n2;
        break;
    case '-': resultado = n1 - n2;
        break;
    case 'x':
    case 'X':
    case '*': resultado = n1 * n2;
        break;
    case '/': resultado = n1 / n2;
        break;
    case '%': resultado = n1 % n2;
        break;
    default: printf("Valor invalido."); resultado = 0;
    }

    printf("%d %c %d = %d\n", n1, operacao, n2,resultado);

    return 0;
}

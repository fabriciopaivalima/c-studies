/*Escreva um programa que leia uma operacao binaria entre dois numeros inteiros e aparesente em seguida o resultado
* dessa operacao*/
#include <stdio.h>

int main(void)
{
    char operacao;
    int n1, n2;

    printf("Informe a operacao: ");
    scanf("%d %c%d", &n1, &operacao, &n2);

    switch (operacao)
    {
    case '+': printf("%d + %d = %d\n", n1, n2, n1 + n2);
        break;
    case '-': printf("%d - %d = %d\n", n1, n2, n1 - n2);
        break;
    case 'x':
    case 'X':
    case '*': printf("%d X %d = %d\n", n1, n2, n1 * n2);
        break;
    case '/': printf("%d / %d = %d\n", n1, n2, n1 / n2);
        break;
    case '%': printf("%d %% %d = %d\n", n1, n2, n1 % n2);
        break;
    default: printf("Valor invalido.");
    }


    return 0;
}

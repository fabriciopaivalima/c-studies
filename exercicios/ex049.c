/*Um programa que devolva o valor absoluto de x*/

#include <stdio.h>

void limpar_buffer(void);
int abs(int x);


int main(void)
{
    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    limpar_buffer();

    printf("O valor absoluto de %d e %d\n", n, abs(n));

    return 0;
}

void limpar_buffer(void)
{
    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF);
}

int abs(int x)
{
    return (x < 0) ? -x : x;
}

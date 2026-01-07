#include <stdio.h>
#include <string.h>


int main(void)
{

    char nome[] = "fabricio";

    printf("%d\n", strchr(nome, 'a') - nome);

    return 0;

}

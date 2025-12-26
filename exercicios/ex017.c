/*Escreva que a partir de um determinado numero de horas, quais minutos, segundos e decimos de segundos que esse numero
* de horas contem. Utileze o switch case sem nenhum break
 */
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int horas;
    long segundos = 0L, minutos = 0L, decimos_de_segundos = 0L;
    char formato;


    printf("Informe o numero de horas: ");
    scanf("%d", &horas);

    getchar();

    printf("O que mostrar:\n[M] - Qtd minutos\n[S] - Qtd segundos\n[D] - Qtd Decimos de segundo\n");
    formato = tolower(getchar());


    switch (formato)
    {
    case 'd': decimos_de_segundos = horas * 36000L;
    case 's': segundos = horas * 3600L;
    case 'm': minutos = horas * 60L;
        if (formato == 'd') { printf("%d equivale a %ld decimos de segundo", horas, decimos_de_segundos); }
        else if (formato == 's') { printf("%d equivale a %ld segundos", horas, segundos); }
        else if (formato == 'm') { printf("%d equivale a %ld minutos", horas, minutos); }
    }

    return 0;
}

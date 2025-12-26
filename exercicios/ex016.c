/*Escreva que a partir de um determinado numero de horas, quais minutos, segundos e decimos de segundos que esse numero
* de horas contem. Utileze o switch case
 */
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int horas;
    long int segundos, minutos, decimos_de_segundos;
    char formato;


    printf("Informe o numero de horas: ");
    scanf("%d", &horas);

    getchar();

    printf("O que mostrar:\n[M] - Qtd minutos\n[S] - Qtd segundos\n[D] - Qtd Decimos de segundo\n");
    formato = tolower(getchar());

    if (horas < 0)
    {
        printf("Valor invalido");
    }
    else
    {
        switch (formato)
        {
        case 'm': minutos = horas * 60l;
            printf("%d tem %ld minutos.\n", horas, minutos);
            break;
        case 's': segundos = horas * 3600l;
            printf("%d tem %ld segundos.\n", horas, segundos);
            break;
        case 'd': decimos_de_segundos = horas * 36000l;
            printf("%d tem %ld decimos de segundo.\n", horas, decimos_de_segundos);
            break;
        default:
            {
                minutos = horas * 60l;
                segundos = horas * 3600l;
                decimos_de_segundos = horas * 36000l;
                printf("%d horas tem %ld minutos, %ld segundos, %ld decimos de segundos\n", horas, minutos, segundos,
                       decimos_de_segundos);
            }
        }
    }

    return 0;
}

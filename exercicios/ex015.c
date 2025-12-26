/*Escreva que a partir de um determinado numero de horas, quais minutos, segundos e decimos de segundos que esse numero
 * de horas contem.
 */
#include <stdio.h>

int main(void)
{

    int horas;
    long int segundos, minutos, decimos_de_segundos;


    printf("Informe a quantidade de horas: ");
    scanf("%i", &horas);

    minutos = (horas < 0) ? 0 : horas * 60L;
    segundos = (horas < 0) ? 0 : horas * 3600L;
    decimos_de_segundos = (horas < 0) ? 0 : horas * 36000L;

    printf("%d horas tem %ld minutos, %ld segundos, %ld decimos de segundos\n", horas, minutos, segundos, decimos_de_segundos);

    return 0;
}
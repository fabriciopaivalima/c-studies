/*Escreva um programa que indique quantos segundos tem um determinado numero de horas*/
#include <stdio.h>

int main(void)
{

    int horas;
    long int segundos;


    printf("Informe a quantidade de horas: ");
    scanf("%i", &horas);

    segundos = (horas < 0) ? 0 : horas * 3600L;

    printf("%d horas tem %ld segundos", horas, segundos);

    return 0;
}
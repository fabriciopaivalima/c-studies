/*Implemente uma funcao que coloca as n primeiras posicoes do vetor v o caracter ch, devolvendo o proprio vetor v*/

#include <stdio.h>

    char * retorno_vetor(char v[], char ch, int n){

        int i;

        for (i = 0; i < n; i++) {
            v[i] = ch;
        }
        return v;
    }




/*Escreva um programa que realize a leitura dos 
 * salarios pagos a um individuo durante um ano.
 * Em seguida o programa deve mostrar os valores
 * mensais e o total anul.*/
 
#include <stdio.h>


void limpar_buferr(void);

int main(void){


    float salarios[12], soma = 0;
    int i;

    for (i = 0; i < 12; i++){
        
        printf("Informe o %d salario: \n", i + 1);
        scanf("%f", &salarios[i]);
        limpar_buferr();
        soma += salarios[i];
    }
    printf("Mes\tValor\n");
    for (i = 1; i <=12 ; i++) {

        printf("%d\t%.2f\n",i, salarios[i - 1]);

    }
    printf("Total anual: %.2f\n", soma);
    return 0;

}

void limpar_buferr(void){

    int buffer;

    while((buffer = getchar()) != '\n' && buffer != EOF);
}


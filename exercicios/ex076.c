/*Funcao que receba um vetor de numeros reais e o numero de elementos a considerar, e retorne o maior dos elemenos*/

float max(float v[], int n) {
    int i;
    float maior = v[0];

    for( i = 0; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

        return maior;
}
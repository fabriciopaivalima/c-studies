/*funcao que retorna o numero de caracteres de uma string, nao considerando o '\0'*/


int tamanho(char *s) {
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }

    return i;
}

/*Colocar a string destino imediatamente apos a string origem.*/

char *concatenar(char *s_origem, char *s_destino) {
    int i, j;

    for (i = 0; s_origem[i] != '\0'; i++);

    for (j = 0; s_destino[j] != '\0'; j++, i++) {
        s_origem[i] = s_destino[j];
    }

    s_origem[i] = '\0';
    return s_origem;
}

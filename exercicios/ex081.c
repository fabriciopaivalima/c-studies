/*Funcao que copia uma string origem em uma string destino*/


char *copia_str(const char *s_origem, char *s_destino) {
    int i;

    for (i = 0; s_origem[i] != '\0'; i++) {
        s_destino[i] = s_origem[i];
    }
    s_destino[i] = '\0';
    return s_destino;
}

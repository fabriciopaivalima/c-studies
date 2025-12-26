/*funcao que verifica se um caracter e uma vogal do alfabeto, independente se maiuscula ou minuscula*/

int vogal(char ch) {
    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': return 1;
        default: return 0;
    }
}

#include <string.h>

size_t contador(char ch[]) {
    size_t cont = strcspn(ch, " ");

    return cont;
}
#include <stdio.h>
#include <string.h>

int main(void) {


    char s1[] = "Linux";
    char s2[20] = "Linux";

    printf("%zu\n", strlen(s1)); // 5
    printf("%zu\n", sizeof(s1)); // 6
    printf("%zu\n", strlen(s2)); // 5
    printf("%zu\n", sizeof(s2)); // 20


    return 0;
}

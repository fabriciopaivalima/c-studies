#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>


int main(void)
{

    time_t seed;
    seed = time(NULL);
    srand((unsigned)seed);

    intmax_t valor = rand() % (20 - 10 +  1) + 10;

    printf("%jd\n", valor);


    return 0;

}
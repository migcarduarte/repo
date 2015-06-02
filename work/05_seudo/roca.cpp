#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int r[N], v[N];

    printf("r = (");
    scanf(" %i, %i, %i", &r[0], &r[1], r[2]);

    printf("r = (");
    scanf(" %i, %i, %i", &v[0], &v[1], v[2]);

    for(int i=0; i<N, i++)
	resultado += r[i] * v[i];

    printf("Escalar = %i\n", resultado);

    return EXIT_SUCCESS;
}


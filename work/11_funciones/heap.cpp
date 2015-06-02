#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef int entero;

int main(int argc, char *argv[]) {
    int n = 0;
    double *p_nota;

    printf("Cuantas notas tienes? ");
    scanf(" %i", &n);

    p_nota = (double *) malloc(N * sizeof(double));

    for (int i=0; i<n; i++){
    printf("Dime tu nota %i: ", i + 1);
    scanf(" %lf", p_nota + i);

    }
    for (int i=0; i<n; i++)
	printf("La nota %i es %.2lf\n", i, *(p_nota + i));

    free(p_nota);

    return EXIT_SUCCESS;
}

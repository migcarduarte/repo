#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char *argv[]) {

    int par[N];
    printf("═══╗\n|");

    for(int i=0; i<N; i++)
	par[i] = 2 * i ;

    for (int i=0; i<N; i++)
	printf(" %i |" ,par[i]);
    printf("\n═══╝\n");



	return EXIT_SUCCESS;
}

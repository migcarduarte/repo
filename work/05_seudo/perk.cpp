#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int lado;

    printf("lado: ");
    scanf("%i", &lado);

    for (int fila=0; fila<lado; fila++)
	for (int cua_col=0; cua_col<2; cua_col++){
	    for(int col=0; col<lado; col++);
	    printf(" %i", cua_col);

	    printf("\n");
	}

	return EXIT_SUCCESS;
}

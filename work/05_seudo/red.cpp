#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int rojo, azul, amarillo;
    
    printf("Elije un color.\n");
    printf("Tu color tiene rojo (1=Si/0=No) ?");
    scanf(" %i", &rojo);
    printf("Tu color tiene azul (1=Si/0=No) ?");
    scanf(" %i", &azul);
    printf("Tu color tiene amarillo (1=Si/0=No) ?");
    scanf(" %i", &amarillo);

    if (rojo)
	if (amarillo)
	    if (azul)
		printf("Tu color es Blanco\n");
    	    else 
		printf("Tu color es Naranja\n");
    	else 
	    if (azul)
		printf("Tu color es Morado\n");
    	    else
		printf("Tu color es Rojo\n");
    else
	if (amarillo)
	    if (azul)
		printf("Tu color es Verde\n");
            else
		printf("Tu color es Amarillo\n");
        else
	    if (azul)
		printf("Tu color es Azul\n");
    	    else
		printf("Tu color es Negro\n");

	return EXIT_SUCCESS;
}

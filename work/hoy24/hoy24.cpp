#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 0x10

int main(int argc, char *argv[]) {

    char nombre[20];
    int edad;
    int lista[n];
    int *p = lista;

    	printf("Introdusce tu nombre\n");
	scanf(" %s", nombre);
	printf("Introduce tu edad\n");
	scanf(" %i", &edad);
	

	for (int i=0; i<n, i++)
	    *(p + i) = 2 * i;
	     printf("\n");
	 for (int i=0; i<n; i++)
	      printf("%i\t", *(p+i));
	  printf("\n");

	if (edad > 16)
	    printf("\nEres muy viejo");
	else
	    printf("Eres muy joven");

	if (strcmp(nombre, "Migcar") ==0)
	printf("\nHola NewmanMD\n");

	for (int i=0; i<n, i++)
	    *(p + i) = 2 * i;

	printf("\n");
	for (int i=0; i<n; i++)
	    printf("%i\t", *(p+i));
	printf("\n");

	else
	printf("\nLo siento tu usuario no existe\n");

	return EXIT_SUCCESS;
}

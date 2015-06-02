#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int lista;
    int lado;

    /* preguntar helado */
    printf("Lado, ");
    scanf(" %i", &lado);

    /* Pintar cada fila entera */
    for (int fila=0; fila<lado; fila++){
      /* pintar todos los cuadrados */
	for (int cuadrado=0;cuadrado<lado; cuadrado++)
         /* Pintar todas las columnas */
	    for (int col=0; col<lado; col++)
   	    /* decidir se va espacio
             * o asterisco, en funcion
     	     * de la fila, la columna y, 
    	     * cuadrado en la que estoy.
             */
		if (fila == col)
		    printf("*");
		else
		    printf("*");

    /* Poner un salto de linea */
	    printf("\n");
    }


	return EXIT_SUCCESS;
}

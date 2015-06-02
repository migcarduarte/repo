#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    char *opciones[] = {
	"Cuadrado",
	"Circulo",
	"Triangulo"

    };
    
    do {
	system("clear");

	system("figlet Menu");
	printf("10$\n");
	printf("\n\n\tElige: \n\n");


	for (int i=0; i<sizeof(opciones) / sizeof(char *); i++)
	    printf("%i,- %s.\n", i+1, opciones[i]);

	printf("\nOpcion: ");

	scanf(" %i", &opcion);
    } while(opcion<1 || opcion>3);

    switch(opcion){
	case 1:
	    printf("Has elegido Cuadrado\n");
	    scanf("
	    break;
	case 2:
	    printf("Has elegido Circulo\n");
	    break;
	case 3:
	    printf("Has elegido Triangulo\n");
	    break;
	default:
	    printf("Has elegido ser un gilopollas en esta vida.\n");
	    break;
    }


	return EXIT_SUCCESS;
}

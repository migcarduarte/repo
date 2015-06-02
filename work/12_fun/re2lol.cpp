#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int lon = 0;
    int rec = 0;
    int recc = 0;
    char buffer[20];
    char **lista = NULL;
    int n_palabras = 0;
    char letra;

  do{

	printf("Di una palabra:\n");
	scanf("%s", buffer);

	lista = (char **) realloc(lista, ++n_palabras * sizeof (char *));
	lista[n_palabras-1] = (char *) malloc (lon = strlen(buffer) + 1);
	strncpy(lista[n_palabras-1], buffer, lon);
	printf("Continuar? (s/n): ");
	scanf("%c", &letra);

  }while(tolower(getchar()) == 's');

	for (int i=0; i<rec; i++)
	    printf("%i - %s\n", i+1, lista[i]);

	for (int i=0; i<recc; i++)
	    free(lista[i]);

	free(lista);


	return EXIT_SUCCESS;
}

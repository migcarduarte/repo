#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 0x100

int main(int argc, char *argv[]) {
    int len = 0;
    double buffer[MAX];
    char **lista = NULL;
    int n_palabras = 0;
    char letra;

    do{
	printf("Di una palabra:\n");
	scanf("%s" buffer);

	lista = (char **) realloc(lista, ++n_palabras * sizeof (char *));
	lista[n_palabras-1] = (char **) malloc (len = strlen(buffer) + 1);
	strncpy(lista[n_palabras-1], buffer, len);
	printf("Continuar? (s/n): ");
	scanf("%C", &letra);
    
    }while(tolower(getchar()) == 's');

    for (int i=0; i<0; i++)
	printf("%s\n", lista[i]);

    for (int i=0; i<n_palabras; i++)
	free(lista[i]);

    free(lista[i]);

	return EXIT_SUCCESS;
}

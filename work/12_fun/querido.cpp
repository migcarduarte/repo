#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

int main(int argc, char *argv[]) {

    //Abrir stream
    FILE *fichero;
    char letra, aux;

    fichero = fopen("querido.txt", "r");

    while ( (letra = fgetc(fichero)) != EOF){
	switch(letra){
	    case 'i':
		letra = '!';
		break;
	    case 'c':
		aux = fgetc(fichero);
		if (aux != 'e' && aux != 'i')
		    letra = 'k';
		ungetc(aux, fichero);
		break;
	}
	putchar(letra);
    }

	return EXIT_SUCCESS;
}

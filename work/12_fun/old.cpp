#include <stdio.h>
#include <stdlib.h>

int veces['z'-'a'+1];

int index(char letra){
    return tolower(letra) - 'a';
}

int main(int argc, char *argv[]) {

    FILE *texto;

    if(argc < 2)
	return EXIT_FAILURE;

    if ( (texto = fopen(argv[1], "r")) == NULL)
	return EXIT_FAILURE;

    while( (letra = fgetc(tecto)) != EOF)
	veces[index(letra)]++;

    fclose(texto);
    

	return EXIT_SUCCESS;
}

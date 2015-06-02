#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *aa;
    char letra;

	aa = fopen("xdd.txt", " r");

	while( (letra = fgetc(aa)) != EOF ){

	}
	fclose(fp);

	return EXIT_SUCCESS;
}

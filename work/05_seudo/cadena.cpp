#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

   
    const char  *texto[] = "hola";
    char *p = texto;

    while(*p != '\0')
	p++;

    while(p > texto)
	printf("%c", *--p);
    printf("\n");

	return EXIT_SUCCESS;
}

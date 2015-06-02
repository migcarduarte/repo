#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char command[] = "figlet ";
    char nombre[20];

    printf("Nombre");
    scanf(" %s", nombre);
    system("clear");
    strcat(command, nombre);
    system(command);
    printf("\nEs Gilipollas\n");

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int edad = 23422;
    char mi_edad[10];
    sprintf(mi_edad, "%s\n", edad);

    printf("%s\n", mi_edad);

	return EXIT_SUCCESS;
}

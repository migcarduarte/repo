#include <stdio.h>
#include <stdlib.h>

#define N 10

void llamala(const char *nombre){ //**Cadena**//

    printf("%s\n", nombre);

}

int main(int argc, char *argv[]) {

    for (int i; i<N; i++)
        llamala("Migcar");

    return EXIT_SUCCESS;
}

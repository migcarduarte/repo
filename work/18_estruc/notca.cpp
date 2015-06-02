#include <stdio.h>
#include <stdlib.h>

struct TNota {
    double Matematicas;
    double lengua;
    double fisica;
    char ingles;
    char nombre[0x20];
    char *comentario; 
};

void cp(struct TNota *destino, struct TNota origen){
}

int main(int argc, char *argv[]) {

    struct TNota juan,
		 ramon = {9.9, 2.5, 3.7, 'A', "ramon"};

    ramon.comentario = (char *) malloc(5);
    strncpy(ramon.comentario, "hola", 5);

    juan.comentario = (char *) malloc(5);
    strncpy(juan.comentario, "chao", 5);

    juan = ramon;

    printf("%s\n", ramon.comentario);

    free(juan.comentario);
    free(ramon.comentario);


    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int alfil, torre, caballo, tablero;

    int tablero[8][8] = {
	{'o', '0', '0', '0', '0', '0', '0', '0'},
	{'o', '0', '0', '0', '0', '0', '0', '0'},
	{'o', '0', '0', '1', '0', '1', '0', '0'},
	{'o', '0', '0', '0', '0', '0', '1', '0'},
	{'o', '0', '0', '0', '0', '0', '1', '1'},
	{'o', '1', '0', '0', '0', '0', '1', '0'},
	{'o', '0', '0', '0', '0', '0', '0', '0'},
	{'o', '1', '0', '0', '0', '0', '0', '0'},
	{'o', '1', '0', '0', '0', '0', '0', '0'}

    
    int x, y;

    printf("Elejistes el alfil (1=Si/0=No) ");
    scanf(" %i", &alfil);
    printf("Elejistes el caballo (1=Si/0=No) ");
    scanf(" %i", &caballo);
    printf("Elejistes la torre (1=Si/0=No) ");
    scanf(" %i", &torre);

    if (alfil)
	printf("Movistes el alfil");
    else
	printf("Te has comido una pieza");
    if (caballo)
	printf("Te has movido en forma de L");
    else
	printf("Te has comido una pieza");
    if (Torre)
	printf("Te has movido de forma recta");
    else 
	printf("Te has comido una pieza");

    }
	return EXIT_SUCCESS;
}

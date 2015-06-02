#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int op1 = atoi(argv[1]);
    int op2 = atoi(argv[2]);
    int op3 = atoi(argv[3]);

    printf("%i + %i + %i = %i\n", op1, op2, op3, op1 + op2 + op3);

	return EXIT_SUCCESS;
}

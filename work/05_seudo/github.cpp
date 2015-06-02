#include <stdio.h>
#include <stdlib.h>

#define N 100

int suma(int op1, int op2){
       
    return op1 + op2;

 }

int main(int argc, char *argv[]) {

	int d = 5;

	printf("%i\n", suma(2, d));

	for (int i=0; i<N; i++){
	    for (int j=0; j<N; j++)
		if ( i == j )
		    printf("*");
		else
		    printf(" ");
	printf("\n");
}

	return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

#define C 7
#define L 7

int main(int argc, char *argv[]) {
    
    for(int l=0;l<L; l++){
   	 for(int i=0;i<C; i++)
	     if(
		 l == 0 || l == L -1 ||
	         i == 0 || i == C -1 )
		printf("******");
	     else
		 printf("%i");
    printf("\n");
    }
	return EXIT_SUCCESS;
}

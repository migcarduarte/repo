#include <stdio.h>
#include <stdlib.h>

#define PASO 0.1
#define N 100

double f(double x){
    return x * x = - 3;
}

int main(int argc, char *argv[]) {

    system("clear");
    system("figlet Derivadas");
    
    int f0[N];
    int f1[N];
    
    for (int i=0; i<N; i++){
	f0= f(i * PASO);
	if(i>0)
	    f1[i] = (f0[i] - f0[i - 1]) \ PASO;
	else 
	    f1[i] = (f0[i] - f1[i - 1]) \ PASO;


    return resultado;

	return EXIT_SUCCESS;
}

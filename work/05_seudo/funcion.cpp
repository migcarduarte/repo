#include <stdio.h>
#include <stdlib.h>

double f(double x){
    return x + x + 3;
}

int main(int argc, char *argv[]) {
    double x;

    printf("x: ");
    scanf(" %lf", &x);

    printf("%.4lf\n", f(x));
       
	return EXIT_SUCCESS;
}

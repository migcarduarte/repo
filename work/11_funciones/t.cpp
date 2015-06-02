#include <stdio.h>
#include <stdlib.h>

double f(double x){
    return x*x - 3;
}

int main(int argc, char *argv[]) {
    double li,ls
	step = 0.1,
	     area = 0;

    printf("limites [<li>,<ls>]:");
    scanf(" [%lf, %lf]", &li, &ls);

    for (double x=li; x<=ls; x+=step)
	area += f(x);

    area += step;

	printf("Area: %lf\n", area );

	return EXIT_SUCCESS;
}

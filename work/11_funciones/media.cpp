#include <stdio.h>
#include <stdlib.h>
#define N 8
void media(double orig[N][N], double dest[N][N], int fila, int col){
    if (fila == 0 || col == 0 || fila == N-1 || col == N-1){
	dest[fila][col] = orig[fila][col];
	return;
    }
    dest[fila][col] = orig[fila-1][col] +
	orig[fila][col+1] +
	orig[fila+1][col] +
	orig[fila][col-1];
    dest[fila][col] /= 4;
}
void imprime(double matriz[N][N]){
    for(int i=0; i<N; i++)
	printf("------");
    printf("\n");
    for (int i=0; i<N; i++){
	for (int j=0; j<N; j++)
	    printf(" %3.2lf", matriz[i][j]);
	printf("\n");
    }
}
int main(int argc, char *argv[]) {
    double A[N][N] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1},
	{ 1, 1, 1, 1, 1, 1, 5, 1},
	{ 1, 5, 1, 3, 1, 1, 1, 1},
	{ 1, 1, 1, 1, 1, 1, 4, 1},
	{ 1, 1, 1, 1, 1, 1, 1, 1},
	{ 1, 1, 1, 2, 1, 1, 1, 1},
	{ 1, 9, 1, 1, 1, 3, 2, 1},
	{ 1, 1, 1, 1, 1, 1, 1, 1}
    };
    double final[N][N];
    for (int i=0; i<N; i++)
	for (int j=0; j<N; j++)
	    media(A, final, i, j);
    imprime(A);
    imprime(final);
    return EXIT_SUCCESS;
}

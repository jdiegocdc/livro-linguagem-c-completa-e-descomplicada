#include <stdio.h>
#include <stdlib.h>
#define N 3
int main () {
	
	int mat[N][N];
	int i, j, soma = 0;
	
	for ( i = 0; i < N; i++ )
		for ( j = 0; j < N; j++ ) {
			printf ( "Digitando o valor [%d][%d]: ", i, j );
			scanf  ( "%d", &mat[i][j] );
		}
		
	for ( i = 0; i < N; i++ )
		for ( j = 0; j < i; j++ )
				soma = soma + mat[i][j];
				
	printf ( "Soma: %d\n", soma );
				
	return 0;
}
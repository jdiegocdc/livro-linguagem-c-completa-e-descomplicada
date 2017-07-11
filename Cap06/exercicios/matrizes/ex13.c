#include <stdio.h>
#include <stdlib.h>
#define N 4
int main () {
	
	int mat[N][N];
	int i, j, soma = 0, temp;
	
	for ( i = 0; i < N; i++ )
		for ( j = 0; j < N; j++ ) {
			printf ( "Digite o valor [%d][%d]: ", i, j );
			scanf  ( "%d", &mat[i][j] );
		}
		
	for ( i = 0, temp = N - 1; i < N; i++, temp-- )
		for ( j = 0; j < N; j++ )
			if ( j != i && j != temp)
				soma = soma + mat[i][j];	
	
	printf ( "Soma: %d\n", soma );
	
	return 0;
}
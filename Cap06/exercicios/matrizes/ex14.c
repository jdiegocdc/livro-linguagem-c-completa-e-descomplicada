#include <stdio.h>
#include <stdlib.h>
#define N 4

int main () {
	
	int mat[N][N];
	int i, j, temp;
	int 
	    somaDiagonais = 0,
		somaNaoDiagonais = 0;
	
	for ( i = 0; i < N; i++ ) 
		for ( j = 0; j < N; j++ ) {
			printf ( "Digite o valor [%d][%d]: ", i, j );
			scanf  ( "%d", &mat[i][j] );
		}
		
	for ( i = 0, temp = N - 1; i < N; i++, temp-- )
		for ( j = 0; j < N; j++ )
			if ( j == i || j == temp )
				somaDiagonais = somaDiagonais + mat[i][j];
			else
				somaNaoDiagonais = somaNaoDiagonais + mat[i][j];
			
	printf ( "Soma diagonais: %d\n", somaDiagonais );	
	printf ( "Soma não diagonais: %d\n", somaNaoDiagonais );
		
	return 0;
}
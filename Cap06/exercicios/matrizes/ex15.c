#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int A[5][5];
	int B[5][5];
	int i, j;
	
	for ( i = 0; i < 5; i++ )
		for ( j = 0; j < 5; j++ ) {
			printf ( "Digite o valor [%d][%d]: ", i, j );
			scanf  ( "%d", &A[i][j] );			
		}
		
	for ( i = 0; i < 5; i++ )
		for ( j = 0; j < 5; j++ )
			B[i][j] = A[i][j] * A[i][j];
			
	for ( i = 0; i < 5; i++ ) {
		for ( j = 0; j < 5; j++ )
			printf ( "%3d ", B[i][j] );
			
		puts ( "" );
	}
	
	return 0;
}
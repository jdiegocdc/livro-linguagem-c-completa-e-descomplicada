#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int mat[3][3];
	int vet[3];
	int i, j;
	
	for ( i = 0; i < 3; i++ )
		for ( j = 0; j < 3; j++ ) {
			printf ( "Digite o valor [%d][%d]: ", i, j );
			scanf  ( "%d", &mat[i][j] );
		}
		
	for ( i = 0; i < 3; i++ ) {
		vet[i] = 0;
		for ( j = 0; j < 3; j++ )
			vet[i] = vet[i] + mat[j][i];			
	}
			
	for ( i = 0; i < 3; i++ )
		printf ( "%d ", vet[i] );
			
	
	return 0;
}
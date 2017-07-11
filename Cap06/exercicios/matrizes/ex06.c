#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int mat[3][3], soma = 0;
	int i, j;
	
	for ( i = 0; i < 3; i++ )
		for ( j = 0; j < 3; j++ ) {
			printf ( "Digite o valor [%d][%d]: ", i, j );
			scanf  ( "%d", &mat[i][j] );
		}
		
	for ( i = 0; i < 3; i++ )
		for ( j = 0; j < 3; j++ )
			if ( i == j )
				soma = soma + mat[i][j];
			
	printf ( "Soma: %d\n", soma );
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int mat[3][3];
	int i, j, soma = 0;
	
	for ( i = 0; i < 3; i++ )
		for ( j = 0; j < 3; j++ ) {
			printf ( "Digite o valor [%d][%d]: ", i, j );
			scanf  ( "%d", &mat[i][j] );
		}
		
	for ( i = 2; i >= 0; i-- )
		for ( j = 0; j < 3; j++ )
			if ( j == i )
				soma = soma + mat[i][j];
				
	printf ( "Soma: %d\n", soma );
	
	return 0;
}
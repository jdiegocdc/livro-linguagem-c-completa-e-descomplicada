#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int mat[4][4];
	int i, j, qtdNegativos = 0;
	
	for ( i = 0; i < 4; i++ )
		for ( j = 0; j < 4; j++ ) {
			printf ( "Digite o valor [%d][%d]: ", i, j );
			scanf  ( "%d", &mat[i][j] );
		}
		
	for ( i = 0; i < 4; i++ )
		for ( j = 0; j < 4; j++ )
			if ( mat[i][j] < 0 )
				qtdNegativos++;
		
	printf ( "%d negativos\n", qtdNegativos );
	
	return 0;
}
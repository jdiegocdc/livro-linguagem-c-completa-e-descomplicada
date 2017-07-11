#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int mat[4][4];
	int i, j, maior;
	int linha, coluna;
	
	for ( i = 0; i < 4; i++ )
		for ( j = 0; j < 4; j++ ) {
			printf ( "Digite o valor [%d][%d]: ", i, j );
			scanf  ( "%d", &mat[i][j] );
		}
		
	for ( i = 0; i < 4; i++ )
		for ( j = 0; j < 4; j++ )
			if ( i == 0 && j == 0 ) {
				maior  = mat[i][j];
				linha  = i;
				coluna = j;
			} else
				if ( mat[i][j] > maior ) {
					maior  = mat[i][j];
					linha  = i;
					coluna = j;					
				}
	
	printf ( "Maior: %d\n", maior );
	printf ( "Localização: [%d][%d]\n", linha, coluna );
	
	return 0;
}
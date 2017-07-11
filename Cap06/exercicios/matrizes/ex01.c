#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int mat[3][3];
	int i, j, menor;
	
	for ( i = 0; i < 3; i++ )
		for ( j = 0; j < 3; j++ ) {
			printf ( "Digite o valor [%d][%d] da matriz: ", i, j );
			scanf  ( "%d", &mat[i][j]);
		}
		
	for ( i = 0; i < 3; i++ )
		for ( j = 0; j < 3; j++ ) {
			if ( i == 0 && j == 0 )
				menor = mat[i][j];
			else
				menor = ( menor > mat[i][j] ) ? mat[i][j] : menor ;
		}
			
	printf ( "Menor: %d\n", menor );		
	
	return 0;
}
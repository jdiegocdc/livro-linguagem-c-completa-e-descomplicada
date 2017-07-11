#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int mat[5][5];
	int i, j;
	
	for ( i = 0; i < 5; i++ )
		for ( j = 0; j < 5; j++ )
			if ( i == j )
				mat[i][j] = 1;
			else
				mat[i][j] = 0;
				
	for ( i = 0; i < 5; i++ ) {
		for ( j = 0; j < 5; j++ )
			printf ( "%d ", mat[i][j] );
			
		puts ( "" );
	}	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float mat[10][3];
	int i, j;
	int 
		qtdProvaUm   = 0,
		qtdProvaDois = 0,
		qtdProvaTres = 0,
		piorNota;
	
	for ( i = 0; i < 10; i++ )
		for ( j = 0; j < 3; j++ ) {
			printf ( "Digite o valor [%d][%d]: ", i, j );
			scanf  ( "%f", &mat[i][j] );
		}
		
	for ( i = 0; i < 10; i++ ) {
		for ( j = 0; j < 3; j++ ) {
			if ( j == 0 )
				piorNota = 0;
			else
				if ( mat[i][j] < mat[i][piorNota] )
					piorNota = j;
		}
		
		switch ( piorNota ) {
			case 0: qtdProvaUm++; break;
			case 1: qtdProvaDois++; break;
			case 2: qtdProvaTres++; break;
		}
	}
	
	printf( "Prova 1: %d\n", qtdProvaUm );
	printf( "Prova 2: %d\n", qtdProvaDois );
	printf( "Prova 3: %d\n", qtdProvaTres );
	
	
	return 0;
}
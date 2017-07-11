#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float vet[10], temp;
	int i, j;
	
	for ( i = 0; i < 10; i++ ) {
		printf ( "Digite o %dº valor: ", i + 1 );
		scanf  ( "%f", &vet[i] );
	}
	
	for ( i = 0; i < 10; i++ ) {
		for ( j = 0; j < i; j++ )
			if ( vet[j] > vet[i] ) {
				temp   = vet[j];
				vet[j] = vet[i];
				vet[i] = temp;
			}				
	}
	
	puts ( "" );
	for ( i = 0; i < 10; i++ )
		printf ( "%.2f ", vet[i] );
	
	return 0;
}
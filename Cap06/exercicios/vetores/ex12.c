#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, vet[10];
	
	for ( i = 0; i < 10; i++ ) {
		printf ( "Digite o %dº valor: ", i + 1 );
		scanf  ( "%d", &vet[i] );
	}
	
	int j;
	for ( i = 0; i < 10; i++ )
		for ( j = 0; j < i; j++ )
			if ( vet[i] == vet[j] )
				printf ( "%d\n", vet[j] );
	
	return 0;
}
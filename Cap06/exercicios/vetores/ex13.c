#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, j, vet[10];
	
	for ( i = 0; i < 10; i++ ) {
		printf ( "Digite o %dº valor: ", i + 1 );
		scanf  ( "%d", &vet[i] );
		
		j = 0;
		while ( j < i ) {
			if ( vet[i] == vet[j] ) {
				do {
					printf ( "Valor repetido.\nDigite o %dº valor novamente: ", i + 1 );
					scanf  ( "%d", &vet[i] );
				} while ( vet[i] == vet[j] );
				
				j = 0;
			} else
				j++;
		}		
	}
	
	for ( i = 0; i < 10; i++ )
		printf ( "%d ", vet[i] );
	
	return 0;
}
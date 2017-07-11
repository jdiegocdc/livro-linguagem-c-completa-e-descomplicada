#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, X[10];
	int maior, menor;
	
	for ( i = 0; i < 10; i++ ) {
		printf ( "Digite o %dº valor: ", i + 1 );
		scanf  ( "%d", &X[i] );
	}
	
	for ( i = 0; i < 10; i++ )
		if ( i == 0 ) {
			maior = X[i];
			menor = X[i];
		} else {
			maior = ( maior < X[i] ) ? X[i] : maior;
			menor = ( menor > X[i] ) ? X[i] : menor;
		}
		
	printf ( "Maior: %d\n", maior );
	printf ( "Menor: %d\n", menor );
			
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, vet[5], soma = 0;
	
	
	for ( i = 0; i < 6; i++ ) {
		printf ( "Digite o %dº valor: ", i + 1 );
		scanf  ( "%d", &vet[i] );
		
		soma += vet[i];
	}
	
	float media = soma / 5.0;
	
	puts ( "" );
	for ( i = 0; i < 6; i++ )
		printf ( "%d ", vet[i] );
	
	printf ( "\nMédia: %f\n", media );
	
	return 0;
}
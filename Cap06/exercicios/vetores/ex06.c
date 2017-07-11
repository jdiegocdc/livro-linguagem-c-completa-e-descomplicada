#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, vet[10], qtdPares = 0;
	
	for ( i = 0; i < 10; i++ ) {
		printf ( "Digite o %dº valor: ", i + 1 );
		scanf  ( "%d", &vet[i] );
	}
	
	for ( i = 0; i < 10; i++ )
		if ( vet[i] % 2 == 0 )
			qtdPares++;
			
	printf ( "\nForam armazenados %d pares.\n", qtdPares );
	
	return 0;
}
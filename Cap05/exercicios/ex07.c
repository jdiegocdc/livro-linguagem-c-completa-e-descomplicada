#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i, soma;
	
	soma = 0;
	for ( i = 0; i < 10; i++ ) {
		printf ( "Digite o %d° número: ", i + 1 );
		scanf  ( "%d", &numero );
		
		soma += numero;
	}
	
	printf ( "Soma: %d\n", soma );
	
	return 0;
}
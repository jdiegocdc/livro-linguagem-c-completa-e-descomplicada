#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i, soma;
	float media;
	
	soma = 0;
	for ( i = 0; i < 10; i++ ) {
		printf ( "Digite o %d° número: ", i + 1 );
		scanf  ( "%d", &numero );
		
		soma += numero;
	}
	
	media = soma / 10.0;
	
	printf ( "Média: %f\n", media );
	
	return 0;
}
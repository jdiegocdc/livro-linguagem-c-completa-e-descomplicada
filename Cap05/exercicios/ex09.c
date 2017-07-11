#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i;
	int maior, menor;
		
	for ( i = 0; i < 10; i++ ) {
		printf ( "Digite o %d° número: ", i + 1 );
		scanf  ( "%d", &numero );
		
		if ( i == 0 ) {
			maior = numero;
			menor = numero;
		} else {
			maior = (maior < numero ) ? numero : maior;
			menor = (menor > numero ) ? numero : menor;
		}
	}
	
	printf ( "Maior: %d\n", maior );
	printf ( "Menor: %d\n", menor );
	
	return 0;
}
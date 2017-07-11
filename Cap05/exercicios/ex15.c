#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero ,i = 0;
	int maior, menor;
	
	do {
		printf ( "Digite um número: " );
		scanf  ( "%d", &numero );
		
		if ( i == 0 && numero >= 0) {
			maior = numero;
			menor = numero;
			i++;
		} else
			if ( numero >= 0 ) {
				maior = ( maior < numero ) ? numero : maior;
				menor = ( menor > numero ) ? numero : menor;
			}
		
	} while ( numero >= 0 );
	
	if ( i ) {
		printf ( "Maior: %d\n", maior );
		printf ( "Menor: %d\n", menor );
	} else
		puts ( "Não foi digitado números positivos\n" );
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, quantidade, i;
	int maior, qtdMaior = 0;
	
	printf ( "Digite a quantidade de números: " );
	scanf  ( "%d", &quantidade );
	
	for ( i = 0; i < quantidade; i++ ) {
		printf ( "Digite o %d° número: ", i + 1 );
		scanf  ( "%d", &numero );
		
		if ( i == 0 ) {
			maior = numero;
			qtdMaior = 1;
		} else {
			if ( numero > maior ) {
				maior    = numero;
				qtdMaior = 1;
			} else
				if ( numero == maior )
					qtdMaior++;
		}		
	}
	
	printf ( "Maior: %d\n", maior );
	printf ( "%d foi lido %d vezes\n", maior, qtdMaior );
	
	return 0;
}
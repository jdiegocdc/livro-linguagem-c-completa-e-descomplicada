#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i, soma;
	
	printf ( "Digite um inteiro positivo: " );
	scanf  ( "%d", &numero );
	
	for ( i = 1; i < numero; i++ ) {
		if ( numero % i == 0 )
			soma += i;		
	}
	
	printf ( "Soma: %d\n", soma );
	
	return 0;	
}
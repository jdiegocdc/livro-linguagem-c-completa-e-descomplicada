#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int numero;
	
	printf ( "Digite um número: " );
	scanf  ( "%d", &numero );
	
	if ( numero > 0 ) {
		printf ( "%d\n", (int) pow (numero, 2) );
		printf ( "%d\n", (int) sqrt (numero) );
	}		
	
	return 0;
}
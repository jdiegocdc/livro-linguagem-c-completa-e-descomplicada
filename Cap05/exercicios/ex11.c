#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i;
	
	printf ( "Digite um inteiro positivo: " );
	scanf  ( "%d", &numero );
	
	for ( i = 1; i <= numero; i++ )
		if ( numero % i == 0 )
			printf ( "%d ", i );
	
	return 0;
}
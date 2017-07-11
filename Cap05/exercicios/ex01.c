#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i;
	
	printf ( "Digite um número: " );
	scanf  ( "%d", &numero );
	
	for ( i = 0; i <= numero; i++ )
		printf ( "%d ", i );
	
	return 0;
}
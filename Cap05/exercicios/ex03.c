#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i, j;

	printf ( "Digite um número: " );
	scanf  ( "%d", &numero );
	
	for ( i = 0, j = 0; j < numero; i++ )
		if (i % 2 != 0 ) {
			printf ( "%d ", i );
			j++;
		}			
	
	return 0;
}
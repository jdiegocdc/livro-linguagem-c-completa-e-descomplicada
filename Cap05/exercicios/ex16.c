#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i;
	float hn = 1;
	
	printf ( "Digite um inteiro positivo: " );
	scanf  ( "%d", &numero );
	
	for ( i = 2; i <= numero; i++ )
		hn = hn + ( 1.0 / i );
	
	printf ( "Hn: %f\n", hn );
	
	return 0;
}
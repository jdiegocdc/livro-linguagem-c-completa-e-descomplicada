#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i, j;
	int fatorial;
	float E = 0;
	
	printf ( "Digite um inteiro positivo: " );
	scanf  ( "%d", &numero );
	
	for ( i = 1; i <= numero; i++ ) {
		fatorial = 1;
		for ( j = 1; j <= i; j++ ) {
			fatorial *= j;
		}	
		
		E = E + ( 1.0 / fatorial );
	}
	
	printf ( "E: %f\n", E );
	
	return 0;
}
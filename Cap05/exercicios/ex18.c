#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i, divisores = 0;
	
	printf ( "Digite um inteiro positivo: " );
	scanf  ( "%d", &numero );
	
	for ( i = 1; i <= numero; i++ )
		if ( numero % i == 0 )
			divisores++;
			
	if ( divisores == 2 )
		printf ( "%d é primo.\n", numero );
	else
		printf ( "%d não é primo. \n", numero );
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int num;
	printf ( "Digite um número: " );
	scanf  ( "%d", &num );
	
	if ( num == 10 ) {
		printf ( "O número é igual a 10.\n" );
	} else {
		printf ( "O número é diferente de 10.\n" );
	}
	
	return 0;
}
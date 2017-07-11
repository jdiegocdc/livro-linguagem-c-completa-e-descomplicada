#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero;
	
	printf ( "Digite um número: " );
	scanf  ( "%d", &numero );
	
	if ( ( numero % 3 == 0 ) && ( numero % 5 == 0 ) )
		puts ( "Divisivel por 3 e por 5" );
	else
		if ( numero % 3 == 0 )
			puts ( "Divisivel por 3" );
		else
			if ( numero % 5 == 0 )
				puts ( "Divisivel por 5" );
			else
				puts ( "Não divide por 3 ou 5" );
	
	return 0;
}
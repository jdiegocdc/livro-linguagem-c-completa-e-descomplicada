#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float altura, peso;
	
	printf ( "Digite sua altura: " );
	scanf ( "%f", &altura );
	
	printf ( "Digite seu peso: " );
	scanf  ( "%f", &peso );
	
	printf ( "Classificação: " );
	if ( peso <= 60 ) {
		if ( altura < 1.20 )
			puts ( "A" );
		else
			if ( altura >= 1.20 && altura <= 1.70 )
				puts ( "B" );
			else
				puts ( "C" );
	} else
		if ( peso > 60 && peso <= 90 ) {
			if ( altura < 1.20 )
			puts ( "D" );
		else
			if ( altura >= 1.20 && altura <= 1.70 )
				puts ( "E" );
			else
				puts ( "F" );
		} else {
			if ( altura < 1.20 )
			puts ( "G" );
		else
			if ( altura >= 1.20 && altura <= 1.70 )
				puts ( "H" );
			else
				puts ( "I" );
		}
	
	return 0;
}
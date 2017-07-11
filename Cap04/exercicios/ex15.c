#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	float delta;
	float a, b, c;
	float x1, x2;
	
	printf ( "Digite os valores de a, b e c: " );
	scanf  ( "%f%f%f", &a, &b, &c );
	
	delta = ( b * b ) - ( 4 * a * c );
		   
	if ( a ) {
		if ( delta < 0 )
			puts ( "Não existe raíz" );
		else
			if ( delta == 0 ) {
				x1 = ( -b + sqrt( delta ) ) / ( 2 * a );
				printf ( "Raíz única: %f\n", x1 );
				
			} else {
				x1 = ( -b + sqrt( delta ) ) / ( 2 * a );
				x2 = ( -b - sqrt( delta ) ) / ( 2 * a );
				
				printf ( "x1: %f\n", x1 );
				printf ( "x2: %f\n", x2 );
			}		
	}
	
	return 0;
}
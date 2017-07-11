#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float A[20];
	int i;
	
	for ( i = 0; i < 20; i++ ) {
		printf ( "Digite o %dº valor: ", i + 1 );
		scanf  ( "%f", &A[i] );
	}
	
	float B[20];
	for ( i = 0; i < 20; i++ ) {
		B[i] = A[i] * A[i];
	}
	
	for ( i = 0; i < 20; i++ )
		printf ( "%f \n", A[i] );
		
	puts ( "" );
	for ( i = 0; i < 20; i++ )
		printf ( "%f \n", B[i]  );
	
	
	return 0;
}
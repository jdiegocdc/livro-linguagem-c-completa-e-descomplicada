#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, A[10], B[10];
	
	for ( i = 0; i < 10; i++ ) {
		printf ( "Digite o %dº valor de A: ", i + 1 );
		scanf  ( "%d", &A[i] );
		
		printf ( "Digite o %dº valor de B: ", i + 1 );
		scanf  ( "%d", &B[i] );
	}
	
	int C[10];
	for ( i = 0; i < 10; i++ ) 
		C[i] = A[i] - B[i];
		
	for ( i = 0; i < 10; i++ )
		printf ( "\n%d ", C[i] );
	
	
	return 0;
}
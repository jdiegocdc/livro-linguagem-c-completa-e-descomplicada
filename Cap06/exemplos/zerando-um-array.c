#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vet[5];
	int i;
	
	for ( i = 0; i < 5; i++ ) {
		vet[i] = 0;
	}
	
	for ( i = 0; i < 5; i++ )
		printf ( "%d ", vet[i] );
	
	return 0;
}
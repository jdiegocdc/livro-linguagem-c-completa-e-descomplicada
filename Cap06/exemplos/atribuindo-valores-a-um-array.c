#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vet[5];
	vet[0] = 15;
	vet[1] = 12;
	vet[2] = 9;
	vet[3] = 1;
	vet[4] = 35;
	
	int i;
	for ( i = 0; i < 5; i++ )
		printf ( "%d ", vet[i] );
	
	return 0;
}
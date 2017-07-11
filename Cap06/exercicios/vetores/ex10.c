#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, vet[100];
	int contador = 0;
	
	for ( i = 1; contador < 100; i++ )
		if ( i % 7 == 0 ) {
			vet[contador] = i;
			contador++;
		}
		
	for ( i = 0; i < 100; i++ ) {
		printf ( "%3d ",  vet[i]);
		
		if ( i % 5 == 0 )
			puts ( "" );		
	}
			
	
	return 0;
}
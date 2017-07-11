#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i;
	int a, b, temp;
	
	printf ( "Digite um inteiro positivo: " );
	scanf  ( "%d", &numero );
	
	
	i = 1;
	while ( i < numero ) {
		if ( i == 1 ) {
			a = 0;
			b = 1;
			printf ( "%d %d ", a, b );			
		}
		else {
			printf ( "%d ", a + b );
			temp = b;
			b    = a + b;
			a    = temp;
		}
		
		i++;
	}	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int a, b;
	printf ( "Digite o valor de a: " );
	scanf  ( "%d", &a );
	
	printf ( "Digite o valor de b: " );
	scanf  ( "%d", &b );
	
	while ( a < b ); { // ERRADO
		a = a + 1;
		printf ( "%d \n", a );
	}
	
	return 0;
}
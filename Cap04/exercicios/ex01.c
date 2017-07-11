#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int primeiroNum, segundoNum;
	
	printf ( "Digite dois números: " );
	scanf  ( "%d%d", &primeiroNum, &segundoNum );
	
	( primeiroNum > segundoNum ) ? printf ( "Maior: %d\n", primeiroNum ) 
								 : printf ( "Maior: %d\n", segundoNum );
	return 0;
}
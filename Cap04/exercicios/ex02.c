#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int primeiroNum, segundoNum;
	
	printf ( "Digite dois números:  " );
	scanf  ( "%d%d", &primeiroNum, &segundoNum );
	
	if ( primeiroNum > segundoNum )
		printf ( "Maior: %d\n", primeiroNum );
	else
		if ( segundoNum > primeiroNum )
			printf ( "Maior: %d\n", segundoNum );
		else
			printf ( "Números iguais.\n" );
	
	return 0;
}
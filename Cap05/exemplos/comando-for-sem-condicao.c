#include <stdio.h>
#include <stdlib.h>

int main () {
	
	short int a, b, c;
	printf ( "Digite o valor de a: " );
	scanf  ( "%hd", &a );
	
	printf ( "Digite o valor de b: " );
	scanf  ( "%hd", &b );
	
	// o comando for abaixo é um laça de repetição
	for ( c = a; ; c++ )
		printf ( "%hd \n", c );
	
	
	return 0;
}
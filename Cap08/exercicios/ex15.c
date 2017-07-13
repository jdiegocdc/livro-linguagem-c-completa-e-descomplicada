#include <stdio.h>
#include <stdlib.h>

union tipoBasico {
	short int x;
	unsigned char c;
};

int main () {
	
	union tipoBasico tipo;
	
	tipo.x = 1965;
	printf ( "x = %d\n", tipo.x );
	printf ( "c = %d\n", tipo.c );
	
	tipo.c = 38;
	printf ( "x = %d\n", tipo.x );
	printf ( "c = %d\n", tipo.c );
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "aritmetica.h" // inclui nossa biblioteca

int main () {
	
	int x, y, z;
	char ch;
	
	printf ( "Digite uma operação matemática (+, -, *, /): " );
	ch = getchar ();
	
	printf ( "Digite dois números: " );
	scanf  ( "%d %d", &x, &y );
	
	switch ( ch ) {
		case '+': z = soma( x, y ); break;
		case '-': z = subtracao( x, y ); break;
		case '*': z = produto( x, y ); break;
		case '/': z = divisao( x, y ); break;
		default: z = soma( x, y );
	}
		
	printf ( "Resultado: %d\n", z );
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char string[50];
	int i;
	
	printf ( "Digite uma string: " );
	fgets  ( string, 50, stdin );
	
	for ( i = 0; i < 4; i++ )
		putchar ( string[i] );
	
	return 0;
}
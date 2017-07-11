#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char string[50];
	int i, j;
	
	printf ( "Digite uma string: " );
	fgets  ( string, 50, stdin );
	
	printf ( "Digite i e j: " );
	scanf  ( "%d%d", &i, &j );
	
	while ( i <= j ) {
		putchar ( string[i] );
		i++;
	}	
	
	return 0;
}
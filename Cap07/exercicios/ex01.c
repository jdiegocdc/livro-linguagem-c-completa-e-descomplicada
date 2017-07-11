#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char string[50];
	
	printf ( "Digite uma string: " );
	fgets  ( string, 50, stdin );
	
	printf ( "%s\n", string );
	
	return 0;
}
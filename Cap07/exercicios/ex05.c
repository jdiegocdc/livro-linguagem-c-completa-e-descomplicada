#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char string[50];
	int i, j, temp;
	
	printf ( "Digite uma string: " );
	fgets  ( string, 50, stdin );
	
	j = strlen( string ) - 2;
	
	for ( i = 0; i < j; i++, j-- ) {
		temp = string[i];
		string[i] = string[j];
		string[j] = temp;
	}
	
	printf ( "%s\n", string );
		
	
	return 0;
}
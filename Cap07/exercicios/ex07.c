#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char string[50];
	int i, j;
	
	printf ( "Digite uma string: " );
	fgets  ( string, 50, stdin );
	
	int ePalindromo = 0;
	j = strlen( string ) - 2;
	
	for ( i = 0; i < j; i++, j-- )
		if ( string[i] != string[j] )
			ePalindromo = 1;
			
	if ( !ePalindromo )
		printf ( "%s é um palíndromo\n", string );
	else
		printf ( "%s não é um palíndromo\n", string );
	
	
	return 0;
}
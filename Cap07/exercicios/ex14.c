#include <stdio.h>
#include <stdlib.h>
#define N 3
int main () {
	
	char string[100];
	int i;
	
	printf ( "Digite uma string: " );
	fgets  ( string, 100, stdin );
	
	for ( i = 0; string[i] != '\0' && string[i] != '\n'; i++ )
		if ( string[i] != ' ' )
			string[i] = string[i] + N;
		
	printf ( "%s\n", string );
			
	
	return 0;
}
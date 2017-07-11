#include <stdio.h>
#include <stdio.h>

int main () {
	
	char string[50];
	int i;
	
	printf ( "Digite uma string: " );
	fgets  ( string, 50, stdin );
	
	for ( i = 0; string[i] != '\0' && string[i] != '\n'; i++ )
		if ( string[i] != ' ' )
			string[i] = string[i] - 32;
	
	
	printf ( "%s\n", string );
	
	return 0;
}
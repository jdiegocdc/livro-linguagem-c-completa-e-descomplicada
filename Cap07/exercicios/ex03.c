#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char string[50];
	int i, qtdCaracteres = 0;
	
	printf ( "Digite uma string: " );
	fgets  ( string, 50, stdin );
	
	for ( i = 0; string[i] != '\0' && string[i] != '\n'; i++ )
		qtdCaracteres++;
		
	printf ( "%d\n", qtdCaracteres );
	
	return 0;
}
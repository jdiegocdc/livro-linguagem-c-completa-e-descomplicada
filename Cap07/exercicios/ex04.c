#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char string[50];
	int i, tamanho;
	
	printf ( "Digite uma string: " );
	fgets  ( string, 50, stdin );
	
	tamanho = strlen ( string );
	
	for ( i = tamanho; i >= 0; i-- )
		putchar ( string[i] );
	
	return 0;
}
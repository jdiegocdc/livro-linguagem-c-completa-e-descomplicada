#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char caractere, string[50];
	int i, qtdVogais = 0;
	
	printf ( "Digite uma string: " );
	fgets  ( string, 50, stdin );
	
	for ( i = 0; string[i] != '\0'; i++ )
		switch ( string[i] ) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				qtdVogais++;
		}
		
	printf ( "Digite um caractere: " );
	caractere = getchar();
	
	for ( i = 0; string[i] != '\0'; i++ )
		switch ( string[i] ) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				string[i] = caractere;
		}
	
	printf ( "%s\n", string );
	printf ( "%s possui %d vogais\n", string, qtdVogais );
	
	return 0;
}
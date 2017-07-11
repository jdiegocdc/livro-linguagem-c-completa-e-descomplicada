#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	
	char stringA[50], stringB[50];
	int i, j;
	
	printf ( "Digite a primeira string: " );
	fgets  ( stringA, 50, stdin );
	
	printf ( "Digite a segunda string: " );
	fgets  ( stringB, 50, stdin );
	
	int estaContido = 0;
	for ( i = 0; stringA[i] != '\0' && stringA[i] != '\n'; i++ ) {
		if ( stringB[0] == stringA[i] ) {
			j = 0;
			while ( ( stringB[j] == stringA[i + j] ) && ( stringB[j] != '\n' ) ) {
				printf ( "%d %c %c\n", j, stringB[j], stringA[i + j] );
				j++;		
			}
		}
		
		if ( j == strlen(stringB) - 1 ) {
			estaContido = 1;
			break;
		}
	}	
		
	if ( estaContido )
		printf ( "%s está contido em %s\n", stringB, stringA );
	else
		printf ( "%s não está contido em %s\n", stringB, stringA );
		
	return 0;
}
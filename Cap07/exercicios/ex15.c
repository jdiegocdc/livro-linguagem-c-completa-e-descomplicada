#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char stringA[50], stringB[50];
	int i;
	
	printf ( "Digite a primeira string: " );
	fgets  ( stringA, 50, stdin );
	
	printf ( "Digite a segunda string: " );
	fgets  ( stringB, 50, stdin );
	
		
	for ( i = 0; stringA[i] != '\0' && stringB[i] != '\0'; i++ )
		if ( stringA[i] < stringB[i] ) {
			printf ( "%s%s\n", stringA, stringB );
			break;
		}
		else 
			if ( stringA[i] > stringB[i] ) {
				printf ( "%s%s\n", stringB, stringA );
				break;
			}
		
	return 0;
}
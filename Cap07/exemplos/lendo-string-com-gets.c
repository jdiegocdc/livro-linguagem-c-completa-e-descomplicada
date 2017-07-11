#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char str[50];
	
	printf ( "Digite o seu nome: " );
	gets   ( str );
	
	printf ( "\n%s", str );
	
	return 0;
}
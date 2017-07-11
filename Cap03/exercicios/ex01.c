#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero,
		antecessor,
		sucessor;
	
	printf ( "Digite um número inteiro: " );
	scanf  ( "%d", &numero );
	
	antecessor = numero - 1;
	sucessor   = numero + 1;
	
	printf ( "Antecessor: %d\n", antecessor );
	printf ( "Sucessor: %d\n", sucessor );
	
	return 0;
}
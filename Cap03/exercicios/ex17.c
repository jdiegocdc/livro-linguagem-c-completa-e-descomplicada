#include <stdio.h>
#include <stdlib.h>

int main () {

	int numero;
	
	printf ( "Digite um número inteiro: " );
	scanf  ( "%d", &numero );
	
	printf ( "Complemento bit a bit de %d: %d \n", numero, ~numero );
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero;
	
	printf ( "Digite um numero inteiro: " );
	scanf  ( "%d", &numero );
	
	printf ( "Multiplicação: %d\n", numero << 1 );
	printf ( "Divisão: %d\n", numero >> 1 );
	
	return 0;
}
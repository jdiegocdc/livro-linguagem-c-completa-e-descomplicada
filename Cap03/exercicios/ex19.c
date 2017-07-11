#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int primeiroNum, segundoNum;
	
	printf ( "Digite dois numeros inteiros: " );
	scanf  ( "%d%d", &primeiroNum, &segundoNum );
	
	printf ( "Ou exclusivo: %d\n", primeiroNum ^ segundoNum );
	printf ( "Ou bit a bit: %d\n", primeiroNum | segundoNum );
	printf ( "E bit a bit: %d\n", primeiroNum & segundoNum );

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int primeiroNum, segundoNum;
	
	printf ( "Digite dois numero inteiros: " );
	scanf  ( "%d%d", &primeiroNum, &segundoNum );
	
	printf ( "%d << %d = %d\n", primeiroNum, segundoNum, primeiroNum << segundoNum );
	printf ( "%d >> %d = %d\n", primeiroNum, segundoNum, primeiroNum >> segundoNum );
	
	return 0;
}
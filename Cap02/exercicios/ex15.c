#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char c;
	int i;
	float f;
	
	printf ( "Digite um caractere: " );
	c = getchar();
	
	printf ( "Digite um número inteiro: " );
	scanf  ( "%d", &i );
	
	printf ( "Digite um número real: " );
	scanf  ( "%f", &f );
	
	printf ( "%c %d %f\n", c, i, f);
	printf ( "%c\t%d\t%f\n", c, i, f );
	printf ( "%c\n%d\n%f\n", c, i, f );
	
	return 0;
}
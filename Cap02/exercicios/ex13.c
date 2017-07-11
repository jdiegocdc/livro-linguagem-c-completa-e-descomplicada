#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char c;
	
	printf ( "Digite um caractere: " );
	c = getchar();
	
	printf ( "\"%c\"\n", c );
	
	return 0;
}
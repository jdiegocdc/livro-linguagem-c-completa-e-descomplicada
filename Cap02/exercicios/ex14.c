#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char a, b, c;
	
	printf ( "Digite o primeiro caractere: " );
	a = getchar();
	
	getchar(); // limpa buffer
	
	printf ( "Digite o segundo caractere: " );
	b = getchar();
	
	getchar(); // limpa buffer
	
	printf ( "Digite o terceiro caractere: " );
	c = getchar();
	
	printf ( "%c\n%c\n%c\n", a, b, c );
	
	return 0;
}
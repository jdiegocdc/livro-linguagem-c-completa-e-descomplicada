#include <stdio.h>
#include <stdlib.h>

int x = 5; // variável global
void incr() {
	x++; // acesso à variável global
}

int main() {
	printf ( "x = %d\n",x ); // acesso a variável global
	incr();
	
	printf ( "x = %d\n", x ); // acesso a variável global
	
	return 0;
}
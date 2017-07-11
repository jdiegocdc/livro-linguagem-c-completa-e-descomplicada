#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int num;
	printf ( "Digite um número: " );
	scanf  ( "%d", &num  );
	
	if ( num > 10 ); //ERRADO	
		printf ( "O número é maior do que 10\n" );
	
	return 0;
}
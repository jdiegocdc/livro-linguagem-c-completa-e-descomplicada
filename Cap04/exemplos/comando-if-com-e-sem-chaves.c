#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int num;
	printf ( "Digite um número: " );
	scanf ( "%d", &num );
	
	if ( num > 10 )
		printf ( "O número é maior que 10\n" );
	
	/* OU
	 if (num > 10) {
		printf( "O número é maior que 10\n" );*
	}
	*/
	
	return 0;
}
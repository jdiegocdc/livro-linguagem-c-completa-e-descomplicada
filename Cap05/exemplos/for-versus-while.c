#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, s = 0;
	for ( i = 1; i <= 10; i++ ) {
		s = s + 1;
	}
	printf ( "Soma = %d \n", s );
	
	return 0;
}
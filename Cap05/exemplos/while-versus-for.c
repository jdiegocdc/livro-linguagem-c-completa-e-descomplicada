#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, s = 0;
	i = 1;
	
	while ( i <= 10 ) {
		s = s + 1;
		i++;
	}
	
	printf ( "Soma = %d \n", s );
	
	return 0;
}
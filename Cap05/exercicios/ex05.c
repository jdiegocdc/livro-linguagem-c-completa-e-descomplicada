#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i ,j , soma;
	
	soma = 0;
	for ( i = 1, j = 0; j < 50; i++ )
		if ( i % 2 == 0 ) {
			soma += i;
			j++;
		}
		
	printf ( "Soma: %d\n", soma );
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, j;
	
	for ( i = 1, j = 0; j < 5; i++ )
		if ( i % 3 == 0 ) {
			printf ( "%d ", i );
			j++;
		}
	
	return 0;
}
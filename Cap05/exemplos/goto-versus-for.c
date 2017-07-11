#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i = 0;
	inicio:
	if ( i < 5 ) {
		printf ( "Número %d\n", i );
		i++;
		goto inicio;		
	}
	return 0;
}
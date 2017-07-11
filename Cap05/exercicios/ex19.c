#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, j;
	float S = 0;
	
	for ( i = 1, j = 1; i <= 3 && j <= 2; i += 2, j += 1 ) {
		S = S + ( (float) i / j );
	}
	
	printf ( "S: %f\n", S );
	
	return 0;
}
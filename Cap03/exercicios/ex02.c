#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float numero, quintaParte;
		   
	printf ( "Digite um número real: " );
	scanf  ( "%f", &numero );
	
	quintaParte = numero / 5;
	
	printf ( "5° parte de %f: %f\n", numero, quintaParte );
	
	return 0;
}
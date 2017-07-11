#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int dia, mes, ano;
	
	printf ( "Digita dia, mes e ano: " );
	scanf  ( "%d%d%d", &dia, &mes, &ano );
	
	printf ( "%d\\%d\\%d\n", dia, mes, ano );
	
	return 0;
}
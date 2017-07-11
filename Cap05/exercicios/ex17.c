#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i;
	int linha, coluna;
	
	printf ( "Digite um inteiro positivo: " );
	scanf  ( "%d", &numero );
	
	for ( linha = 1, i = 1; linha <= numero; linha++ ) {
		for ( coluna = 0; coluna < linha; coluna++ )
			printf ( "%d ", i++ );
		
		puts ( "" );	
	}
	
	return 0;
}
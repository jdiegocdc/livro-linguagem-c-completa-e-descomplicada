#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i, vet[8];
	int x, y, soma;
	
	for ( i = 0; i < 8; i++ ) {
		printf ( "Digite o %dº valor: ", i + 1 );
		scanf  ( "%d", &vet[i] );
	}
	
	printf ( "Digite o valor de x e y: " );
	scanf  ( "%d%d", &x, &y );
	
	soma = vet[x] + vet[y];
	
	printf ( "Soma: %d\n", soma );
	
	
	
	return 0;
}
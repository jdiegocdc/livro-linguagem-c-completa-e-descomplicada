#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float vet[10], soma = 0;
	int i, qtdNegativos = 0;
	
	for ( i = 0; i < 10; i++ ) {
		printf ( "Digite o %dº valor: ", i + 1 );
		scanf  ( "%f", &vet[i] );
	}
	
	for ( i = 0; i < 10; i++ )
		if ( vet[i] < 0 )
			qtdNegativos++;
		else
			soma = soma + vet[i];
	
	printf ( "Negativos: %d\n", qtdNegativos );
	printf ( "Soma: %f\n", soma );
	return 0;
}
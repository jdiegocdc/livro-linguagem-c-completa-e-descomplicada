#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

int main () {
	
	float vet[N];
	float 
		media, soma = 0, 
		variancia   = 0,
		desvioPadrao;
	int i;
	
	for ( i = 0; i < N; i++ ) {
		printf ( "Digite o %dº número: ", i + 1 );
		scanf  ( "%f", &vet[i] );
		soma = soma + vet[i];
	}
	
	media = soma / N;
	
	for ( i = 0; i < N; i++ ) {
		variancia = variancia + pow( vet[i] - media, 2); 
	}
	
	desvioPadrao = sqrt( variancia / N );
	
	printf ( "Desvio padrão: %f\n", desvioPadrao );
	
	return 0;
}
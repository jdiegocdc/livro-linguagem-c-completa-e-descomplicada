#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, i;
	float soma, media;
	
	soma = 0;
	i    = 0;
	while ( i < 10 ) {
		printf ( "Digite o %d° inteiro positivo: ", i + 1 );
		scanf  ( "%d", &numero );
		
		if ( numero > 0 ) {
			soma += numero;
			i++;
		}
	}
	
	media = soma / 10;
	
	printf ( "Média: %f\n", media );
	
	return 0;
}
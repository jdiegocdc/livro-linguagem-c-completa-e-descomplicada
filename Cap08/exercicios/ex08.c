#include <stdio.h>
#include <stdlib.h>
#define N 6

struct pessoa {
	char nome[50];
	int dia, mes, ano;
};

int main () {
	
	struct pessoa p[N];
	int i;
	
	/* lê os dados de N pessoas */
	puts ( "Digite nome e data de nascimento: " );
	for ( i = 0; i < N; i++ ) {
		printf ( "%dº pessoa\nNome: ", i + 1 );
		fgets  ( p[i].nome, 50, stdin );
		
		printf ( "Data de nascimento: " );
		scanf  ( "%d/%d/%d", &p[i].dia, &p[i].mes, &p[i].ano );	
		
		getchar(); // Lê o \n
		puts ( "" );
		
	} /* fim do for */
	
	/* Encontro mais novo e mais velho assumindo que 
	 * inicialmente encontram-se no indice 0
	 */
	int maisNovo = 0, maisVelho = 0;
	for ( i = 0; i < N; i++ ) {
		if ( ( p[i].ano == p[maisNovo].ano ) || ( p[i].ano == p[maisVelho].ano ) ) {
			if ( ( p[i].mes != p[maisNovo].mes ) || ( p[i].mes != p[maisVelho].mes ) ) {
				maisNovo  = ( p[i].mes > p[maisNovo].mes  ) ? i : maisNovo;
				maisVelho = ( p[i].mes < p[maisVelho].mes ) ? i : maisNovo;
			} else {
				maisNovo  = ( p[i].dia > p[maisNovo].dia  ) ? i : maisNovo;
				maisVelho = ( p[i].dia < p[maisVelho].dia ) ? i : maisNovo;
			
			} /* fim if-else interno */
					
		} else {
			maisNovo  = ( p[i].ano > p[maisNovo].ano  ) ? i : maisNovo;
			maisVelho = ( p[i].ano < p[maisVelho].ano ) ? i : maisVelho;
		} /* fim if-else externo */
		
	} /* fim do for */

	/* exibe os nomes do mais novo e mais velho */
	printf ( "Mais novo: %s\n",  p[maisNovo].nome );
	printf ( "Mais velho: %s\n", p[maisVelho].nome );
	
	return 0;
}
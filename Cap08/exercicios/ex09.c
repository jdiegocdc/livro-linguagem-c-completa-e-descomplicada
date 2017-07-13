#include <stdio.h>
#include <stdlib.h>
#define N 5

typedef struct _atleta {
	char  nome[50];
	char  esporte[50];
	int   idade;
	float altura;
} atleta;

int main () {
	
	atleta a[N];
	int i;
	
	puts ( "Digite os dados do atleta" );
	for ( i = 0; i < N; i++ ) {
		printf ( "%dº\n", i + 1 );
		printf ( "Nome: " );
		fgets  ( a[i].nome, 50, stdin );
		
		printf ( "Esporte: " );
		fgets  ( a[i].esporte, 50, stdin );
		
		printf ( "Idade: " );
		scanf  ( "%d", &a[i].idade );
		
		printf ( "Altura: " );
		scanf  ( "%f", &a[i].altura );
		
		puts ( "\n" );
		getchar(); /* lê o \n */
	}
	
	/* Encontro mais alto e mais velho assumindo que 
	 * inicialmente encontram-se no indice 0
	 */
	int maisAlto = 0, maisVelho = 0;
	for ( i = 0; i < N; i++ ) {
		maisAlto  = ( a[i].altura > a[maisAlto].altura ) ? i : maisAlto ;
		maisVelho = ( a[i].idade > a[maisVelho].idade  ) ? i : maisVelho;
	}
	
	/* exibe mais alto e mais velho */
	printf ( "Mais alto: %s", a[maisAlto].nome );
	printf ( "Mais velho: %s", a[maisVelho].nome );
	
	return 0;
}
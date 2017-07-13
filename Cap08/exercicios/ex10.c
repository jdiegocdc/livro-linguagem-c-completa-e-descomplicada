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
	
	atleta a[N], temp;
	int i, j;
	
	/* lê os dados dos atletas */
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
	
	/* ordena as estruturas por idade:
	 * do mais velho para o mais novo */
	for ( i = 0; i < N; i++ ) {
		for ( j = 0; j < i; j++ )
			if ( a[j].idade < a[i].idade ) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
	}
	
	/* exibe os dados */
	puts ( "Dados dos atletas:" );
	for ( i = 0; i < N; i++ ) {		
		printf ( "Nome: %s", a[i].nome );
		printf ( "Esporte: %s", a[i].esporte );
		printf ( "Idade: %d\n", a[i].idade );
		printf ( "Altura: %f\n", a[i].altura );
		
		puts ( "" );
	}		
	
	return 0;
}
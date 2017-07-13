#include <stdio.h>
#include <stdlib.h>

struct aluno {
	int numMatricula;
	char nome[50];
	float notas[3];	
};

int main () {
	
	struct aluno a[5];
	float media[5];
	int i, j;
	
	for ( i = 0; i < 5; i++ ) {
		printf ( "%dº aluno:\n", i + 1 );
		printf ( "Num. da matricula: " );
		scanf  ( "%d", &a[i].numMatricula );
		
		getchar(); // Lê o \n
		
		printf ( "Nome: " );
		fgets  ( a[i].nome, 50, stdin );
		
		float soma = 0;
		for ( j = 0; j < 3; j++ ) {
			printf ( "%d° nota: ", j + 1 );
			scanf  ( "%f", &a[i].notas[j] );
			soma = soma + a[i].notas[j];
		}
		media[i] = soma / 3.0;
		puts ( "" );
	}
	
	int maior = 0;
	for ( i = 1; i < 5; i++ )
		maior = ( media[maior] < media[i] ) ? i : maior;
	
	printf ( "Nome: %s", a[maior].nome );
	puts   ( "Notas: " );
	for ( i = 0; i < 3; i++ )
		printf ( "%f\n", a[maior].notas[i] );
	
	return 0;
}
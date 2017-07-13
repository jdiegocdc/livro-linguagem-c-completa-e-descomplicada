#include <stdio.h>
#include <stdlib.h>

struct cadastro {
	char nome[50];
	int idade;
	char rua[50];
	int numero;	
};

int main () {
	
	struct cadastro c[4];
	int i;
	
	for ( i = 0; i < 4; i++ ) {
		printf ( "Digite seu nome: " );
		fgets ( c[i].nome, 50, stdin );
		
		printf ( "Digite sua idade: " );
		scanf  ( "%d", &c[i].idade );
		
		getchar(); // Lê o \n
		
		printf ( "Digite o nome da sua rua: " );
		fgets  ( c[i].rua, 50, stdin );
		
		printf ( "Digite o número da rua: " );
		scanf  ( "%d", &c[i].numero );
		
		getchar(); // Lê o \n
	}
	
	for ( i = 0; i < 4; i++ ) {
		printf ( "%s", c[i].nome );
		printf ( "%d\n", c[i].idade );
		printf ( "%s", c[i].rua );
		printf ( "%d\n", c[i].numero );
	}
	
	return 0;
}
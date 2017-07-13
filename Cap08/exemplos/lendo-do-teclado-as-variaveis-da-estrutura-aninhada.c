#include <stdio.h>
#include <stdlib.h>

struct endereco {
	char rua[50];
	int numero;
};

struct cadastro {
	char nome[50];
	int idade;
	struct endereco ender;
};

int main () {
		struct cadastro c;
		
		// Lê do teclado uma string e armazena no campo nome
		printf ( "Digite o seu nome: " );
		gets   ( c.nome );
		
		// Lê do teclado um valor inteiro e armazena no campo idade
		printf ( "Digite sua idade: " );
		scanf  ( "%d", &c.idade );
		
		getchar(); // Lê o \n
		
		// Lê do teclado uma string
		// e armazena no campo rua da variável ender
		printf ( "Digite o nome da rua: " );
		gets ( c.ender.rua );
	
		// Lê do teclado um valor inteiro
		// e armazena no campo numero da variável ender
		printf ( "Digite o número da rua: " );
		scanf  ( "%d", &c.ender.numero );
		
		printf ( "%s\n", c.nome );
		printf ( "%d\n", c.idade );
		printf ( "%s\n", c.ender.rua );
		printf ( "%d\n", c.ender.numero );
		
		
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct cadastro {
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

int main () {
	struct cadastro c;
	// Lê do teclado uma string e armazena no campo nome
	printf ( "Digite seu nome: " );
	gets   ( c.nome );
	
	// Lê do teclado um valor inteiro e armazena no campo idade
	printf ( "Digite sua idade: " );
	scanf  ( "%d", &c.idade );
	
	getchar(); // Lê o \n
	
	// Lê do teclado uma string e armazena no campo rua
	printf ( "Digita o nome da sua rua: " );
	gets   ( c.rua );
	
	// Lê do teclado um valor inteiro e armazena no campo numero
	printf ( "Digite o número da rua: " );
	scanf  ( "%d", &c.numero );
	
	printf ( "%s\n", c.nome );
	printf ( "%d\n", c.idade );
	printf ( "%s\n", c.rua );
	printf ( "%d\n", c.numero );
	
	return 0;
}
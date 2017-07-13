#include <stdio.h>
#include <stdlib.h>

struct pessoa {
	char nome[50];
	int idade;
	char endereco[50];
};

int main () {
	
	struct pessoa p;
	
	printf ( "Digite seu nome: " );
	fgets  ( p.nome, 50, stdin );
	
	printf ( "Digite sua idade: " );
	scanf  ( "%d", &p.idade );
	
	getchar(); // Lê o \n
	
	printf ( "Digite seu endereço: " );
	fgets  ( p.endereco, 50, stdin );
	
	printf ( "Nome: %s", p.nome );
	printf ( "Idade: %d\n", p.idade );
	printf ( "Endereço: %s", p.endereco );
	
	return 0;
}
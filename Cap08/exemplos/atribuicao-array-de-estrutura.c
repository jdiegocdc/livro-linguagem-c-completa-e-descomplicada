#include <stdio.h>
#include <stdlib.h>

struct cadastro {
	char nome[50];
	int idade;
	char rua[50];
	int numero;	
};

int main () {
	
	struct cadastro c[10];
	
	c[1] = c[2]; // CORRETO
	
	return 0;
}
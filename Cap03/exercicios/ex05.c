#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int idade, anoNascimento, anoAtual;
	
	printf ( "Digite o ano de seu nascimento: " );	
	scanf  ( "%d", &anoNascimento );
	
	printf ( "Digite o ano atual: " );
	scanf  ( "%d", &anoAtual );
	
	idade = anoAtual - anoNascimento;
	
	printf ( "Sua idade: %d\n", idade );
	return 0;
}
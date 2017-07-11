#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float salario, prestacao;
	
	printf ( "Digite o salário: " );	
	scanf  ( "%f", &salario );
	
	printf ( "Digite a prestação: " );
	scanf  ( "%f", &prestacao );
	
	if ( prestacao > ( salario * 0.2 ) ) 
		printf ( "Empréstimo não concedido.\n" );
	else
		printf ( "Empréstimo concedido.\n" );
	
	return 0;
}
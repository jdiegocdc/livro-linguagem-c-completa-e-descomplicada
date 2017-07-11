#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int opcao;
	float x, y, operacao;
	
	printf ( "%s%12s\n", "Cod.", "Operacao" );
	printf ( "%4s%12s\n", "1", "Soma" );
	printf ( "%4s%12s\n", "2", "Subtracao" );
	printf ( "%4s%12s\n", "3", "Produto" );
	printf ( "%4s%12s\n", "4", "Divisao" );
	printf ( "Código da operação: " );
	scanf  ( "%d", &opcao );
	
	printf ( "Digite dois números: " );
	scanf  ( "%f%f", &x, &y );
	
	switch ( opcao ) {
		case 1: 
			operacao = x + y;
			printf ( "Soma: %f\n", operacao );
			break;
			
		case 2:
			operacao = x - y;
			printf ( "Subtração: %f\n", operacao );
			break;
			
		case 3: 
			operacao = x * y;
			printf ( "Produto: %f\n", operacao );
			break;
			
		case 4:
			operacao = x / y;
			printf ( "Divisão: %f\n", operacao );
			break;		
		
		default: puts ( "Erro: Código digitado é inválido" );
	}
	
	return 0;
}
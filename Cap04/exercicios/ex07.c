#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float valorProduto, precoFinal;
	short int estado;
	
	printf ( "Digite o valor do produto: " );
	scanf  ( "%f", &valorProduto );
	
	printf ( "%s%8s%10s\n", "Cód.", "Estado", "Imposto" );
	printf ( "%4s%8s%10s\n", "1", "MG", "7%" );
	printf ( "%4s%8s%10s\n", "2", "SP", "12%" );
	printf ( "%4s%8s%10s\n", "3", "RJ", "15%" );
	printf ( "%4s%8s%10s\n", "4", "MS", "8%" );
	printf ( "Código do destino (1-4): " );
	scanf  ( "%hd", &estado);
	
	switch ( estado ) {
		case 1: 
			precoFinal = valorProduto * 1.07;
			printf ( "Preço final: R$ %.2f\n", precoFinal );
			break;
			
		case 2:
			precoFinal = valorProduto * 1.12;
			printf ( "Preço final: R$ %.2f\n", precoFinal );
			break;
		
		case 3:
			precoFinal = valorProduto * 1.15;
			printf ( "Preço final: %f\n", precoFinal );
			break;
			
		case 4:
			precoFinal = valorProduto * 1.08;
			printf ( "Preço final: R$ %.2f\n", precoFinal );
			break;
			
		default: printf ( "\nErro: escolha de estado incorreta\n" );
	}
	
	return 0;
}
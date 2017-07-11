#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char nomeProduto[50];
	float valorProduto = 0.0;
	
	printf ( "Digite o nome do produto: " );
	fgets  ( nomeProduto, 50, stdin );
	
	printf ( "Digite o valor do produto: " );
	scanf  ( "%f", &valorProduto );
	
	float desconto = valorProduto * 0.1;
	float valorAVista = valorProduto - desconto;
	
	printf ( "Valor do produto: R$ %.2f\n", valorProduto );
	printf ( "Desconto: R$ %.2f\n", desconto );
	printf ( "Valor à vista: R$ %.2f\n", valorAVista );
	
	return 0;
}
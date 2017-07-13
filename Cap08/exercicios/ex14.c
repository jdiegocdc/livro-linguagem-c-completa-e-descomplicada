#include <stdio.h>
#include <stdlib.h>

enum listaDeCompras { Acucar = 1, Feijao, Arroz, CreamCracker };

int main () {
	
	int escolha;
	
	printf ( "%s%15s\n", "Cod.", "Item"  );
	printf ( "%4s%15s", "1 -", "Acucar\n" );
	printf ( "%4s%15s", "2 -", "Feijao\n" );
	printf ( "%4s%15s", "3 -", "Arroz\n" );
	printf ( "%4s%15s", "4 -", "Cream Cracker\n" );	
	printf ( "Digite o codigo do item: " );
	scanf  ( "%d", &escolha );
	
	switch ( escolha ) {
		case Acucar: printf ( "Açucar - R$ %.2f\n", 2.13 ); break;
		case Feijao: printf ( "Feijao - R$ %.2f\n", 5.44 ); break;
		case Arroz:  printf ( "Arroz  - R$ %.2f\n", 2.57 ); break;
		case CreamCracker: printf ( "Cream Cracker - R$ %.2f\n", 2.88 ); break;
		default: puts ( "Erro! Escolha inválida" );		
	}
	
	return 0;
}
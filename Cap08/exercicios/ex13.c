#include <stdio.h>
#include <stdlib.h>

enum meses { Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho,
			  Julho, Agosto, Setembro, Outubro, Novembro, Dezembro };

int main () {
	
	int escolha;
	
	printf ( "Digite um número de 1 à 12: " );
	scanf  ( "%d", &escolha );
	
	switch ( escolha ) {
		case Janeiro: puts ( "Janeiro - 31 dias\n" ); break;		
		case Fevereiro: puts ( "Fevereiro - 28 dias\n" ); break;		
		case Marco: puts ( "Marco - 31 dias\n" ); break;		
		case Abril: puts ( "Abril - 30 dias\n" ); break;		
		case Maio: puts ( "Maio - 31 dias\n" ); break;		
		case Junho: puts ( "Junho - 30 dias\n" ); break;		
		case Julho: puts ( "Julho - 31 dias\n" ); break;		
		case Agosto: puts ( "Agosto - 31 dias\n" ); break;		
		case Setembro: puts ( "Setembro - 30 dias\n" ); break;		
		case Outubro: puts ( "Outubro - 31 dias\n" ); break;		
		case Novembro: puts ( "Novembro - 30 dias\n" ); break;		
		case Dezembro: puts ( "Dezembro - 31 dias\n" ); break;		
		default: puts ( "Erro! Escolha inválida" );
	}
	
	return 0;
}
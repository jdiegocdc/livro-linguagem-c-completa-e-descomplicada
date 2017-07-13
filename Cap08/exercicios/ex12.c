#include <stdio.h>
#include <stdlib.h>

enum DiaDaSemana { Domingo = 1, Segunda, Terca, Quarta, Quinta,
		             Sexta, Sabado };
		        
int main () {
	
	int escolha;
	
	printf ( "Digite um número de 1 à 7: " );
	scanf  ( "%d", &escolha );
	
	switch ( escolha ) {
		
		case Domingo: puts ( "Domingo" ); break;
		case Segunda: puts ( "Segunda" ); break;
		case Terca: puts ( "Terca" ); break;
		case Quarta: puts ( "Quarta" ); break;
		case Quinta: puts ( "Quinta" ); break;
		case Sexta: puts ( "Sexta" ); break;
		case Sabado: puts ( "Sabado" );	 break;	
		default: puts ( "Erro! Escolha inválida\n" );
	}
	
	return 0;
}
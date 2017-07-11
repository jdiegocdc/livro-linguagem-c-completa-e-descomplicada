#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int dia;
	
	printf ( "Digite um número de 1 a 7: " );
	scanf  ( "%d", &dia );
	
	switch ( dia ) {
		case 1:
			puts ( "Domingo" );
			break;
			
			
		case 2:
			puts ( "Segunda" );
			break;
			
		case 3:
			puts ( "Terça" );
			break;
			
		case 4:
			puts ( "Quarta" );
			break;
			
		case 5:
			puts ( "Quinta" );
			break;
			
		case 6:
			puts ( "Sexta" );
			break;
			
		case 7:
			puts ( "Sábado" );
			break;		
		
		default: puts ( "Erro: número digitado incorreto!" );
	}
	
	return 0;
}
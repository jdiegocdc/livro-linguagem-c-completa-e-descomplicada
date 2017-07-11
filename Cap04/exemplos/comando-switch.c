#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char ch;
	printf ( "Digite um simbolo de pontuação: " );
	ch = getchar();
	
	switch ( ch ) {
		case '.': printf ( "Ponto.\n" ); break;
		case ',': printf ( "Vírgula.\n" ); break;
		case ':': printf ( "Dois pontos.\n" ); break;
		case ';': printf ( "Ponto e vírgula" ); break;
		default : printf ( "Não é pontuação.\n");		
	}
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char ch;
	printf ( "Digite um símbolo de pontuação: " );
	ch = getchar();
	
	switch ( ch ) {
		case '.': printf ( "Ponto.\n" );
		case ',': printf ( "Vírgula.\n" );
		case ':': printf ( "Dois pontos.\n" );
		case ';': printf ( "Ponto e vírgula.\n" );
		default: printf ( "Não é pontuação.\n" );
	}
	
	return 0;
}
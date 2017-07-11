#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char ch;
	printf ( "Digite um símbolo de pontuação: " );
	ch = getchar();
	
	if ( ch == '.' )
		printf ( "Ponto.\n" );
	else
		if ( ch == ',' )
			printf ( "Vírgula.\n" );
		else
			if ( ch == ':' )
				printf ( "Dois pontos.\n" );
			else
				if ( ch == ';' )
					printf ( "Ponto e virgula.\n" );
				else
					printf ( "Não é pontuação.\n" );
	
	
	return 0;
}
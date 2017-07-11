#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char ch;
	int a, b;
	printf ( "Digite uma operação matemática: " );
	ch = getchar();
	printf ( "Digite dois números inteiros: " );
	scanf  ( "%d%d", &a, &b);
	
	switch ( ch ) {
		case '+': {
			int c = a + b;
			printf ( "Soma: %d\n", c );
		} break;
		
		case '-': {
			int d = a - b;
			printf ( "Subtração: %d\n", d );
		} break;
		
		case '*': {
			int e = a * b;
			printf ( "Produto: %d\n", e );
		} break;
		
		case '/': {
			int f = a / b;
			printf ( "Divisão: %d\n", f );
		} break;
		
		default: printf ( "Não é operação.\n" );
	}
	
	return 0;
}
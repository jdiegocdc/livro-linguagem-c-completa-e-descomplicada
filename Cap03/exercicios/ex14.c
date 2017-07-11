#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char caractere, caractereConvertido;
	
	printf ( "Digite uma letra maiúscula: ");
	caractere = getchar();
	
	caractereConvertido = caractere + 32;
	
	putchar(caractereConvertido);
	
	
	return 0;
}
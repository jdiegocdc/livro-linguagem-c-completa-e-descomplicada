#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float altura, pesoIdeal;
	char sexo;
	
	printf ( "Digite sua altura: " );
	scanf  ( "%f", &altura );
	
	getchar(); // lê o \n
	
	printf ( "Digite seu sexo (M/F):" );
	sexo = getchar();
	
	switch ( sexo ) {
		case 'm':
		case 'M':
			pesoIdeal = ( 72.7 * altura ) - 58;
			printf ( "Seu peso ideal: %f\n", pesoIdeal );
			break;
			
		case 'f':
		case 'F':
			pesoIdeal = ( 62.1 * altura ) - 44.7;
			printf ( "Seu peso ideal: %f\n", pesoIdeal );
			break;
			
		default: printf ( "Sexo digitado inválido!\n" );
	}
	
	return 0;
}
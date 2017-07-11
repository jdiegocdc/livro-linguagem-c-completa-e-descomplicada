#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float primeiroValor, 
		segundoValor, 
		terceiroValor, 
		quartoValor,
		media;
		
	printf ( "Digite quatro valores reais: " );
	scanf  ( "%f%f%f%f", &primeiroValor, &segundoValor, &terceiroValor, &quartoValor );
	
	media = ( primeiroValor + segundoValor + terceiroValor + quartoValor ) / 4.0;
	
	printf ( "Média: %f\n", media );
	return 0;
}
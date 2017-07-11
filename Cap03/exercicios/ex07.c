#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float reais, cotacaoDoDolar, dolares;
	
	printf ( "Digite um valor em R$: " );
	scanf  ( "%f", &reais );
	
	printf ( "Digite a cotação do dólar: " );
	scanf  ( "%f", &cotacaoDoDolar );
	
	dolares = reais / cotacaoDoDolar;
	
	printf ( "R$ %f = $ %f\n", reais, dolares );
	
	return 0;
}
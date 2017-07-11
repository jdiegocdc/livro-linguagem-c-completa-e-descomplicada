#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int primeiroNum, 
		segundoNum, 
		terceiroNum,
		soma;
	
	printf ( "Digite três números inteiros: " );
	scanf  ( "%d%d%d", &primeiroNum, &segundoNum, &terceiroNum );
	
	soma = primeiroNum + segundoNum + terceiroNum;
	
	printf ( "Soma: %d\n", soma );
	
	return 0;
}
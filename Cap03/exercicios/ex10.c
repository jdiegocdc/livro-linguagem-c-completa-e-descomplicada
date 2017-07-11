#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float importancia = 780000, primeiroGanhador, segundoGanhador, terceiroGanhador;
	
	primeiroGanhador = importancia * 0.46;
	segundoGanhador  = importancia * 0.32;
	terceiroGanhador = importancia - (primeiroGanhador + segundoGanhador);
	
	printf ( "Primeiro ganhador: %f\n", primeiroGanhador );
	printf ( "Segundo ganhador: %f\n", segundoGanhador );
	printf ( "Terceiro ganhador: %f\n", terceiroGanhador );
	
	return 0;
}
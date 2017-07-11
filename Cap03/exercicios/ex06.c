#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float quilometrosPorHora, metrosPorSegundo;
	
	printf ( "Digite uma velocidade em km/h: " );
	scanf  ( "%f", &quilometrosPorHora );
	
	metrosPorSegundo = quilometrosPorHora / 36;
	
	printf ( "%fkm/h = %fm/s\n", quilometrosPorHora, metrosPorSegundo );
	
	return 0;
}
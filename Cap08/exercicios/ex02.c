#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
	int x;
	int y;
};

int main () {
	
	struct ponto p;
	float distancia;
	
	printf ( "Digite a coordenada x: " );
	scanf  ( "%d", &p.x );
	
	printf ( "Digite a coordenada y: " );
	scanf  ( "%d", &p.y );
	
	distancia = sqrt ( pow(p.x - 0, 2) + pow(p.y - 0, 2) );
	
	printf ( "Distancia: %f\n", distancia );
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
	int x;
	int y;
};

int main () {
	
	struct ponto p[2];
	float distancia;
	int i;
	
	for ( i = 0; i < 2; i++ ) {
		printf ( "Digite a coordenada x do %dº ponto: ", i + 1 );
		scanf  ( "%d", &p[i].x );
		
		printf ( "Digite a coordenada y do %dº ponto: ", i + 1 );
		scanf  ( "%d", &p[i].y );
	} 
	
	distancia = sqrt ( pow(p[1].x - p[0].x ,2 ) + pow( p[1].y - p[0].y , 2) );
	
	printf ( "Distancia: %f\n", distancia );
	
	return 0;
}
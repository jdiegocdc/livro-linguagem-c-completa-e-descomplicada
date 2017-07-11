#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main () {
	
	float alturaDoCilindro, raioDoCilindro, volumeDoCilindro;
	
	printf ( "Digite a altura do cilindro: " );
	scanf  ( "%f", &alturaDoCilindro );
	
	printf ( "Digite o raio do cilindro: " );
	scanf  ( "%f", &raioDoCilindro );
	
	volumeDoCilindro = PI * (raioDoCilindro * raioDoCilindro) * alturaDoCilindro;
	
	printf ( "Volume do cilindro: %f\n", volumeDoCilindro );
	
	return 0;
}
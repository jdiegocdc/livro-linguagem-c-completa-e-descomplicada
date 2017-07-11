#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float raioDoCirculo, areaDoCirculo;
	const float PI = 3.141592;
	
	printf ( "Digite o raio do círculo: " );
	scanf  ( "%f", &raioDoCirculo );
	
	areaDoCirculo = PI * (raioDoCirculo * raioDoCirculo);
	
	printf ( "Área do círculo: %f\n", areaDoCirculo );
	
	
	return 0;
}
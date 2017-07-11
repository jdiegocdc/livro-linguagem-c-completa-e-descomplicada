#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592
int main () {
	
	float anguloEmGraus, radianos;
	
	printf ( "Digite um ângulo em graus: " );
	scanf  ( "%f", &anguloEmGraus );
	
	radianos = anguloEmGraus * PI/180;
	
	printf ( "%f graus = %f em radiano\n", anguloEmGraus, radianos );
	
	return 0;
}
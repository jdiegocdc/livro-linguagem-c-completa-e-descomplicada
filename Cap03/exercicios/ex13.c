#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	float a, b, hipotenusa;
	
	printf ( "Digite os valore dos catetos a e b: " );
	scanf  ( "%f%f", &a, &b );
	
	hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
	
	printf ( "Hipotenusa: %f\n", hipotenusa );
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float grausCelsius, grausFahrenheit;
	
	printf ( "Digite uma temperatura em °C: " );
	scanf  ( "%f", &grausCelsius );
	
	grausFahrenheit = grausCelsius * ( 9.0 / 5.0 ) + 32.0;
	
	printf ( "%f °C = %f °F\n", grausCelsius, grausFahrenheit );
	
	return 0;
}
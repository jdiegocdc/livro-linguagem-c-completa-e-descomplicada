#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero, centenas, dezenas, unidades, temp;
	
	printf ( "Digite um número de três dígitos: " );
	scanf  ( "%d", &numero );
	
	centenas = numero / 100;
	temp     = numero % 100;
	dezenas  = temp / 10;
	temp     = temp % 10;
	unidades = temp;
	
	printf ( "Número lido: %d\nNúmero gerado: %d%d%d\n", numero, unidades, dezenas, centenas );
	
	return 0;
}
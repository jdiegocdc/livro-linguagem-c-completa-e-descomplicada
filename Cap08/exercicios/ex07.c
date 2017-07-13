#include <stdio.h>
#include <stdlib.h>

struct hora {
	int hora;
	int minuto;
	int segundo;
};

int main () {	
	
	struct hora h[5];
	int i, totalSegundos[5];
	
	puts ( "Digite a quantidade de horas, minutos e segundos: " );
	for ( i = 0; i < 5; i++ ) {
		printf ( "%dº: ", i + 1 );
		scanf  ( "%d%d%d", &h[i].hora, &h[i].minuto, &h[i].segundo );
		
		totalSegundos[i] = ( h[i].hora * 60 * 60 ) + ( h[i].minuto * 60 ) + h[i].segundo;
		
		puts ( "" );
	}
	
	int maiorHora = 0;
	for ( i = 1; i < 5; i++ )
		maiorHora = ( totalSegundos[maiorHora] < totalSegundos[i] ) ?
					i : maiorHora;
	
	printf ( "Maior hora: %02d:%02d:%02d\n", h[maiorHora].hora, h[maiorHora].minuto, h[maiorHora].segundo );
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int x, y, z;
	short int escolha;
	float media;
	
	printf ( "Digite três números inteiros: " );
	scanf  ( "%d%d%d", &x, &y, &z );
	
	printf ( "\n%s%15s\n", "Cód.", "Média" );
	printf ( "%4s%15s\n", "1", "Geometrica" );
	printf ( "%4s%15s\n", "2", "Ponderada" );
	printf ( "%4s%15s\n", "3", "Harmonica" );
	printf ( "%4s%15s\n", "4", "Aritmetica" );
	printf ( "Digite o código: " );
	scanf  ( "%hd", &escolha );
	
	puts ("");
	switch ( escolha ) {
		case 1: 
			media = x * y * z;
			printf ( "Média geométrica: %f\n", media );
			break;
		
		case 2:
			media = (float) (x + 2 * y + 3 * z ) / 6.0;
			printf ( "Média ponderada: %f\n", media );
			break;
			
		case 3:
			media = 1.0 / ( 1.0 / x + 1.0 / y + 1.0 / z );
			printf ( "Média harmônica: %f\n", media );
			break;
			
		case 4:
			media = ( x + y + z ) / 3;
			printf ( "Média aritmética: %f\n", media );
			break;
			
		default: printf ( "Erro: Escolha incorreta!\n" );
	}
	
	return 0;
}
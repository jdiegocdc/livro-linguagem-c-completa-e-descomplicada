#include <stdio.h>
#include <stdlib.h>
#define N 2
#define TRUE 1
#define FALSE 0

/* estrutura representando uma data */
typedef struct _dataValida {
	int dia;
	int mes;
	int ano;
} data;

/* constantes representando meses ano */
enum meses {  
	Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez
};

int main () {	
	data d[N], temp;
	int i;
	
	/* lê, valida e armazena 2 estruturas do tipo data */
	for ( i = 0; i < N; i++ ) {	
		int dataValida;	
		do {
			printf ( "Digite a %dº data válida: ", i + 1 );
			scanf  ( "%d/%d/%d", &d[i].dia, &d[i].mes, &d[i].ano );	
			
			dataValida = TRUE; /* assumo que inicialmente a data é válida */
			
			if ( d[i].ano < 1 )
				dataValida = FALSE;
			else
				if ( d[i].mes < 1 || d[i].mes > 12 )
					dataValida = FALSE;
				else
					if ( d[i].dia < 1 || d[i].dia > 31 )
						dataValida = FALSE;
					else
						if ( d[i].mes == Fev ) {
							if ( ( d[i].ano % 400 == 0 || d[i].ano % 4 == 0  ) && !( d[i].ano % 100 == 0 ) ) {
								if ( d[i].dia < 29 )
									dataValida = FALSE;
							} else
								if ( d[i].dia > 28 )
									dataValida = FALSE;						
						} else
							switch ( d[i].mes ) {
								case Abr:
								case Jun:
								case Set:
								case Nov:
									if ( d[i].dia > 30 )
										dataValida = FALSE;
							} /* fim switch	*/					
		} while ( !dataValida );
	} /*  fim do for */
	
	/* ordena o array de estruturas da menor para a maior data */
	if ( d[0].ano > d[1].ano ) {
		temp = d[0];
		d[0] = d[1];
		d[1] = temp;
	}
	
	int qtdDias = 0;
	/* quantidade de dias entre os anos */
	for ( i = d[0].ano + 1; i < d[1].ano; i++ ) {
		if ( ( i % 400 == 0 || i % 4 == 0 ) && !( i % 100 == 0 ) )
			qtdDias = qtdDias + 366;
		else
			qtdDias = qtdDias + 365;
	} /* fim do for */

	/* quantidade de dias nos entre os meses do primeiro ano */
	for ( i = d[0].mes + 1; i <= 12; i++ ) {
		if ( i == Fev ) {
			if ( ( i % 400 == 0 || i % 4 == 0  ) && !( i % 100 == 0 ) ) {
				qtdDias = qtdDias + 29;
			} else
				qtdDias = qtdDias + 28;					
		} else
			switch ( i ) {
				case Abr:
				case Jun:
				case Set:
				case Nov:
					qtdDias = qtdDias + 30; 
					break;
				default: qtdDias = qtdDias + 31;
			} /* fim switch	*/
	} /* fim dor for */
	
	/* quantidade de dias entre os meses do último ano */
	for ( i = 1; i < d[1].mes; i++ ) {
		if ( i == Fev ) {
			if ( ( i % 400 == 0 || i % 4 == 0  ) && !( i % 100 == 0 ) ) {
				qtdDias = qtdDias + 29;
			} else
				qtdDias = qtdDias + 28;	
		} else
			switch ( i ) {
				case Abr:
				case Jun:
				case Set:
				case Nov:
					qtdDias = qtdDias + 30;
					break;
				default: qtdDias = qtdDias + 31;
			} /* fim do switch */
	} /* fim do for */
	
	/* quantidade de dias do primeiro mês do primeiro ano */
	if ( d[0].mes == Fev ) {
		if ( ( i % 400 == 0 || i % 4 == 0  ) && !( i % 100 == 0 ) ) {
			qtdDias = qtdDias + ( 29 - d[0].dia );
		} else
			qtdDias = qtdDias + ( 28 - d[0].dia );	
	} else {
		switch ( d[0].mes ) {
			case Abr:
			case Jun:
			case Set:
			case Nov:
				qtdDias = qtdDias + ( 30 - d[0].dia );
				break;
			default:
				qtdDias = qtdDias + ( 31 - d[0].dia );
		} /* fim do switch */
	} /* fim do if-else */
	
	/* soma os dias do último mês do último ano */
	qtdDias = qtdDias + d[1].dia;
		
	printf ( "\nDe %d/%d/%d à %d/%d/%d: %d dias\n", d[0].dia, d[0].mes, d[0].ano, 
												    d[1].dia, d[1].mes, d[1].ano,
												    qtdDias );	
	
	return 0;
}
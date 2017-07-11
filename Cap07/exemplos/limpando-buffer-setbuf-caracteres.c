#include <stdio_ext.h>
#include <stdlib.h>

int main () {
	
	char ch[10];
	int i;
	
	for ( i = 0; i < 10 - 1; i++ ) {
		printf ( "\nDigite o %dº caractere: ", i + 1 );
		ch[i] = getchar();
		__fpurge(stdin);
	}
	ch[i] = '\0';
	printf ( "\n%s\n", ch );
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main () {
	
	char str1[20] = "Hello World";
	char str2[20];
	
	str1 = str2; // ERRADO
	
	return 0;
}
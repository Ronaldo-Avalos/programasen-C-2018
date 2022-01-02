#include <stdio.h>
#include <string.h>

int main(){
	
	
	char palabra[100];
	int n;
	
	
	printf("Teclea una palabra:");
	gets(palabra);
	
	n=strlen(palabra);
	
	printf("El numero de caracteres es: %i",n);
	
}

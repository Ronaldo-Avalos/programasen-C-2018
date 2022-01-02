#include <stdio.h>
//Objetivo: Ver si un número es divisible con el segundo
//Autor:Ronaldo Avalos
//Fecha: 9-02-2017
int main(){
	
	int A,B;
	
	printf("Dame un numero:");
	scanf("%d",&A);
	printf("Dame otro numero:");
	scanf("%d",&B);
	
	if(A/B==2)
	{
		printf("El %d es divisible con %d",A,B);

	}
	else
	{
		printf("El %d no es divisible con %d",A,B);
	}
}

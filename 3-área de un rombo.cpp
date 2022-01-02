#include <stdio.h>
//Objetivo:Sacar el área de un rombo 
//Autor:Ronaldo Avalos
//Fecha: 9-02-2017

int main(){
	
	float D,d,A;
	
	printf("Calcula el area de un rombo\n");
	printf("Dame el valor de la Diagonal mayor:");
	scanf("%f",&D);
	printf("Dame el valor de la Diagonal menor:");
	scanf("%f",&d);
	
	A=(D*d)/2;
	printf("El área de tu rombo es de %f",A);
}

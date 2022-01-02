#include <stdio.h>
//Objetivo:Sacar el volumen de un cilindro 
//Autor:Ronaldo Avalos
//Fecha: 9-02-2017

int main(){
	
	float r,h,v;
	printf(" Volumen de un cilindro\n");
	printf("Dame el radio de la base:");
	scanf("%f",&r);
	printf("Dame la altura del cilindro:");
	scanf("%f",&h);
	
	v=3.14*r*r*h;
	
	printf("El volume de tu cilindro es de %f",v);
	
	
	}

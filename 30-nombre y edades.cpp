#include <stdio.h>



int main(){
	char name[10][100];
	int  edad[10];
	int i;
	

	printf("Ingresa el nombre sin apellidos de 10 estudiantes y su edad\n\n");
	
	//pedir nombres y edad
	for(i=0;i<10;i++)
	{
		printf("Nombre:");
		scanf("%s",&name[i]);
		
		printf("Edad:");
		scanf("%d",&edad[i]);

	}	
	
	//condicinar e inprimir
	
	printf("\n\nLos mayores de edad son:");
	
    for(i=0;i<10;i++)
	{
		if(edad[i]>=18)
		
		printf("\n%s",name[i]);
				
	}	

}

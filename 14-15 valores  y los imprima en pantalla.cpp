//hpc lea un vector de  15 valores  y los imprima en pantalla
//Autor:Ronaldo Avalos
//Fecha:13-abril-2018

#include <stdio.h>

int main()
{
	
	        int V[15],c;
	        
          //optener valores
          
	        for(c=0;c<15;c++)
			{
	        	printf("%d-Teclea un valor:",c+1);
	        	scanf("%d",&V[c]);
	        }
			
			//imprimir vector
			
			for(c=0;c<15;c++)
			{
	        	printf("\nEl valor %d del vector ingresado es: %d",c+1,V[c]);
	        	
	        }   
	
}

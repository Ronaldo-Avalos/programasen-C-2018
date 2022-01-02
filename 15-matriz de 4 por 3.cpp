//hpc que optenga  una matriz de 4*3 elementos y los imprima en pantalla
//Autor:Ronaldo Avalos
//Fecha:13-abril-2018

#include <stdio.h>

int main()
{
	
	        int M[4][3],f,c;
	        
           //optener valores
	        for(f=0;f<4;f++)
			{ 
	            for(c=0;c<3;c++)
				{
	            	int A=A+1;
	            	
			    	printf("%d-Teclea un valor:",A);
	        	    scanf("%d",&M[f][c]);
				}
		    }	
				
			//imprimir matriz
	        	
	        for(f=0;f<4;f++)
			{ 
	             for(c=0;c<3;c++)
				{
			     printf("\nValor de la casilla (%d - %d)--> %d",f+1,c+1,M[f][c]);
			     
				}
	        }
	


}

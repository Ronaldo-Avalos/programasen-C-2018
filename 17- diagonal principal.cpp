//hpc lea una matriz de 4*4 y muestre la sumatoria de su diagonal principal
//Autor:Ronaldo Avalos
//Fecha:13-abril-2018

#include <stdio.h>

int main()
{	

	int M[4][4],f,c;

        //optener valores
      
	    int A=0;
        for(f=0;f<4;f++)
		{
            for(c=0;c<4;c++)
			{
	           A=A+1;
	            
		      printf("%d-teclea un valor:",A);
		      scanf("%d",&M[f][c]);
            } 
	    }

        //sumatoria de la diagonal principal 
         
        int s=0; 
        
        for(int a=0;a<4;a++)
		{
        
            s=s+ M[a][a];
        }
            
			printf("La sumatoria de la diagonal principal es : %d",s);
       
	   
	}
            	



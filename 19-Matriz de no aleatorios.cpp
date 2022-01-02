//hpc que llene una matriz 3*8  con numeros aleatorios y mostrar cuantos elementos fueron pares y cuales no
//Autor:Ronaldo Avalos
//Fecha:13-abril-2018

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	
	        int M[3][8],f,c;
	        
           //optener valores
	        
	        
	        srand(time(NULL));
	         for(f=0;f<3;f++)
		   {
				for(c=0;c<8;c++)
				{
					M[f][c]=rand()%100;
			    }
			}
			
			    //imprimir matriz
				
				
				  for(f=0;f<3;f++)
			{ 
	             for(c=0;c<8;c++)
				{
			     printf("\ncasilla-(%d - %d)--> %d",f+1,c+1,M[f][c]);
			     
				}
	        }

              //elementos pares e impares
              
                 int A=0,B=0;
                 
               for(f=0;f<3;f++)
			{ 
	             for(c=0;c<8;c++)
	             {
	             	if(M[f][c]%2==0)
	             	{
	             		A++;
	             		
					}
					else 
					{
						B++;
					}
				 }
            }
		
        	printf("\n\n%d Numeros pares",A);
        	printf("\n%d Numeros impares",B);

}

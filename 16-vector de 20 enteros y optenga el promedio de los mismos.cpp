//hpc lea un vector de 20 enteros y optenga el promedio de los mismos
//Autor:Ronaldo Avalos
//Fecha:13-abril-2018

#include <stdio.h>

int main(){
	
	        int V[20];
	        
            //optener valores
         
		     int c,s=0;
          
	        for(c=0;c<20;c++)
			{
	        	printf("%d-Teclea un valor:",c+1);
	        	scanf("%d",&V[c]);
	        	
	        //optener el promedio
	        	s=s+V[c];
	        }
	        
				 printf("El promedio de los valores es: %d",s/20); 
			
}

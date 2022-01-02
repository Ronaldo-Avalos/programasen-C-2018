//hpc lea un vector de 18 enteros y optenga cual no. es mayor y cual menor
//Autor:Ronaldo Avalos
//Fecha:13-abril-2018
#include <stdio.h>

int main(){
	
	        int V[18];
	        
            //optener valores
          int c;
          
	        for(c=0;c<18;c++)
			{
	        	printf("%d-Teclea un valor:",c+1);
	        	scanf("%d",&V[c]);
	        }
			
			//optener cual es mayor
			
			int a,m=0;
			for(a=0;a<18;a++)
			{
			
				if(V[a]>m)
				 m=V[a];
						
			}
				printf("El numero mayor es: %d",m);
			
			//optener cual es menor
			m=0;
			for(a=0;a<18;a++)
			{
			
				if(V[a]<m)
				 m=V[a];
						
			}
				printf("\nEl numero menor es: %d",m);
			
			
}

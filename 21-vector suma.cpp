//hpc lea un vector de n enteros y optenga vector suma
//Autor:Ronaldo Avalos
//Fecha:13-abril-2018
#include <stdio.h>

int main()
{
	
	        
	         int a,c;
	        
			//pedir dimenciones
	        
	        printf("De que dimenciones quires que sean los vectores?:");
	        scanf("%d",&a);
	        
	        //declarar vectores
	        
	        int V1[a], V2[a],V3[a];
	        
	        //pedir valores
	        
	        printf("\nVector1\n");
	        
	        for(c=0;c<a;c++)
	        {
	        	printf("%d-ingresa valor:",c+1);
	            scanf("%d",&V1[c]);

			}
			printf("\nVector2\n");
			
	        for(c=0;c<a;c++)
	        {
	        	printf("%d-ingresa valor",c+1);
	            scanf("%d",&V2[c]);

			}
			
			//suma de  valores
			
			printf("\nSumatoria\n");
			
			for(c=0;c<a;c++)
			{
				V3[c]=V1[c]+V2[c];
			    printf("V1[%d]+V2[%d]-->V3[%d]\n",V1[c],V2[c],V3[c]);	
			}

		}

//hpc lea una matriz de n enteros y optenga matriz multiplicacion
//Autor:Ronaldo Avalos
//Fecha:13-abril-2018

#include <stdio.h>

int main()
{

        
        
    int M1[3][4],M2[4][2],M3[3][2];

    int f,c,k;

      //INGRESE LAS MATRICES
    
   printf("Primera matriz 3*4\n\n");

    for (f=0;f<3;f++)
	{
	   for (c=0;c<4;c++)
       {
         printf("M1(%d,%d)= ",f+1,c+1);
          scanf ("%d",&M1[f][c]);

        }
    }    
         printf("\n");
        printf("\nSegunda matriz 4*2\n\n");

             for (f=0;f<4;f++)
			 {
                for (c=0;c<2;c++)
                 
                  { 
				  printf("M2(%d,%d)= ",f+1,c+1);
                    scanf ("%d",&M2[f][c]);
                  }
			  
			  }
    
     //OPERACION DE MULTIPLICACION

       for (f=0;f<3;f++)
    {
         	for (c=0;c<2;c++)
        {
	   
	        M3[f][c]=0;
       
              for (k=0;k<4;k++) 
             {
		        M3[f][c]=M3[f][c]+M1[f][k]*M2[k][c];
             }
             
        }
    }

 printf("\nLA MULTIPLICACION DE LAS MATRICES ES:\n\n");
 
        //IMPRESION  

     for (f=0;f<3;f++)
   {
        for (c=0;c<2;c++)
	     { 
	      printf("M3(%d,%d)= %d\n",f+1,c+1,M3[f][c]);
         }
    }
}


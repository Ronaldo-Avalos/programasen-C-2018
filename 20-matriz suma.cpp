//hpc lea una matriz de n enteros y optenga matriz suma
//Autor:Ronaldo Avalos
//Fecha:13-abril-2018
#include <stdio.h>

int main()
{

    
      int M1[4][3],M2[4][3],M3[4][3];
      
      
      //pedir valores
      
      printf("Matriz 1\n");
      
      int f,c,i=0;
      
      for(f=0;f<4;f++)
      {
      	for(c=0;c<3;c++)
		  {
		    i=i+1;
		  	printf("%d-ingresa un valor:",i);
      	    scanf("%d",&M1[f][c]);
		  }
      	
	  }
	  
	  printf("\nMatiz 2\n");
	  
	  i=0;
	  for(f=0;f<4;f++)
      {
      	for(c=0;c<3;c++)
		  {
		    i=i+1;
		  	printf("%d-ingresa un valor:",i);
      	    scanf("%d",&M2[f][c]);
		  }
      	
	  }
	  //suma de matrizes
	  printf("\nSumatoria\n\n");
	  for(f=0;f<4;f++)
      {
      	for(c=0;c<3;c++)
		  {
		 M3[f][c]=M1[f][c]+M2[f][c];
		 
		 printf("M1[%d][%d]+M2[%d][%d]-->M3{%d}\n",f+1,c+1,f+1,c+1,M3[f][c]);
		  }
      	
	  }

}


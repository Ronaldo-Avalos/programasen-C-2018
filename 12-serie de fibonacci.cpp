#include <stdio.h>

int main()
{
	
  int X,Y,Z,S,N;

  X=0;
  Y=1;

  printf("cuantas lineas de codigo deseas?");
  scanf("%d",&N);
  
   printf("0\n1\n");
   
  for (S=1; S<=N; S++)
  {  
 
      Z=X+Y;
      printf("%d\n",Z);
      X=Y;
      Y=Z;
  }
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


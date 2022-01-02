#include <stdio.h>

int main(){
	
	float a,b,c,r;
	
	printf("Dame la calificacion de tu primera parcial:\n");
	scanf("%f",&a);
	printf("Dame la calificacion de tu segunda parcial:\n");
	scanf("%f",&b);
	printf("Dame la calificacion de tu tercera parcial:\n");
	scanf("%f",&c);
	
	              if (a+b+c>=24){
	              	printf("No te fuiste a ordinario :)\n");
	              	r=(a+b+c)/3;
	              	printf("tu promedio es de %f",r);
				  }
	                  else {
	                  		printf("Te fuiste a ordinario :(\n");
	              	r=(a+b+c)/3;
	              	printf("tu promedio es de %f",r);
					  }
	
	
	
	
}


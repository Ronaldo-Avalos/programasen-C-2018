#include <stdio.h>
#include <math.h>

int main (){
	
	int a,b,c;
	float x1,x2,xr,xi;
	
	printf("teclea el valor de a: ");
	scanf ("%d",&a);
	printf("teclea el valor de b: ");
	scanf ("%d",&b);
	printf("teclea el valor de c: ");
	scanf ("%d",&c);
	
	x1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
	x2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
	
	printf("la raiz es x1=%f y x2=%f \n\n",x1,x2);
	
	if ((x1>=0.0) && (x2>=0.0)){
		printf("la raiz es real x1=%f y x2=%f",x1,x2);
	}
	else {
		printf("la raiz es imaginaria x1=%f y x2=%f ",x1,x2);
	}
}

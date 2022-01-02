//convertir unidades de longitud 
#include <stdio.h>
#include <conio.h>
int main (){
	
	float A,B;
	
	printf("CM-->MM\n\n");
	printf("teclea los cm que se convertiran en mm: ");
	scanf ("%f",&A);
	B=A*10/1;
	printf("%f mm\n\n",B);
	
	printf("teclea enter para continuar...\n\n");
	getch();
	
	printf("DM-->CM\n\n");
	printf("teclea los dm que se convertiran en cm: ");
	scanf ("%f",&A);
	B=A*10/1;
	printf("%f cm\n\n",B);
	
	printf("teclea enter para continuar...\n\n");
	getch();
	
	printf("MTS-->DM\n\n");
	printf("teclea los mts que se convertiran en dm: ");
	scanf ("%f",&A);
	B=A*10/1;
	printf("%f dm\n\n",B);
	
	printf("teclea enter para continuar...\n\n");
	getch();
	
	printf("KM-->MTS\n\n");
	printf("teclea los km que se convertiran en mts: ");
	scanf ("%f",&A);
	B=A*1000/1;
	printf("%f mts\n\n",B);
}

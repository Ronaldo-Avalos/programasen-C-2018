#include <stdio.h>
int main(){
	
	
	int A,B;
	
	
	printf("Dame el año y te dire si es bisiesto o no:");
	scanf("%d",&A);
	
	

	
    if ( A%4==0 && A%100 !=0 || A% 400==0 ){
	
        printf( "\nEs bisiesto" );}
    else {
	
        printf( "\nNo es bisiesto" );
		}
		
		
}
	
	
	
	
	
	


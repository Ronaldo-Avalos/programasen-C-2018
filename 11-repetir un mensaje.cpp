#include <stdio.h>
int main(){
	int b,c=1;

	char a[100];
	printf ("escriba un mensaje:");
 gets(a);
 
 
 

    printf("Teclea el numero de veces que desees que se repita:");
    scanf("%d",&b);
    
    
    
    do{
    	printf("%d- %s \n",c,a);
    	c=c+1;
    	
    }while(c<=b);
	
}

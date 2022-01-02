#include <stdio.h>
#include <string.h>
int main(){
	int i,j,vec[15],t;
	char nombre[15][300],nt[15][300];
	for(i=0;i<15;i++){
		printf("%d. Ingrese el nombre de la persona: ",i+1);
		gets(nombre[i]);
	}
		for(i=0;i<15;i++){
		printf("%d. Ingresa la edad de %s: ",i+1,nombre[i]);
		scanf("%d",&vec[i]);
	}
	for(i=0;i<15;i++){
		for(j=0;j<14;j++){
			if(vec[j]>vec[j+1]){
				t=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=t;
				strcpy(nt[1],nombre[j]); 
				strcpy(nombre[j],nombre[j+1]);
				strcpy(nombre[j+1],nt[1]);
			}
		}
	}
	printf("La persona mas vieja es %s con %d anos",nombre[14],vec[14]);
}

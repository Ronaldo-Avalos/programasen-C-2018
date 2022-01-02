#include <stdio.h>
int main(){
	
	
	int v[20];
	int i,c,aux;
	
	//pedir valores
	printf("Ingresa valores\n");
	for(i=0;i<20;i++)
	{
		printf("-");
		scanf("%d",&v[i]);
	}
	
	//ordenamiento 1
	
	
	for(i=0;i<20;i++)
	{
		for(c=0;c<19;c++)
		{
			if(v[c]>v[c+1])
			{
				aux=v[c];
				v[c]=v[c+1];
				v[c+1]=aux;
			}
		}
	}
	
	//imprecion
           
    printf("Numero menor es: %d\n",v[0]);
    printf("Numero meyor es: %d",v[19]);
	

	
}

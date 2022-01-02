#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <string.h>


 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
int main(){
	
	char P[100];
	int i,n;
	int x=0; 
	int y=0;
	
	      
           printf("Teclea una palabra:");
           
           gets(P);
           
           n=strlen(P);
		   
		   srand(time(NULL));
		   
           //imprecion aleatoria
        for(i=0;i<n;i++)
        {
        	
            gotoxy(x=rand()%30,y=rand()%30);    	
           	printf("%c",P[i]);
		}
			
		getch();
}

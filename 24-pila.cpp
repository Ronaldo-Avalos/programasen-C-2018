#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>


 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
     int main ()
{
	 	
    //variables
    int cima=0;
	int pila[8];
	int salir=0;
	int y=4;
	int i,c;
	char z;

do  {
        
        system("cls");
        	
       
         //imprimir pila
           gotoxy(39,4);
         printf("PILA");
        for(i=0;i<cima;i++)
		{
        	gotoxy(40,20-(i*2));
        	printf("%d",pila[i]);		
        }
    
    
    
        //imprimir menu
   	
        gotoxy(5,4);
        printf("Insertar numero");
        gotoxy(5,6);
        printf("Remover numero");
        gotoxy(5,8);
        printf("Salir");
        gotoxy(2,y);
        printf("-->");

        	
        //leer teclas
        	
        z=getch();
        if(z==-32)
        z=getch();
    
        	
        //condicionar teclas
        	
      switch(z) {
        		
        		    case 72:
        			        if(y==4)  
							y=8;
        			        else 
							y=y-2;
        	 	    break;
        	 	
        	 	    case 80:
        	 		      	if(y==8) 
							y=4;
        	 		 	    else  
							y=y+2;
        	 	    break;
        	 	
        	 	    //enter
        	 	    case 13:
        	 		        switch(y)
							{
							            
									case 4:
        	 				               if(cima==8)
											{
        	 					                gotoxy(5,10);
											    printf("PILA LLENA");
											    getch();
											}
        	 				                else
											{
        	 					                gotoxy(5,10);
												printf("Teclea un elemento: ");
												scanf("%d",&pila[cima]); 
												cima++;
        	 			                   	}
        	 				        break;
        	 				        
        	 			            case 6:
        	 				                if(cima==0)
											{
											 	gotoxy(5,10);
												printf("PILA VACIA");
												getch();
        	 				                }
        	 				                
        	 				                else 
											{ 
											    gotoxy(5,10);
												printf("Elemento a remover: %d",pila[cima-1]); 
												getch(); 
												cima--;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
        	 			                 	}
        	 				        break;
        	 				        
        	 			            case 8:
        	 				                salir=1;
        	 				        break;
        	 		        }
        	 	}
    }while(salir==0);
      	
}

#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

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
    int apuntador=0;
	int cola[8];
	int salir=0;
	int y=4;
	int i,c;
	char z;

do  {
        system("cls");
        	
       
         //imprimir pila
         gotoxy(34,19);
         printf("COLA");
        for(i=0;i<apuntador;i++)
		{
        	gotoxy(40-(i*2),20);
        	printf("%d",cola[i]);		
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
        	 				               if(apuntador==8)
											{
        	 					                gotoxy(5,10);
											    printf("COLA LLENA");
											    getch();
											}
        	 				                else
											{
        	 					                gotoxy(5,10);
												printf("Teclea un elemento a ingresar: ");
												scanf("%d",&cola[apuntador]); 
												apuntador++;
        	 			                   	}
        	 				        break;
        	 				        
        	 			            case 6:
        	 				                if(apuntador==0)
											{
											 	gotoxy(5,10);
												printf("COLA VACIA");
												getch();
        	 				                }
        	 				                
        	 				                else 
											{ 
										         	for(c=0;c<=apuntador;c++)
											        {
														cola[c]=cola[c+1];
														
        	 			                            }
        	 			                          apuntador--;  
        	 			                            
        	 			                    }
        	 				        break;
        	 				        
        	 			            case 8:
        	 				                salir=1;
        	 				        break;
        	 		        }
        	 	}
    }while(salir==0);
 

}

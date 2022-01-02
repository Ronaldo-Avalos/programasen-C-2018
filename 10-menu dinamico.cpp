 #include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x,int y){

	HANDLE a;
	a=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD k;
	k.X=x;
    k.Y=y;
	SetConsoleCursorPosition(a,k);
}
int main(){
      //variables
	int y,s=0;
	float a,b,r;
	char f;
	//dar valores
	y=5;
	
	do{
		//limpiador de pantalla
		system("cls");
		//menu 
		
	    gotoxy(10,5);
		   printf("1- SUMA");
		gotoxy(10,7);
		   printf("2- Resta");
		gotoxy(10,9);	
		   printf("3- Multiplicacion");
		gotoxy(10,11);
		   printf("4- Division");
	  	gotoxy(10,13);
		   printf("5- Salir");
		   //cursor
		   gotoxy(6,y);
		   printf("-->");
		   //declaro que getch se le asigne a f
	    f=getch();
                                                                                                                                                                                                                       
		//condicionar teclas
		switch(f){
			 
				             //flecha arriba
		                    case 72:
			                          if(y==5){
				                   		y=13;
				                  	}
				                		else{
					                	y=y-2;
				                	}
		                           	break;
			
			
		                        	//flecha abajo
			                case 80:
		                              if(y==13){
					                	y=5;
				                   	}
					                	else{
					                   	y=y+2;
				                 	}
		                        	break;
		      	
			
			
		                               //enter
		                	case 13:
			          switch(y){
			          	case 5:
						  //suma
			          	            gotoxy(12,15);
			          	            printf("TU SELECCION FUE SUMA\n");
			          	            gotoxy(12,16);
			          	            printf("Dame un numero:");
			          	            scanf("%f",&a);
			          	             gotoxy(12,17);
			          	            printf("Dame el numero que se le sumaraa %f:",a);
			          	            scanf("%f",&b);
			          	            r=a+b;
			          	             gotoxy(12,18);
			          	            printf("El resultado de la suma es: %f",r);
			          	            getch();
			          	break;
			          	case 7:
						  //resta
			          				gotoxy(12,15);
			          	            printf("TU SELECCION FUE RESTA\n");
			          	            gotoxy(12,16);
			          	            printf("Dame un numero:");
			          	            scanf("%f",&a);
			          	            gotoxy(12,17);
			          	            printf("Dame el numero que se le restara al anterior numero:",a);
			          	            scanf("%f",&b);
			          	            r=a-b;
			          	            gotoxy(12,18);
			          	            printf("El resultado de la resta es: %f",r);
			          	            getch();
			          	break;
			          	case 9:
						  //multiplicacion
			          				gotoxy(12,15);
			          	            printf("TU SELECCION FUE MULTIPLICACION\n");
			          	            gotoxy(12,16);
			          	            printf("Dame un numero:");
			          	            scanf("%f",&a);
			          	            gotoxy(12,17);
			          	            printf("Dame el numero que multiplara al anterior numero:",a);
			          	            scanf("%f",&b);
			          	            r=a*b;
			          	            gotoxy(12,18);
			          	            printf("El resultado la multiplicacion es: %f",r);
			          	            getch();
			          	break;
			          	case 11:
						  //divicion 
			          				gotoxy(12,15);
			          	            printf("TU SELECCION FUE DIVISION\n");
			          	            gotoxy(12,16);
			          	            printf("Dame un numero:");
			          	            scanf("%f",&a);
			          	            gotoxy(12,17);
			          	            printf("Dame el numero que dividira al anterior numero::",a);
			          	            scanf("%f",&b);
			          	            r=a/b;
			          	            gotoxy(12,18);
			          	            printf("El resultado de la division es: %f",r);
			          	            getch();
			          	break;
			          	case 13:
						  //salir
			          	s=5;
			          	break;
					  }

		break;
		} 
	}while(s==0);


}

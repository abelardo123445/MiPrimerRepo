/*
Código hecho por: 
Emmanuel Bermont Salazar
Marco Antonio Moreno Sanchez 
 Miguel Armando Ramos Cauich

*/


#include <ctype.h>   // toupper
#include <time.h>
#include <stdio.h>   // printf, scanf
#include <stdlib.h>  // rand
#include <unistd.h>  // getpid

// Cosas que puedes modificar c:
#define COLUMNAS 9
#define FILAS 9
#define CASILLA_OCULTA ' '
#define MINA 'X'
#define CANTIDAD_MINAS 10  // Si colocas mÃ¡s minas que la cantidad de espacios disponibles (COLUMNAS * FILAS), fallarÃ¡

// Cosas que no tendrÃ­as que modificar a menos que quieras adaptarlo a tus ideas :v
void generarMinas(char minas[FILAS][COLUMNAS])
{
    int x = 0, y = 0; 
    {
    for (int i = 0; i < CANTIDAD_MINAS; i++)
    {
        if(1==1)
        {
                    x = (rand() % (FILAS - 1));
        y = (rand() % (COLUMNAS - 1));   
        minas[x][y] = MINA; 
        }
        else 
        {
        break; 
        }
        }

}
}



void imprimirTablero(char tablero[FILAS][COLUMNAS])
{
    char marcadorF = 'A';
    int marcadorC = 0;
        //imprimir tablero
    printf("  ");
    for (int i = 0; i<COLUMNAS;i++)
    {
         printf(" %i ", marcadorC);
         marcadorC++;
    }
    printf("\n");
    for (int i = 0; i<FILAS;i++)
    {
        printf("%c ", marcadorF);
        for (int j = 0; j<COLUMNAS; j++)
        {
            printf("[%c]",tablero[i][j]);
        }        
         printf("\n");
         marcadorF++;
    }   
}
void inicializarTablero(char tablero[FILAS][COLUMNAS])
{
    for (int i = 0; i<FILAS;i++)
    {
        for (int j = 0; j<COLUMNAS; j++)
        {
           tablero[i][j] = CASILLA_OCULTA;
        }
    }   
}



int main()
{
    srand(time(NULL));              // Inicializa los nÃºmeros aleatorios para que siempre varÃ­e el orden de las minas

    char tablero[FILAS][COLUMNAS];
    char tableroMO[FILAS][COLUMNAS];

    inicializarTablero(tablero);     // Inicializar tablero con espacios
    inicializarTablero(tableroMO);   
    generarMinas(tablero);           // AquÃ­ se generan aleatoriamente las minas
    int columnasN, columnasNaux;
    char filasL;
    int filasN, filasNaux;
    int vivo=0;
    int ganar=0;
    int contminas=0;
    int descubrir=0;
    
    imprimirTablero(tablero);

       // Esta FunciÃ³n imprime el tablero, solo le pasas el arreglo que quieras imprimir de tamaÃ±o FILAS, COLUMNAS
   
    while(1)
    {
        imprimirTablero(tableroMO);
        //texto de inicio 
        printf("Ingrese las coordenadas que desea escoger, empezando con las filas de la A-I, y las columnas con numeros del 1-8 (Ejemplo: A2)\n");
        scanf("%c",&filasL);
        scanf("%d",&columnasN);
        if(filasL=='A'){
            filasN=0;
        }else if(filasL=='B'){
            filasN=1;
        }else if(filasL=='C'){
            filasN=2;
        }else if(filasL=='D'){
            filasN=3;
        }else if(filasL=='E'){
            filasN=4;
        }else if(filasL=='F'){
            filasN=5;
        }else if(filasL=='G'){
            filasN=6;
        }else if(filasL=='H'){
            filasN=7;
        }else if(filasL=='I'){
            filasN=8;
        }
        printf("\n");
        if(tablero[filasN][columnasN]=='X'){
        	for (int i = 0; i<FILAS;i++)
        	{
        		for (int j = 0; j<COLUMNAS; j++)
        		{
           			if(tablero[i][j]=='X'){
            			tableroMO[i][j] = tablero[i][j];
            		}
        		}
       		}   
        	imprimirTablero(tableroMO);
        	//Mensaje al perder 
        	printf("Perdiste\n");
        	break;
        }
        
        
        
        
        if(tablero[filasN][columnasN]!='X'){
            if(filasN==0 && columnasN==0){
            
            if(tablero[filasN+1][columnasN]=='X'){
                vivo++;
            }
            
            if(tablero[filasN][columnasN+1]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN+1]=='X'){
                vivo++;
            }
            }else if(filasN==FILAS-1 && columnasN==0){
            if(tablero[filasN-1][columnasN]=='X'){
                vivo++;
            }
            
            if(tablero[filasN-1][columnasN+1]=='X'){
                vivo++;
            }
            if(tablero[filasN][columnasN+1]=='X'){
                vivo++;
            }
            
            }else if(filasN==0 && columnasN==COLUMNAS-1){
            
            if(tablero[filasN][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN-1]=='X'){
                vivo++;
            }
            
            if(tablero[filasN+1][columnasN]=='X'){
                vivo++;
            }
            
            }else if(filasN==FILAS-1 && columnasN==COLUMNAS-1){
                if(tablero[filasN-1][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN-1][columnasN]=='X'){
                vivo++;
            }
            
            }else if(filasN==0){
                
            if(tablero[filasN][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN-1]=='X'){
                vivo++;
            }
            
            if(tablero[filasN+1][columnasN]=='X'){
                vivo++;
            }
            
            if(tablero[filasN][columnasN+1]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN+1]=='X'){
                vivo++;
            }
            }else if(filasN==FILAS-1){
                if(tablero[filasN-1][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN-1][columnasN]=='X'){
                vivo++;
            }
            if(tablero[filasN-1][columnasN+1]=='X'){
                vivo++;
            }
            if(tablero[filasN][columnasN+1]=='X'){
                vivo++;
            }
            }else if(columnasN==0){
                
            if(tablero[filasN-1][columnasN]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN]=='X'){
                vivo++;
            }
            if(tablero[filasN-1][columnasN+1]=='X'){
                vivo++;
            }
            if(tablero[filasN][columnasN+1]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN+1]=='X'){
                vivo++;
            }
            }else if(columnasN==COLUMNAS-1){
                if(tablero[filasN-1][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN-1][columnasN]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN]=='X'){
                vivo++;
            }
            }else{
                if(tablero[filasN-1][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN-1]=='X'){
                vivo++;
            }
            if(tablero[filasN-1][columnasN]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN]=='X'){
                vivo++;
            }
            if(tablero[filasN-1][columnasN+1]=='X'){
                vivo++;
            }
            if(tablero[filasN][columnasN+1]=='X'){
                vivo++;
            }
            if(tablero[filasN+1][columnasN+1]=='X'){
                vivo++;
            }
            
            }
            
            if(vivo==0){
                tableroMO[filasN][columnasN]='0';
            }else if(vivo==1){
                tableroMO[filasN][columnasN]='1';
            }else if(vivo==2){
                tableroMO[filasN][columnasN]='2';
            }else if(vivo==3){
                tableroMO[filasN][columnasN]='3';
            }else if(vivo==4){
                tableroMO[filasN][columnasN]='4';
            }else if(vivo==5){
                tableroMO[filasN][columnasN]='5';
            }else if(vivo==6){
                tableroMO[filasN][columnasN]='6';
            }else if(vivo==7){
                tableroMO[filasN][columnasN]='7';
            }else if(vivo==8){
                tableroMO[filasN][columnasN]='8';
            }
            vivo=0;
            for (int i = 0; i<FILAS;i++)
            {
            for (int j = 0; j<COLUMNAS; j++)
            {
              if(tablero[i][j]=='X'){
              contminas++;
            }
            }
            }
            for (int i = 0; i<FILAS;i++)
            {
            for (int j = 0; j<COLUMNAS; j++)
            {
              if(tableroMO[i][j]==' '){
              ganar++;
            }
            }
            }
            
            if(contminas==ganar){
                //Mensaje al ganar 
                printf("Solo quedan minas en el tablero, Ganaste");
            }
            contminas=0;
            ganar=0;
         	tablero[filasN][columnasN]='O';
        }

        if(tableroMO[filasN][columnasN]=='0'&&descubrir==0){
        	filasNaux = filasN;
        	columnasNaux= columnasN;
        	for (int i = 0; i<FILAS;i++)
        	{
        		for (int j = 0; j<COLUMNAS; j++)
        		{	
        			filasN=i;
        			columnasN=j;
					vivo=0;
           			if(filasN==0 && columnasN==0){
                        if(tablero[filasN+1][columnasN]=='X'){
            			    vivo++;
            			}
                        if(tablero[filasN][columnasN+1]=='X'){
            			    vivo++;
            			}
            			if(tablero[filasN+1][columnasN+1]=='X'){
                			vivo++;
            			}
           			}
					else if(filasN==FILAS-1 && columnasN==0){
            			if(tablero[filasN-1][columnasN]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN-1][columnasN+1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN][columnasN+1]=='X'){
                			vivo++;
            			}
                    }
					else if(filasN==0 && columnasN==COLUMNAS-1){
                        if(tablero[filasN][columnasN-1]=='X'){
            			    vivo++;
            			}
            			if(tablero[filasN+1][columnasN-1]=='X'){
                			vivo++;
            			}
                        if(tablero[filasN+1][columnasN]=='X'){
            			    vivo++;
            			}
                    }
					else if(filasN==FILAS-1 && columnasN==COLUMNAS-1){
                		if(tablero[filasN-1][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN-1][columnasN]=='X'){
                			vivo++;
            			}
               		}
					else if(filasN==0){
                        if(tablero[filasN][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN+1][columnasN-1]=='X'){
                			vivo++;
            			}
                        if(tablero[filasN+1][columnasN]=='X'){
            			    vivo++;
            			}
            	        if(tablero[filasN][columnasN+1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN+1][columnasN+1]=='X'){
                		vivo++;
            			}
            		}
					else if(filasN==FILAS-1){
                		if(tablero[filasN-1][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN-1][columnasN]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN-1][columnasN+1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN][columnasN+1]=='X'){
                			vivo++;
            			}
            		}
					else if(columnasN==0){
                        if(tablero[filasN-1][columnasN]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN+1][columnasN]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN-1][columnasN+1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN][columnasN+1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN+1][columnasN+1]=='X'){
                			vivo++;
            			}
            		}
					else if(columnasN==COLUMNAS-1){
                		if(tablero[filasN-1][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN+1][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN-1][columnasN]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN+1][columnasN]=='X'){
                			vivo++;
            			}
            		}
					else{
                		if(tablero[filasN-1][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN+1][columnasN-1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN-1][columnasN]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN+1][columnasN]=='X'){
                			vivo++;
			            }
            			if(tablero[filasN-1][columnasN+1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN][columnasN+1]=='X'){
                			vivo++;
            			}
            			if(tablero[filasN+1][columnasN+1]=='X'){
                			vivo++;
            			}
        			}
        			if(vivo==0&&tablero[filasN][columnasN]!='X'){
             		   tableroMO[filasN][columnasN]='0';
            		}else if(vivo==1&&tablero[filasN][columnasN]!='X'){
                		tableroMO[filasN][columnasN]='1';
            		}else if(vivo==2&&tablero[filasN][columnasN]!='X'){
                		tableroMO[filasN][columnasN]='2';
            		}else if(vivo==3&&tablero[filasN][columnasN]!='X'){
                		tableroMO[filasN][columnasN]='3';
            		}else if(vivo==4&&tablero[filasN][columnasN]!='X'){
                		tableroMO[filasN][columnasN]='4';
            		}else if(vivo==5&&tablero[filasN][columnasN]!='X'){
                		tableroMO[filasN][columnasN]='5';
            		}else if(vivo==6&&tablero[filasN][columnasN]!='X'){
                		tableroMO[filasN][columnasN]='6';
            		}else if(vivo==7&&tablero[filasN][columnasN]!='X'){
                		tableroMO[filasN][columnasN]='7';
            		}else if(vivo==8&&tablero[filasN][columnasN]!='X'){
                		tableroMO[filasN][columnasN]='8';
            		}
       			}
			}
			
			for (int i = 0; i<FILAS;i++)
        	{
        		for (int j = 0; j<COLUMNAS; j++)
        		{	
        			filasN=i;
        			columnasN=j;
        			if(tableroMO[filasN][columnasN]>'0'&&tableroMO[filasN][columnasN]<='8'&&tablero[filasN][columnasN]!='O')
        				tableroMO[filasN][columnasN]=' ';
				}
			}
			
		
			filasN=filasNaux;
        	columnasN=columnasNaux;
        	descubrir=1;
        	//imprimirTablero(tableroMO);
        	//Mensaje al perder 
        	//printf("Perdiste\n");
        	//break;
        }
        
        
        
        
    }
 
}
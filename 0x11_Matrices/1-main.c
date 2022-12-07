#include <stdio.h>

int main()
{
    
    int mapX = 8;  //max del eje en x 
    int mapY = 8; // max en eje en y
    char labyrinth[mapX][mapY];
    char seleccion; // lo que el usuario seleccione para donde moverse

    for(int i = 0; i<mapY; i++)
    {
        for(int j = 0; j<mapX;j++)
        {
            labyrinth[i][j]=' '; // espacio en blanco
        }
    }

// Creacion del mapa 
 labyrinth[1][1] = '#';
 labyrinth[0][1] = '#';
 labyrinth[0][2] = '#';
 labyrinth[0][3] = '#';
 labyrinth[0][4] = '#';
 labyrinth[0][5] = '#';
 labyrinth[0][6] = '#';
 labyrinth[0][7] = '#';
 labyrinth[0][8] = '#';
 labyrinth[0][0] = '#';
 labyrinth[1][0] = '#';
 labyrinth[2][0] = '#';
 labyrinth[3][0] = '#';
 labyrinth[4][0] = '#';
 labyrinth[5][0] = '#';
 labyrinth[6][0] = '#';
 labyrinth[7][0] = '#';
 labyrinth[8][0] = '#';
 labyrinth[1][2] = '#';
 labyrinth[1][3] = ' ';
 labyrinth[1][4] = ' ';
 labyrinth[1][5] = ' ';
 labyrinth[1][6] = '#';
 labyrinth[1][7] = '#';
 labyrinth[1][8] = '#';
 labyrinth[2][1] = ' ';
 labyrinth[2][2] = '#';
 labyrinth[2][3] = ' ';
 labyrinth[2][4] = '#';
 labyrinth[2][5] = ' ';
 labyrinth[2][6] = '#';
 labyrinth[2][7] = '#';
 labyrinth[2][8] = '#';
 labyrinth[3][1] = ' ';
 labyrinth[3][2] = '#';
 labyrinth[3][3] = ' ';
 labyrinth[3][4] = '#';
 labyrinth[3][5] = ' ';
 labyrinth[3][6] = '#';
 labyrinth[3][7] = '#';
 labyrinth[3][8] = '#';
 labyrinth[4][1] = ' ';
 labyrinth[4][2] = '#';
 labyrinth[4][3] = ' ';
 labyrinth[4][4] = '#';
 labyrinth[4][5] = ' ';
 labyrinth[4][6] = '#';
 labyrinth[4][7] = '#';
 labyrinth[4][8] = '#';
 labyrinth[5][1] = ' ';
 labyrinth[5][2] = '#';
 labyrinth[5][3] = ' ';
 labyrinth[5][4] = '#';
 labyrinth[5][5] = ' ';
 labyrinth[5][6] = '#';
 labyrinth[5][7] = '#';
 labyrinth[5][8] = '#';
 labyrinth[6][1] = ' ';
 labyrinth[6][2] = ' ';
 labyrinth[6][3] = ' ';
 labyrinth[6][4] = '#';
 labyrinth[6][5] = ' ';
 labyrinth[6][6] = ' ';
 labyrinth[6][7] = ' ';
 labyrinth[6][8] = '#';
 labyrinth[7][1] = '#';
 labyrinth[7][2] = '#';
 labyrinth[7][3] = '#';
 labyrinth[7][4] = '#';
 labyrinth[7][5] = '#';
 labyrinth[7][6] = '#';
 labyrinth[7][7] = '#';
 labyrinth[7][8] = '#';

 // Fin de la creacion del mapa ( laberinto )

    for(int i = 0; i<mapY; i++)
    {
        for(int j = 0; j<mapX;j++)
        {
            printf("[%c]", labyrinth[i][j]);
        }
        printf("\n");
    }

    int x=2; // inicio 1
    int y=1; // inicio 1.2

    while(labyrinth[6][7]!='+')
    {
    printf ("Selecciona a donde quieres moverte___w(arriba) ,s(Abajo), a(Izquierda), d(Derecha)___ SOLO LETRAS MINUSCULAS\n");
    scanf("%c", &seleccion);
        
    
    if (seleccion=='w') //Seleccion de ir hacia arriba
    {
        if (labyrinth[x-1][y]==' ')
        {
            labyrinth[x][y]=' ';
            
            labyrinth[x-1][y]='+';

            x=x-1; // reducir el valor ( si no peto )
        }
        else
        {
            printf ("No\n");
        }

    }
        
   if (seleccion=='s') // Seleccion de ir hacia abajo
    {
        if (labyrinth[x+1][y]==' ')
        {
            labyrinth[x][y]=' ';

            labyrinth[x+1][y]='+';

            x=x+1;
        }
        else
        {
            printf ("No\n");
        }
    }
            
    if (seleccion=='a') //Seleccion de ir hacia la izquierda
    {
        if(labyrinth[x][y-1]==' ')
        {
            labyrinth[x][y]=' ';
                    
            labyrinth[x][y-1]='+';
            
            y=y-1;
        }
        else
        {
            printf ("No\n");
        }
    }
        
    if (seleccion=='d') // seleccion de ir hacia la derecha
    {
        if(labyrinth[x][y+1]==' ')
        {
            labyrinth[x][y]=' ';

            labyrinth[x][y+1]='+';

            y=y+1;
        }
        else
        {
            printf ("No\n");
        }
    }

    for(int i = 0; i<mapY; i++)
    {
        for(int j = 0; j<mapX;j++)
        {
            printf("[%c]", labyrinth[i][j]);
        }
        printf("\n");
    }
   }

   /*if(x==6 && y==7)
   {
    return 0;
   }
   */
   printf("\n"); // un salto de linea extra :)
   printf("ERES UN CAMPEONNNNN\n"); // Mensaje de campeones
}

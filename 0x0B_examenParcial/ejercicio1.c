
#include <stdio.h>

int main()
{
    int i, j, filas;


    //Entrada de la cantidad de lineas
    printf("Dime el numero de filas: ");
    scanf("%d", &filas);

    for(i=1; i<=filas; i++)
    {
        for(j=1; j<=filas - i; j++)
        {
            //Espacios
            printf(" ");
        }

        for(j=1; j<=filas; j++)
        {
            // Estrellas 
            printf("*");
        }
       // salto de linea
        printf("\n");
    }

    return 0;
}
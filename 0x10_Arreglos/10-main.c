#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size, pos;


    printf("Dime el tamaño del arreglo : ");
    scanf("%d", &size);
    printf("Dime los elementos del arreglo: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

   
    printf("Ingresa la posicion del arreglo que quieres eliminar: ");
    scanf("%d", &pos);


    
    if(pos < 0 || pos > size)
    {
        printf("Posicion invalida %d", size);
    }
    else
    {
       
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

       
        size--;

       
        printf("\nLos elementos de la matriz después de la eliminación son: ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
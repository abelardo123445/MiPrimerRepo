#include <stdio.h>

#define MAX_SIZE 100    


int main()
{
    int arr[MAX_SIZE]; 
    int i, size, count = 0;

   
    printf("Ingresa el tamaño del arreglo : ");
    scanf("%d", &size);


 
    printf("Ingresa los elementos del arreglo: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        if(arr[i] < 0)
        {
            count++;
        }
    }

    printf("\nTotal de elementos negativos en el arreglo = %d", count);

    return 0;
}
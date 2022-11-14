#include <stdio.h>

#define MAX_SIZE 100   

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;

    printf("Dime el tamaño del arreglo : ");
    scanf("%d", &size);

    printf("Ingresa los elementos del arreglo: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    max = arr[0];
    min = arr[0];

    
    for(i=1; i<size; i++)
    {
       
        if(arr[i] > max)
        {
            max = arr[i];
        }

    
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

  
    printf("Elementos maximos = %d\n", max);
    printf("Elementos minumos = %d", min);

    return 0;
}
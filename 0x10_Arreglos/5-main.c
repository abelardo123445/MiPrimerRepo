/**
 * C program to find second largest number in an array
 */

#include <stdio.h>
#include <limits.h> // For INT_MIN

#define MAX_SIZE 1000     // Maximum array size 

int main()
{
    int arr[MAX_SIZE], size, i;
    int max1, max2;

    /* Input size of the array */
    printf("Ingresa el tamaño de la array (0-1000):  ");
    scanf("%d", &size);

     
    printf("Ingresa los elementos del array ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = INT_MIN;


    
    for(i=0; i<size; i++)
    {
        if(arr[i] > max1)
        {
          
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
           
            max2 = arr[i];
        }
    }

    printf("Primero mas largo = %d\n", max1);
    printf("Segundo mas largo = %d\n", max2);

    return 0;
}
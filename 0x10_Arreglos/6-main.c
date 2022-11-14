#include <stdio.h>

#define MAX_SIZE 100 

int main()
{
    int arr[MAX_SIZE];
    int i, size, even, odd;

    printf("Ingresa el tamaño de la array: ");
    scanf("%d", &size);

    printf("Ingresa %d los elementos del array: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    even = 0;
    odd  = 0;

    for(i=0; i<size; i++)
    {
        
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Elementos pares totales: %d\n", even);
    printf("Elementos impares totales: %d", odd);

    return 0;
}
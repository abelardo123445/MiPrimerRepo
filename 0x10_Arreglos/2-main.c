#include <stdio.h>

#define MAX_SIZE 100 

int main()
{
    int arr[MAX_SIZE]; 
    int i, N;


    printf("Dime el numero de datos para este arreglo con negativos: ");
    scanf("%d", &N);


    printf("Dime los elementos del negativo: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nLos elementos negativos del arreglo son : ");
    for(i=0; i<N; i++)
    {

        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}

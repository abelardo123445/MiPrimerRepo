#include<stdio.h>

int main()
{

    int arr[100], size, i, sum = 0;
    
    printf("Ingresa el tamaño del arreglo\n");
    scanf("%d",&size);
    
    printf("Dime los elementos del arreglo\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; 
    
    //print the result
    printf("Suma del arreglo = %d\n",sum);
    
    return 0;
}
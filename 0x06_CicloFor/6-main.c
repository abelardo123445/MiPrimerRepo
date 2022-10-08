#include <stdio.h>

int main()
{
    int i, n = 0, sum = 0;
    printf("Este programa suma todos los numero desde el  1 hasta n \n");
    printf("Dime hasta que numero deseas sumar:\n");
    scanf("%d", &n);

    for(i = 0; i<=n; i++)
    {
        sum += i; 
    }

    printf("La suma de los números es:  %d \n", sum);

    return(0);
}
#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Este programa suma n numeros pares\n");
    printf("Dime hasta el numero que quiere que sume: \n");
    scanf("%d", &n);

    for( i =1; i<=n; i+=2)
    {
        sum += i; 
    }

    printf("La suma de los numeros impares es: %d\n", sum);

    return(0);
}
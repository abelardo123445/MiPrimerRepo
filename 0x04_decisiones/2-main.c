#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers:");
    scanf("%d%d",&num1, &num2);

    if (num1>num2) /*cuando aqui es falso va directo a lo que dice else entonces si pongo 7 y 7 diria el segundo num es mayor y se puede poner el if-else if, puede ser y¿tan largo como se necesite*/
    {
        printf("El primer num es mayor\n");
    }
    else if (num1==num2)
    {
        printf("ambos numeros son iguales\n");
    }
    else
    {
        printf("El segundo num es mayor\n");
    }

    return 0;
}
#include <stdio.h>
#include "main.h"

int main (void)
{

    int numero = 1;
    int resultado;
    printf("ingrese un numero\n");
    scanf("%d", &numero);
    resultado = primos(numero);
    printf ("los numeros son:\n", numero);
    
    return (0);
}
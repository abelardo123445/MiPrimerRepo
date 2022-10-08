#include <stdio.h>
#include "main.h"

int main(void)
{
    int base, exponente, resultado;
    printf("ingresa la base \n");
    scanf("%d", &base);
    printf("ingrese el exponente \n");
    scanf("%d", &exponente);

    resultado= potencia(base,exponente);
    printf("%d elevado a la potencia %d es: %d\n", base, exponente, resultado);
    return(0);


}

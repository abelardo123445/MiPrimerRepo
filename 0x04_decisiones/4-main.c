#include <stdio.h>
/*
* Este programa revisa si un numero es divisible entre 5 y 11
*/

int main()
{
    int num

    printf ("Escribe un numero\n");
    scanf("%d",&num);

    if (num%5 ==0 )
    {
        if (num%11 ==0)
        {
            printf ("El numero es divisible entre 5 y 11\n");
        }
        else 
        {
            printf ("El numero es divisible solo entre 5\n");
        }
    }
    else
    {
        if (num%11 ==0)
        {
            printf ("El numero es divisible solo entre 11\n");
        }
        else
        {
            printf ("El numero no es divisible entre ninguno\n");
        }

    }
    return 0;
}
#include <stdio.h>
#include "main.h"

int primos (int n)
{

    int modu;
    int resultado = 0;

    for(int i = 0; i<=n; i++)
    {
        modu = n%2;
        resultado = modu;
        if (resultado != 0)
        {
            printf("n\n");
        } 
    }

    return(n);
}

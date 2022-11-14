#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];
    int i, n;
	
	
       printf("\n\nCopie los elementos de una matriz en otra matriz:\n");
       printf("----------------------------------------------------\n");
	   
       printf("Ingrese el número de elementos que se almacenarán en la matriz:");
       scanf("%d",&n);
   
       printf("Ingrese %d elementos en la matriz :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("elementos - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }


    printf("\nLos elementos almacenados en la primera matriz son :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr1[i]);
    }


    printf("\n\nLos elementos copiados en la segunda matriz son :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr2[i]);
    }
	       printf("\n\n");
}

#include <stdio.h>  
  
void  main()  
{  
    int arr[10]; 
    int i;  
       printf("\n\nLee e imprime los elementos del array\n");
       printf("-----------------------------------------\n");	
  
    printf("Ingresa 10 elementos en el array\n");  
    for(i=0; i<10; i++)  
    {  
	    printf("elementos - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\n¡Los elementos en el array son:  ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");	
}

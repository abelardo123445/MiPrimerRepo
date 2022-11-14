#include <stdio.h>

int main()
{
    int array[50], position, c, n, value;
    
    printf("Ingresa el numero de arreglos\n");
    scanf("%d", &n);
    
    printf("Ingresa %d los elementos\n", n);
    
    for (c = 0; c < n; c++)    
        scanf("%d", &array[c]);
    
    printf("Dime donde deseas insertarlo en el arreglo\n");
    scanf("%d", &position);
    
    printf("Por favor ingresa un valor: \n");
    scanf("%d", &value);
    
    for (c = n - 1; c >= position - 1; c--)    
        array[c+1] = array[c];
    
    array[position-1] = value;
    
    printf("El resultado del arreglo es: \n");
    
    for (c = 0; c <= n; c++)    
        printf("%d\n", array[c]);    
    
    return 0;
}
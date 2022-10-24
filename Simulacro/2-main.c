#include <stdio.h>
#include <math.h>
int main()//pow
{ 
    float area=0, perimetro=0, s=0, lado1=0, lado2=0, lado3=0;
     while (1)
{
    printf("Escriba la longitud del primer lado:\n");
    scanf("%f", &lado1);
    printf("Escriba la longitud del segundo lado:\n");
    scanf("%f", &lado2);
    printf("Escriba la longitud del tercer lado:\n");
    scanf("%f", &lado3);

    if (lado1 > 0 && lado2 > 0 && lado3 > 0)
    {s = (lado1 + lado2 + lado3)/2;
    perimetro = lado1 + lado2 + lado3;
    area = pow ((s*(s-lado1)*(s-lado2)*(s-lado3)),0.5);
    if(area>0){
         printf("El perimetro del triangulo es: %f\n", perimetro);
    printf("El area del triangulo es: %f\n", area);

    }else
    {
        printf("El triangulo no existe.\n");
    }
    

   
    }else{printf("El triangulo no existe.\n");

    }
     

}}
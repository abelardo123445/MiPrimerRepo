#include <stdio.h>

int main() {
    
    /* profe este codigo funciona diferente por favor verificar ya que el valor del tiempo es ejemplo: 
    1:51 pm 

    a 
    151

    agradezco su apoyo :) 

    extra point
    
    
    */
    char dia = 0;
    int time= 0;
    int duracion = 0;
    float costo = 0;

    printf("Que dia se hizo la llamada?\n");
    printf("L ==> lunes\n");
    printf("M ==> martes\n");
    printf("X ==> Miercoles\n");
    printf("J ==> Jueves\n");
    printf("V ==> Viernes\n");
    printf("S ==> Sabado \n");
    printf("D ==> Domingo\n");
    scanf("%c" , &dia);
    
    printf("A que hora se realizo la llamada?\n");
    printf("Si es 8:59 es 8059 no seas mala onda: \n");
    scanf("%d" , &time);

    printf("Cuantos tiempo en minutos duro la llamada? \n");
    scanf("%d" ,  &duracion);
    
    
    if ((dia == 'L') || (dia == 'l') || (dia == 'M') || (dia == 'm') || (dia == 'X')||(dia == 'x') || (dia == 'J') || (dia == 'j') || (dia == 'V') || (dia == 'v') ){
        
        if ((time> 759) || (time< 1801)) { // esto solo sucede si el tiempo esta en la opcion 11 
            costo = 0.30*(duracion);
        }


        else if ((time< 800) || (time> 1800)) { // esto pasa cuando el tiempo es opcion 12
            costo = 0.60*(duracion);
        }
    }
    else if ((dia == 'S') || (dia == 's') || (dia == 'D') || (dia == 'd')) { // cosa que se me dificulto 
    costo = 0.15*(duracion);
    }
    else {
    printf("ERROR joven"); // exclusivamente si no jalooo
    }
    
    printf("Tendras que pagar: %f", costo); // cosas por pagos 
    printf(" $$$ \n");
}
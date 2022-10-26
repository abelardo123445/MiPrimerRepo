 #include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int Minutos, Costo1, Costo2,hora,min1;
    char selecD;
    char selecH;
    int min;
    int Costo3;

    printf("Dime el dia de la semana: ");
	scanf("%s",&selecD);

    if(selecD=='S' || selecD=='s' || selecD=='D' || selecD=='d'){
        printf("meeee");


    }


    if(selecD=='L' || selecD=='l' || selecD=='M' || selecD=='m' || selecD=='X' || selecD=='x' || selecD=='J'|| selecD=='j' || selecD=='V'|| selecD=='v' ){
    printf("Dime la timeque se inicio la llamada en horas (formato 24 horas XX XX): \n");
	scanf("%i",&hora);
    //. printf("Dime la timeque se inicio la llamada en minutos (formato 24 horas XX XX): \n");
	//.scanf("%i",&min1);
    //printf("la timees: %i \n",hora);

    }
    if(hora>=8 && hora<=18 ) {
    printf("3Dime el duracion de la llamada en minutos: ");
	scanf("%i",&min);
    Costo1= min *.30;
    printf("Tienes que pagar %i \n",Costo1);
    }

    if(hora<8 || hora>18 ){
    printf("1Dime el duracion de la llamada en minutos: ");
	scanf("%i",&min);
    Costo2= min *.60;
    printf("Tienes que pagar %i \n",Costo2);

    }


 
   /* printf("Ingrese los Minutos consumidos: \n");
    scanf("%d", & Minutos);
 
                Costo1 = Minutos * 0.30;
 
                Costo2 = Minutos * 0.60;
 
    printf("El pago es: %d \n",Costo1);

    */
 
    return 0;
}


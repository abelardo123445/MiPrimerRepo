#include <stdio.h>
#include "main.h"

int tarifa1(int consumo)
{     
    float consumo_basico = 0;
    float consumo_Ibasico = 0;
    float consumo_Ialto = 0;
    float consumo_Excedente = 0;

    if (consumo >= 0 && consumo <= 75)
    {
        consumo_basico = 0.786 * consumo;
        printf("Consumo basico \n");   
    }
     if (consumo >= 76 && consumo <= 140)
    {
        consumo_basico = 75 * .786;
        consumo_Ibasico = (consumo - 75) * 0.911;
        printf("Consumo I.bajo \n");           
    }
     if (consumo >= 141)
    {
        consumo_basico = 75 * .786; // consumo basico
        consumo_Ibasico = (140-75) * .911; // consumo I. BAjo
        consumo_Excedente = (consumo - 140) * 3.134;

        printf("Consumo excedente \n");    
    }
    printf("Cobro por consumo basico: %.2f\n",consumo_basico);
    printf("Cobro por consumo I. bajo: %.2f\n",consumo_Ibasico);
    printf("Cobro por consumo I. alto: %.2f\n",consumo_Ialto);
    printf("Cobro por consumo excedente: %.2f\n",consumo_Excedente);
    return (consumo_Excedente + consumo_Ialto + consumo_Ibasico + consumo_basico);

}
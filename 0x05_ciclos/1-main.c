#include <stdio.h>

int main(void)
{
int numero=0;

printf("Ingrese hasta donde quieres que cuente: ");
scanf("%d",&numero);

printf("Inicia conteno...\n ");

for(int i; i<=numero; i++)
{
printf("%d\n",i);

}
printf("Fin del conteo...\n ");
return (0);
}
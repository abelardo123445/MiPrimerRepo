#include<stdio.h>
int main()
{
 	int i, j, rows; 
 	printf("Ingresa las filas del diamante: ");
 	scanf("%d", &rows);

    printf("Aqui esta tu diamante\n");
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
		printf("\n");
	}

    for(i = rows - 1; i > 0; i--)
	{
		for(j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
		printf("\n");
	}

 	return 0;
}
#include <stdio.h>

int main(void)
{
    int n = 0;
    printf("ingrese el numero al que desea llegar:");
    scanf("%d", &n);


    for(int i = 1; i<= n; i++)
    {
        if(i%2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return(0);
}
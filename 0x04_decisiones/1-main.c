#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age:\n");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("puedes votar\n");
    }
    else
    {
        printf("No puedes votar\n");
    }

    return 0;
}
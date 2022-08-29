#include<stdio.h>

int main()
{
    int i,c;
    printf("Cubes of First 10 Natural Numbers are: ");

    for(i=1 ; i<=10 ; i++)
    {
        c=i*i*i;
        printf("\n%d",c);

    }

    return 0;
}
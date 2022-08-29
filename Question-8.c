#include<stdio.h>

int main()
{
    int i,s;
    printf("Squares of First 10 Natural Numbers are: ");

    for(i=1 ; i<=10 ; i++)
    {
        s=i*i;
        printf("\n%d",s);

    }

    return 0;
}
#include<stdio.h>

int main()
{
    int i;
    printf("First 10 odd Natural Numbers in reverse order are: ");

    for(i=19 ; i>=1 ; i--)
    {
        if(i%2!=0)
        printf("\n%d",i);

    }

    return 0;
}
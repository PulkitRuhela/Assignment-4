#include<stdio.h>

int main()
{
    int i;
    printf("First 10 even Natural Numbers in reverse are: ");

    for(i=20 ; i>=1 ; i--)
    {
        if(i%2==0)
        printf("\n%d",i);

    }

    return 0;
}
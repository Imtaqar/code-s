#include<stdio.h>
int main()
{
    int x,f,i;
    scanf("%d",&x);
    f=0;
    for(i=2; i<x; i++)
    {

        if(x%i==0)
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not a prime\n");
    }
}

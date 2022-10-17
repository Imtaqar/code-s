#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    i=1;
    if(n>=0 && n<=1000)
    {
    while(i<=n)
    {
        if(i%2!= 0)
        {
            printf("%d\n",i);
        }

        i++;
    }
    }
    return 0;

}


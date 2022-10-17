#include<stdio.h>
int main()
{
    int N,i,x,max,pos;
    N=100;
    i=1;
    max=1;
    while(i<=N)
    {
        scanf("%d",&x);
        if(x>max)
        {
            max=x;
            pos=i;

        }

        i++;
    }
    printf("%d\n",max);
    printf("%d\n",pos);

    return 0;
}

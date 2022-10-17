#include<stdio.h>
int main()
{
    int x,i,sum=0;

    double avg;
    i=0;
    while(1)
    {
        scanf("%d",&x);
        if(x<0)
        {
            break;
        }
        else
        {
            i++;
            sum=sum+x;
            avg=(double)sum/i;

        }

    }
    printf("%.2lf\n",avg);

    return 0;
}

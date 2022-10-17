#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    i=1;
    while(i<=N)
    {
        scanf("%d",&j);
        if(j==0)
            printf("NULL\n");

        else if(j%2==0)
        {
            if(j<0)
                printf("EVEN NEGATIVE\n");
            else
                printf("EVEN POSITIVE\n");
        }
        else if(j%2!=0)
        {
            if(j<0)
                printf("ODD NEGATIVE\n");
            else
                printf("ODD POSITIVE\n");
        }

        i++;
    }

    return 0;
}

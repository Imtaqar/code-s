#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);

    if(N%2==0)
        N++;

    i=0;
    while(i<6)
    {

        printf("%d\n",N);
         N+=2;

        i++;
    }
}

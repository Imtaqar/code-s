#include<stdio.h>
int main()
{
    int N,i,Multi=1;
    scanf("%d",&N);

    i=1;
    while(i<=10)
    {
        Multi=i*N;

        printf("%d x %d = %d\n",i,N,Multi);
        i++;
    }
    return 0;
}

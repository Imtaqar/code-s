#include<stdio.h>
int main()
{
    long long N,M,Sum;
    scanf("%lld %lld",&N,&M);

    N=N%10;
    M=M%10;

    Sum = N+M;

    printf("%lld",Sum);

    return 0;
}

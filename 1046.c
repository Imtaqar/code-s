#include<stdio.h>
int main()
{
    int S,E,D;
    scanf("%d %d",&S,&E);

    if(S>E)
    {
        D= (24-S)+E;
        printf("O JOGO DUROU %d HORA(S)\n",D);
    }
    else if(S<E)
    {
        D=(E-S);
        printf("O JOGO DUROU %d HORA(S)\n",D);
    }
    else if(S==E)
        printf("O JOGO DUROU 24 HORA(S)\n");

    return 0;
}

#include<stdio.h>
int main()
{
    int n,x,total,c,r,f,i;
    char ch,C,R,S,p='%';
    scanf("%d",&n);
    total=c=r=f=0;

    for(i=1; i<=n; i++)
    {
        scanf("%d %c",&x, &ch);

        total += x;

        if(ch == 'C')
        {
            c += x;
        }
        if(ch == 'R')
        {
            r += x;
        }
        if(ch == 'S')
        {
            f += x;
        }
    }

    printf("Total: %d cobaias\n",total);

    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",f);

    printf("Percentual de coelhos: %.2lf %c\n",(double)c/total*100,p);
    printf("Percentual de ratos: %.2lf %c\n",(double)r/total*100,p);
    printf("Percentual de sapos: %.2lf %c\n",(double)f/total*100,p);

    return 0;
}

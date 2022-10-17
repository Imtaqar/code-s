#include<stdio.h>
int main()
{
    int a;
    long long b;
    char ch;
    float c;
    double d;

    scanf("%d %lld %c %f %lf",&a,&b,&ch,&c,&d);

    printf("%d\n%lld\n%c\n%f\n%lf\n",a,b,ch,c,d);

    return 0;
}

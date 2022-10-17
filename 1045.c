#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,highest,middle,lowest;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a>b && a>c)
    {
        highest = a;

        if(b>c)
        {
            middle = b;
            lowest = c;
        }
        else
        {
            middle = c;
            lowest = b;
        }
    }
     else if(b>a && b>c)
    {
        highest = b;

        if(a>c)
        {
            middle = a;
            lowest = c;
        }
        else
        {
            middle = c;
            lowest = a;
        }
    }
     else
    {
        highest = c;

        if(a<b)
        {
            middle = a;
            lowest = b;
        }
        else
        {
            middle = b;
            lowest = a;
        }
    }
    if(a=(b+c)) printf("NAO FORMA TRIANGULO\n");

    if(pow(a, 2) == pow(b, 2) + pow(c, 2)) printf("TRIANGULO RETANGULO\n");

    if(pow(a, 2) > pow(b, 2) + pow(c, 2)) printf("TRIANGULO OBTUSANGULO\n");

    if(pow(a, 2) < pow(b, 2) + pow(c, 2))  printf("TRIANGULO ACUTANGULO\n");

    if(a=b && a==c)

        printf("TRIANGULO EQUILATERO\n");

    if((a==b && a!=c) || (b==a && b!=c))

        printf("TRIANGULO ISOSCELES\n");

    return 0;
}

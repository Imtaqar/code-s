#include<stdio.h>
int main()
{
    double a,b,c,peri,area;
    scanf("%lf %lf %lf",&a,&b,&c);

    peri = a+b+c;
    area = 0.5*(a+b)*c;

    if(a+b>c && a+c>b && b+c>a)
        printf("Perimetro = %.1lf\n",peri);
    else
        printf("Area = %.1lf\n",area);


    return 0;
}

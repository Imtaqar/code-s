#include<stdio.h>
int main()
{
    int d;
    double f,total;
    scanf("%d %lf",&d,&f);

    total=d/f;
    printf("%.3lf km/l\n",total);

    return 0;
}


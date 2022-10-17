#include<stdio.h>
int main()
{
    float R;
    double Area;
    scanf("%f",&R);

    Area = 3.141592653*R*R;

    printf("%.9lf",Area);

    return 0;
}


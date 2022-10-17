#include<stdio.h>
int main()
{
    double A,B,C,SUM,MEDIA;
    scanf("%lf%lf%lf",&A,&B,&C);

    SUM=(A*2)+(B*3)+(C*5);

    MEDIA = SUM/10;
    printf("MEDIA = %.1lf\n",MEDIA);

    return 0;
}

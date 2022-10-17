#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,X,Y,Z;
    scanf("%lf %lf %lf",&A,&B,&C);

    X=B*B-(4*A*C);

    if(X<0)
    {
        printf("Impossivel calcular\n");
    }
    else if(A==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        Y = (-B+sqrt(X))/(A+A);
        Z = (-B-sqrt(X))/(A+A);

        printf("R1 = %0.5lf\n",Y);
        printf("R2 = %0.5lf\n",Z);
    }

    return 0;

}

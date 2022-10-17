#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n5,sum,avr1,avr2;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    sum = (n1*2)+(n2*3)+(n3*4)+(n4*1);

    avr1 = sum/10;

    printf("Media: %.1lf\n",avr1);

    if(avr1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avr1<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avr1>5.0 || avr1<6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&n5);
        printf("Nota do exame: %.1lf\n",n5);

        avr2 = (avr1+n5)/2;
        if(avr2>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avr2<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",avr2);

    }


    return 0;

}

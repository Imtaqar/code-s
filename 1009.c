#include<stdio.h>
int main()
{
    double salary,totalsell,bonus,totalsalary;char ch;


    scanf("%c %lf %lf",&ch,&salary,&totalsell);

    bonus = (15*totalsell)/100;

    totalsalary = salary + bonus;

    printf("TOTAL = R$ %.2lf",totalsalary);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b,c,M;
  scanf("%d %d %d",&a,&b,&c);

  M=(a+b+abs(a-b))/2;
  M=(c+M+abs(c-M))/2;
  printf("%d eh o maior\n",M);


    return 0;
}


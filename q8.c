#include<stdio.h>
int fact(int);
int main()
{
   int n,r,s,a,b;
   float f;
   printf("n,r");
   scanf("%d%d",&n,&r);
   s=fact(n);
   a=fact(r);
   b=fact(n-r);
   f=((s/(a*b))*a);
   printf("no of arrangements = %0.2f",f);
}
int fact(int n)
{
  int i,s=1;
  for(i=1;i<=n;i++)
  s=s*i;
  return s;
}
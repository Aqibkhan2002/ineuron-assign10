#include<stdio.h>
int fact(int n);
int main()
{
  int n,f;
  printf("enter n");
  scanf("%d",&n);
  f=fact(n);
printf("factorial = %d",f);

}
int fact(int n)
{
 int s=1,i;
 for(i=1;i<=n;i++)
  s=s*i;
  return s;

}
#include<stdio.h>
int check(int n,int a);
int main()
{
  int n,a,c;
  printf("Enter number and digit");
  scanf("%d%d",&n,&a);
  c=check(n,a);
  if(c==1)
  printf("digit contains given no");
  else
  printf("no");
}
int check(int n,int a)
{
    int r;
   while(n)
   {
      r=n%10;
      if(r==a)
      return 1;
      n=n/10;
   }
    return 0;
}
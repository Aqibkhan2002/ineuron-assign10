#include<stdio.h>
int check(int n);
int main()
{
  int n,r;
  printf("Enter n");
  scanf("%d",&n);
  r=check(n);
  if(r==1)
  printf("even");
  else
  printf("odd");
}
int check(int n)
{
  if(n%2==0)
  return 1;
  else
  return 0;
}
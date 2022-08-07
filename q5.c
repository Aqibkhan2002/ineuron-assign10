#include<stdio.h>
void printn(int n);
int main()
{
  int n;
  printf("enter n");
  scanf("%d",&n);
  printn(n);
  return 0;
}
void printn(int n)
{
    int i;
   for(i=1;i<=n;i++)
   printf("%d\n",(2*i)-1);

}
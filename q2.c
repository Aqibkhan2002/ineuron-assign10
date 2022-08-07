#include<stdio.h>
float interest(int p,int r, int t);
int main()
{
  int p,r,t;
  float s;
  printf("enter p,r,t");
  scanf("%d%d%d",&p,&r,&t);
  s=interest(p,r,t);
 printf("%f",s);
    return 0;
}
float interest(int p,int r, int t)
{
  return((p*r*t)/100);

}
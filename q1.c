#include<stdio.h>
float area(int r);
int main()
{
   int r;
   float a;
   printf("Enter r");
   scanf("%d",&r);
   a=area(r);
   printf("%0.2f",a);
    return 0;
}
float area(int r)
{
   return (3.14*r*r);

}
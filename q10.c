#include<stdio.h>
void pfactor(int n);
int main()
{
   int n,i,j;
   printf("Enter the no");
   scanf("%d",&n);
   pfactor(n);
  
return 0;
}
void pfactor(int n)
{
    int i,j;
     for(i=1;i<=n;i++)
   {
    if(n%i==0)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            break;

        }
              if(j==i)
              printf("prime factor = %d\n",i);
    }
   }

}
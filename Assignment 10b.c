#include <stdio.h>
int fact(n)
{
  int j, f=1,sum=0;
  for(n=5;n>0;n--)
  {
     for(j=1;j<=n;j++)
     {
           f*=j;
     }
     f=f/n ;
     sum+=f;
     f=1;
  }
  return sum;
}
void main()
{
  int n;
  printf("%d",fact(n));
  
}

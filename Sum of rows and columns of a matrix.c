#include<stdio.h>
int main()
{
  int a[5][5],i,j,m,n,sum,sum2;
  printf("enter rows and columns\n");
  scanf("%d %d",&m,&n);
  printf("enter elements\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  }
  for(i=0;i<m;i++)
  {
    sum=0;
    {
    for(j=0;j<n;j++)
    sum=sum+a[i][j];
    printf("sum of row %d is %d\n",i+1,sum);
    }
  }
  for(j=0;j<n;j++)
  {
    sum2=0;
    {
      for(i=0;i<m;i++)
      sum2=sum2+a[i][j];
      printf("sum of column %d is %d\n",j+1,sum2);
    }
  }
  return 0;
 }

#include<stdio.h>
int main()
{
  int a[10][10],i,j,m,n;
  printf("enter order of the matrix\n");
  scanf("%d %d",&m,&n);
  if(m!=n)
  printf("Enter valid order");
 else
 {
 for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {    
      if(i==j)
      a[i][j]=1;
      else
      a[i][j]=0;
    }
  }
  printf("Identity matrix is:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
    printf(" %d  ",a[i][j]);
    }
    printf("\n");
  }
  }
  return 0;
}

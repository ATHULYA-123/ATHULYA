#include <stdio.h>
int main()
{
  int m,i,j,a[5][5],prob;
  printf("Enter the order of the matrix:\n");
  scanf("%d",&m);
  
  printf("Enter the elements of the matrix:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<m;j++)
    {
     if(a[i][j]!=1 && a[j][i]!=0)
     {
       prob=0;
       break;
     }
     else
     {
       prob=1;
       break;
     } 
    }
  }
  if(prob==1)
  {
    printf("It is an identity matrix\n");
  }
  else
  {
    printf("It is not an identity matrix\n");
  }
  return 0;
}

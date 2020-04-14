#include<stdio.h>
void main ()
{
  int a, b;
  int A[10][5], B[10][5];
  int i, j;
  printf ("Enter the rows and columns respectively: ");
  scanf ("%d %d", &a, &b);
  for (i = 0; i < a; i++)
    {
      for (j = 0; j < b; j++)
	{
	  printf ("Enter value for A[%d][%d]:", i, j);
	  scanf ("%d", &A[i][j]);
	}
    }
  printf ("The transpose of the given matrix is\n");
  for (i = 0; i < a; i++)
    {
      for (j = 0; j < b; j++)
	{
	  B[j][i] = A[i][j];

	}
    }
  for (i = 0; i < b; i++)
    {
      for (j = 0; j <a; j++)
	{
	  printf (" %d ", B[i][j]);
	if(j==a-1)
	   { printf ("\n");}
	}
     
    }
}

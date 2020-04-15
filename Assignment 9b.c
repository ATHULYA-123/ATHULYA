#include<stdio.h>
void main ()
{
  int a, b, c, d;
  int A[10][5], B[10][5], C[10][5];
  int i, j, sum;
  printf ("Enter the rows and columns of 1st matrix respectively: ");
  scanf ("%d %d", &a, &b);
  printf ("Enter the rows and columns of 2nd matrix respectively: ");
  scanf ("%d %d", &c, &d);
  if (b == c)
    {
      for (i = 0; i < a; i++)
	{
	  for (j = 0; j < b; j++)
	    {
	      printf ("Enter value for A[%d][%d]:", i, j);
	      scanf ("%d", &A[i][j]);
	    }
	}
      for (i = 0; i < c; i++)
	{
	  for (j = 0; j < d; j++)
	    {
	      printf ("Enter value for B[%d][%d]:", i, j);
	      scanf ("%d", &B[i][j]);
	    }
	}
      for (i = 0; i <a; i++)
	{
	  for (j = 0; j < d; j++)
	    {C[i][j] = sum;
	      for(int k;k<c;k++)
	      sum += A[i][k] * B[j][k];
	    }
	  
	  sum=0;

	}
      printf ("THE PRODUCT MATRIX IS AS FOLLOWS\n");
      for (i = 0; i < a; i++)
	{
	  for (j = 0; j < d; j++)
	    {
	      printf (" %d ", C[i][j]);
	      if (j == d - 1)
		{
		  printf ("\n");
		}
	    }

	}
    }
  else
    {
      printf ("The multiplication is not possible.");
    }

}

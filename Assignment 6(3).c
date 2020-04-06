#include <stdio.h>
void main ()
{
  int a, n, b, i;
  printf ("Enter the no: to be reversed: ");
  scanf ("%d", &a);
  printf ("\nEnter the no: of digits of the no: ");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {

      if (a > 10)
	{
	  b = a % 10;
	  a = a / 10;
	  printf ("%d", b);
	}
      else
	printf ("%d", a);
    }
}

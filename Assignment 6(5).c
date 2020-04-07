#include <stdio.h>
void main ()
{
  double a;
  printf ("Enter the no: to be checked: ");
  scanf ("%lf", &a);
  if (a != 0)
    {
      if (a / 1 == a)
	printf ("\nPOSITIVE");
      else
	printf ("\nNEGATIVE");
    }
  else
    printf ("\nZERO");
}

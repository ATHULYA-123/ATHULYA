#include <stdio.h>
void main ()
{
  int a;
  printf ("Enter the no: to be checked: ");
  scanf ("%d", &a);
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

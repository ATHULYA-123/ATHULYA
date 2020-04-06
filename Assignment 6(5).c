#include <stdio.h>
void main ()
{
  int a;
  printf ("Enter the no: to be checked: ");
  scanf ("%d", &a);
  if (a / 1 == a)
    printf ("\nPOSITIVE");
  else if (a / 1 == -a)
    printf ("\nNEGATIVE");
  else
    printf ("\nZERO");
}

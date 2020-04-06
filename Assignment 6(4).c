#include <stdio.h>
void main ()
{
  int a, b, c, g;
  printf ("Enter three numbers: ");
  scanf ("%d %d %d", &a, &b, &c);
  if (a > b)
    g = a;
  else
    g = b;
  if (g < c)
    g = c;
  else
    g = g;
  printf ("The greatest no: is %d", g);
}

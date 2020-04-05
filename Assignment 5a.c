#include <stdio.h>
void main ()
{
  int a, i, n;
  printf ("Enter a no:\n");
  scanf ("%d", &a);
  for (i = 1; i <= 10; i++)
    {
      n = a * i;
      printf ("\n%d*%d=%d", a, i, n);
    }
}

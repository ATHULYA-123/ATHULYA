#include <stdio.h>
void main ()
{
  int a, i ;
  printf ("Enter a no:\n");
  scanf ("%d", &a);
  printf("The decremented value till zero is as follows\n");
  for (i = a; i > 0; i--)
    {
      a=i-1;
      printf ("\n%d", a);
    }
}

#include <stdio.h>
void main ()
{
  int  i ;
  printf ("Enter a no:\n");
  scanf ("%d", &i);
  printf("The decremented value till zero is as follows\n");
  do
    { 
      i--;
      printf ("\n%d", i);
    }
  while(i>0);
}

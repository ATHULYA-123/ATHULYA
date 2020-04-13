#include <stdio.h>
#include<string.h>
void main ()
{
  char a[50], b[50];
  int i, j, d, c;
  printf ("Enter the string: ");
  scanf ("%s", a);
  d = strlen (a);
  for (c = 0; c < d; c++)
    {
      for (i = 0; i < d - c; i++)
	{
	  printf ("\n");
	  for (j = 0; j <= i; j++)
	    {
	      b[j + c] = a[j + c];

	      printf ("%c", b[j + c]);
	    }
	}
    }
}

#include <stdio.h>
#include <string.h>
void main ()
{
  char a[70], b[70];
  printf ("Enter the sentence :\n");
  gets (a);
  for (int i = 0; i < strlen (a); i++)
    {
      if (a[i] >= 'A' && a[i] <= 'Z')
	{
	  b[i] = tolower (a[i]);
	}
      else
	{
	  b[i] = toupper (a[i]);
	}
    }
  printf ("%s", b);
}

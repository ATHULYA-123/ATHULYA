#include <stdio.h>
#include <string.h>
void main ()
{
  char a[70];
  int i, n = 0, m = 0, r = 0;
  printf ("Enter  the sentence:  ");
  gets (a);
  for (i = 0; i < strlen (a); i++)
    {
      if (a[i] >=33 && a[i] <=47)
	n++;
      else if (a[i] >= 58 && a[i] <=64)
	n++;
      else if (a[i] >=91 && a[i] <=96)
	n++;
	 else if (a[i] >=123 && a[i] <=126)
	n++;
      else if (a[i] >= 65 && a[i] <= 90) m++;
      else if (a[i] >= 97 && a[i] <= 122)
	m++;
      else if (a[i] >= 48 && a[i] <=57)
	r++;
      else
	continue;
    }
  printf ("\nNo: of special characters are: %d", n);
  printf ("\nNo: of alphabets are: %d", m);
  printf ("\nNo: of digits are: %d", r);

}

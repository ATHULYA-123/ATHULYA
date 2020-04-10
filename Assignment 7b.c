#include<stdio.h>
#include<string.h>
void main ()
{
  char a[20];
  int i, n = 0;
  printf ("Enter the string :\n");
  gets (a);
  for (i = 0; a[i] != '\0'; i++)
    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o'
	|| a[i] == 'u')
      n++;
    else if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O'
	     || a[i] == 'U')
      n++;
    else
      continue;
  printf ("%d", n);
}

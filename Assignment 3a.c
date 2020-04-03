#include <stdio.h>

intmain ()
{
  char a[20];
  float m1, m2, av;
  printf ("Enter the name of the student:");
  scanf ("%s", &a[20]);
  printf ("\nEner the marks of Maths:");
  scanf ("%f", &m1);
  printf ("\nEnter the marks of Physics:");
  scanf ("%f", &m2);
  av = (m1 + m2) / 2;
  printf ("\nThe average marks of the student is:%f", av);
  return 0;
}

#include <stdio.h>
void main ()
{
  double p, r, t, s;
  printf ("Enter the value of principal amount in rupees :");
  scanf ("%lf", &p);
  printf ("\nEnter the value of rate of interst in rupees :");
  scanf ("%lf", &r);
  printf ("\nEnter the time in years :");
  scanf ("%lf", &t);
  s = p * (1 + r * t);
  printf ("\nThe simple interst is :%lf", s);
}

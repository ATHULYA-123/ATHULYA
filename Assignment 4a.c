
#include <stdio.h>
int main ()
{
  int age;
  printf ("Enter the age of the citizen :   ");
  scanf ("%d", &age);
  if (age >= 50)
    printf ("Rs 5000");
  else if (age >= 60)
    printf ("Rs 10000");
  else
    printf ("Rs 0");
  return 0;
}

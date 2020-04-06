#include <stdio.h>
void main ()
{
  int marks;
  printf ("Enter the marks out of 100\n");
  scanf ("%d", &marks);
  if (marks > 90)
    printf ("A GRADE");
  else if (marks > 80)
    printf ("B GRADE");
  else if (marks > 70)
    printf ("C GRADE");
  else if (marks > 60)
    printf ("D GRADE");
  else if (marks > 50)
    printf ("E GRADE");
  else
    printf ("FAIL");
}

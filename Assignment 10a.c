#include<stdio.h>
int prime(int n)
{
int i;
if(n==1 || n==0)
printf("\nNumber is neither prime nor composite.");
else
{
for(i=2;i<n-1;i++)
  { 
  if(n%i==0)
 {
  printf("Number is composite.\n");
  return 0;
 }
  }
printf("Number is prime.\n");
}
}
int main()
{
int a;
printf("Enter number: ");
scanf("%d",&a);
prime(a);
}

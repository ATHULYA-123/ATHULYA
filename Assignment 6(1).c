#include <stdio.h>
void  main()
{
   float s,da,ta,net;
   printf("Enter the basic salary of the person:\n");
   scanf("%f",&s);
   da=.1*s;
   ta=.12*s;
   net=s+da+ta;
   printf("Total salary of the person is %f ",net);
   
}

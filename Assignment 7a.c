#include <stdio.h>
void main()
{
    char a[20];
    int i,n=0;
    printf("Enter the string to be reversed:\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    n++;
    for(i=n-1;i>=0;i--)
    printf("%c",a[i]);
    n--;
    
}

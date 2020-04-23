#include <stdio.h>
#include <string.h>
int main() 
{
    char a[100],b;
    int i,count = 0;

    printf("Enter a sentence:\n");
    gets(a);

    printf("Enter a character:\n");
    scanf("%c", &b);

    for(i =0;a[i] !='\0';i++)
    {
        if(b==a[i])
            ++count;
    }

    printf("Frequency of %c = %d", b,count);
    return 0;
}

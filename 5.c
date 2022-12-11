#include<stdio.h>
lowercase(char b[]);
int main()
{
    char a[20];
    lowercase(a);
    return 0;
}
lowercase(char b[])
{
    int i;
    printf("Enter a string: ");
    gets(b);

    for(i=0; b[i]; i++)
    {
        if(b[i]>= 'A' && b[i]<= 'Z')
        {
            b[i]= b[i]+32;
        }
    }
    printf("String is in lower case: %s",b);
}

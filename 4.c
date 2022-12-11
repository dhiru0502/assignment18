#include<stdio.h>
uppercase(char b[]);
int main()
{
    char a[20];
    uppercase(a);
    return 0;
}
uppercase(char b[])
{
    int i;
    printf("Enter a string: ");
    gets(b);

    for(i=0; b[i]; i++)
    {
        if(b[i]>= 'a' && b[i]<= 'z')
        {
            b[i]= b[i]-32;
        }
    }
    printf("String is in upper case: %s",b);
}

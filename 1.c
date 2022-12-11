#include<stdio.h>
int length(char b[]);
int main()
{
    char a[20];
    int l;
    l=length(a);
    printf("Total length of string is: %d",l);
    return 0;
}
int length(char b[])
{
    int i;
    printf("Enter a string: ");
    gets(b);
    for(i=0; b[i]!=0; i++ );
    return i;
}

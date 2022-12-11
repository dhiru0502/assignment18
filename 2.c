#include<stdio.h>
reverse(char b[]);
int main()
{
    char a[20];
    reverse(a);
    return 0;
}
reverse(char b[])
{
    char temp;
    int l,i;
    printf("Enter a string: ");
    gets(b);
    for(l=0; b[l]; l++);
    for(i=0; i<l/2; i++)
    {
        temp= b[i];
        b[i]= b[l-1-i];
        b[l-1-i]= temp;
    }
    printf("Reverse of a string is: %s",b);
}

#include<stdio.h>
int palindrome(char b[]);
int main()
{
    char a[20];
    printf("Enter a string: ");
    gets(a);
    if(palindrome(a))
        printf("%s is a palindrome\n",a);
    else
        printf("%s is not a palindrome\n",a);
    return 0;
}
int palindrome(char b[])
{
    int i=0, j;

    for(j=0; b[j]; j++);

    while(i<j/2)
    {
         if(b[i]!=b[j-1-i])
           return 0;
         i++;
    }
    return 1;
}

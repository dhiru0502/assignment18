#include<stdio.h>
int wordcount(char b[]);
int main()
{
    char a[50];
    printf("Enter a string: ");
    gets(a);
    printf("No. of word in a string is: %d",wordcount(a));

    return 0;
}
int wordcount(char b[])
{
    int i, count=0;
    for(i=0; b[i]!='\0'; i++)
    {
        if(b[i]==' ' && b[i+1]!= ' ')
          count++;
    }
    return count+1;
}

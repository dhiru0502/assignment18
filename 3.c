#include<stdio.h>
compare(char c[], char d[]);
int main()
{
    char a[20], b[20];
    compare(a, b);
    return 0;
}
compare(char c[], char d[])
{
    int i,f=0;
    printf("Enter a first string: ");
    gets(c);
    printf("Enter a second string: ");
    gets(d);
    for(i=0; c[i]; i++)
    {
        if(c[i]!= d[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
         printf("Both String is not same");
    else
        printf("Both String is same");
}

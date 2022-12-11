#include<stdio.h>
alphanumeric(char b[]);
int main()
{
    char a[20];
    alphanumeric(a);
    return 0;
}
alphanumeric(char b[])
{
    int i, A=0, D=0;
    printf("Enter a string: ");
    gets(b);

    for(i=0; b[i]; i++)
    {
        if((b[i]>= 'A' && b[i]<= 'Z') || (b[i]>= 'a' && b[i]<= 'z') )
            A=1;
        if(b[i]>= '0' && b[i]<='9')
            D=1;
    }
    if(A==1 && D==1)
           printf("%s is a alphanumeric",b);
    else
           printf("%s is not a alphanumeric",b);
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    { 
        n++;
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i]+3;
        if(a[i]=='x')
        {
            a[i]='a';
        }
        if(a[i]=='y')
        {
            a[i]='b';
        }
        if(a[i]=='z')
        {
            a[i]='c';
        }
    }
    printf("%s",a);

    return 0;
}

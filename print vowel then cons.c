/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[10];
    int n=0,i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
           printf("%c",a[i]);
           a[i]='+';
        }
    }
    for(i=0;i<n;i++)
    {
        if (a[i]!='+')
        if(a[i]!='a'||a[i]!='e'||a[i]!='i'||a[i]!='o'||a[i]!='u')
        {
        printf("%c",a[i]);
    }
    }
    return 0;
}

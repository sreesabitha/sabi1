/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0,n=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
    if(a[i]=='a'||a[i]=='b')
    {
        c++;
    }
    }
    if(c==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    

    return 0;
}

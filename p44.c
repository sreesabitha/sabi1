/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=0,k,i;
    char a[100];
    scanf("%s",a);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(i=n-k;i<n;i++)
    {
        printf("%c",a[i]);
    }
    for(i=0;i<n-k;i++)
    {
        printf("%c",a[i]);
    }
    

    return 0;
}

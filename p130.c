/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100];
    int n,i,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=p+a[i];
    if(p%2==0)
    {
        printf("%d ",p);
    }
    else
    {
        printf("%d ",a[i]);
    }
    }

    return 0;
}

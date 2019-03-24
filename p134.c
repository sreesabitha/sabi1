/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,l,r,i,min,a[100];
    scanf("%d %d %d",&n,&l,&r);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[l-1];
    for(i=l-1;i<=r-1;i++)
    {
    if(a[i]<min)
    {
        min=a[i];
    }
    }
        printf("%d",min);
    return 0;
}

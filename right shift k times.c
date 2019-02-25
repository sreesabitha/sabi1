/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],a1[100],i,n,k,j,len;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    len=n-k;
    j=0;
    for(i=len;i<n;i++)
    {
        a1[j]=a[i];
        j++;
    }
    for(i=0;i<len;i++)
    {
        a1[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a1[i]);
    }

    return 0;
}

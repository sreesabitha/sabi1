/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,sum=0,a[100],j,b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    for(i=n-1;i>=0;i--)
    {
        sum=sum+a[i];
        b[j]=sum;
        j++;
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }

    return 0;
}

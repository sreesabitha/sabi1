/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10][10],i,j,n,sum,product=1,product1=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        product=product*a[i][i];
        product1=product1*a[i][n-i-1];
        sum=product+product1;
    }
    printf("%d",sum);

    return 0;
}


    

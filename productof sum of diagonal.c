/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10][10],i,j,n,sum=0,sum1=0,product;
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
        sum=sum+a[i][i];
        sum1=sum1+a[i][n-i-1];
        product=sum*sum1;
    }
    printf("%d",product);

    return 0;
}


    return 0;
}

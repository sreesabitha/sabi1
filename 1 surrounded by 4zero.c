/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100][100],i,j,c=0,n;
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
        for(j=0;j<n;j++)
        {
         if(a[i][j]==1)
         {
             if(a[i-1][j]==0&&a[i][j-1]==0&&a[i+1][j]==0&&a[i][j+1]==0)
             {
                 c++;
             }
         }
        }
    }
    printf("%d",c);

    return 0;
}

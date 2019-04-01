/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],i,j,n,c=0,c1=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            if((i%2==0)&&(a[i]%2!=0))
            {
                   printf("%d ",a[i]);
            }
             else if((i%2!=0)&&(a[i]%2==0))
            {
                   printf("%d ",a[i]);
            }
    }


    return 0;
}

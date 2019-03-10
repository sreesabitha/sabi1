/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);

    return 0;
}

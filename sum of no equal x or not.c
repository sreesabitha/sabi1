/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,x,a[100],i,j,f=0,sum;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            if(sum==x)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}

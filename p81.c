/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,a[100],i,j,max=-1,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            res=a[i]&a[j];
            if(res>max)
            {
                max=res;
            }
        }
    }
        if(n==1)
        {
            printf("%d",a[0]);
        }
        else
        {
    
        printf("%d",res);
        }

    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,a[100000],i,f=0,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%a[i]==0)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c==n)
        {
            printf("%d",a[i]);
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("no");
    }

    return 0;
}

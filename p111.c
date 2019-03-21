/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,m,a[10000],b[10000],c[10000],i,j,k,l=0,f=0,t;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c[l]=a[i];
                b[j]='$';
                l++;
                f=1;
            }
        }
        if(f==1)
        a[i]='$';
    }
    for(i=0;i<l;i++)
    {
        if(c[i]>c[i+1])
        {
         t=c[i];
         c[i+1]=c[i];
         c[i]=t;
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%d ",c[i]);
    }


    return 0;
}

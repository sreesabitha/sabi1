/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],b[100];
    int n,k,i,m=0,j,c1=0,t,l,c;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='$';
            }
        }
        if(c<k&&a[i]!='$')
        {
            b[m]=a[i];
            m++;
            c1++;
        }
    }
    for(m=0;m<c1;m++)
    {
        for(l=m+1;l<c1;l++)
        {
            if(b[m]>b[l])
        {
            t=b[m];
            b[m]=b[l];
            b[l]=t;
        }
    }
    }
    for(m=0;m<c1;m++)
    {
        printf("%d ",b[m]);
    }

    return 0;
}

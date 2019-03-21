/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],b[100],n,m,i,j,t,k=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=n;i<n+m;i++)
    {
        a[i]=b[k];
        k++;
    }
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<n+m;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n+m;i++)
    {
    printf("%d ",a[i]);
    }
    

    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],n,i,t,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n/2;i++)
    {
        for(j=i+1;j<n/2;j++)
        {
      if(a[i]>a[j])
      {
          t=a[j];
          a[j]=a[i];
          a[i]=t;
      }
    }
    }
    for(i=n/2;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]<a[j])
        {
            t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
        
    }
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}

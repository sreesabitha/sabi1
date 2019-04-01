/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],i,j,n,c=0,t,b[100],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            b[k]=a[i];
            k++;
            c++;
        }
    }
    if(c!=0)
    {
        for(i=0;i<k;i++)
        {
            for(j=i+1;j<k;j++)
            {
              if(b[i]>b[j])
              {
                  t=b[i];
                  b[i]=b[j];
                  b[j]=t;
              }
            }
        }
        for(i=0;i<k;i++)
        {
          printf("%d ",b[i]);
        }
    }
    else
    {
        printf("-1");
    }
        
    

    return 0;
}

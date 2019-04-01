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
        scanf("%d",&b[i]);
    }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
              if(b[i]<b[j])
              {
                  t=b[i];
                  b[i]=b[j];
                  b[j]=t;
              }
            }
        }
        for(i=0;i<n;i++)
        {
            if(b[i]==0)
            {
                c++;
            }
        }
            if(c==n)
            {
                printf("%d",b[0]);
            }
            else
            {
        for(i=0;i<n;i++)
        {
          printf("%d",b[i]);
        }
        }
    

    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],n,i,c=0,c1=0,t,t1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            if(a[i]%2==0)
            {
                c++;
                t=a[i];
            }
            else
            {
                c1++;
                t1=a[i];
            }
    }
    if(c==1)
    {
    printf("%d",t);
    }
    else
    {
        printf("%d",t1);
    }


    return 0;
}

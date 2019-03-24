/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,k,a[100],b[100],i,j,t;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=1;
    for(i=0;i<n;i++)
    {
            if(a[i]%2!=0)
            {
            b[j]=a[i];
            j++;
            }
    }
    printf("%d",b[k]);

    return 0;
}

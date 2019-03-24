/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,a[100],c=0,i=0,j,f,rem,k,p,l=1,c1=0,b[100];
    scanf("%d %d %d",&n,&k,&p);
    while(n>0)
    {
        rem=n%10;
        a[i]=rem;
        i++;
        c++;
        n=n/10;
    }
    for(i=c-1;i>=0;i--)
    {
        b[l]=a[i];
        l++;
        c1++;
    }
    for(j=0;j<=c1;j++)
    {
    if(p==j)
    {
        printf("%d",b[p+k]);
    }
    }

    return 0;
}

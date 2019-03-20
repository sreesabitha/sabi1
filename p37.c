/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],i,c=0,t=0,n;
    scanf("%d",&n);
    while(t<n)
    {
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }
         if(a[0]<a[1])
         {
           c++;
         }
         t++;
    }
    printf("%d",c);

    return 0;
}

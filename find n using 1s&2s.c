/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=n;j>=0;j--)
        {
           if((i*1)+(j*2)==n)
           {
               c++;
           }
            
        }
    }
printf("%d",c);
    return 0;
}

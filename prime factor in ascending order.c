/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,j,prime;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=1;
            for(j=2;j<i/2;j++)
            {
                if(i%j==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime==1)
            {
                printf("%d ",i);
            }
        }
    }

    return 0;
}

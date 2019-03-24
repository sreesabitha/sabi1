/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,r,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
    if(r%2!=0)
    {
        sum=sum+r;
    }
    n=n/10;
    }
    if(sum%2==0)
    {
        printf("E");
    }
    else
    {
        printf("O");
    }
    

    return 0;
}

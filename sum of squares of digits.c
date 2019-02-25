/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,sum=0,t,res;
    scanf("%d",&n);
    while(n)
    {
        t=n%10;
        res=t*t;
        n=n/10;
        sum=sum+res;
    }
    printf("%d",sum);

    return 0;
}

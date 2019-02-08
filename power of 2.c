/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,n1,f=0;
    printf("enter no");
    scanf("%d",&n);
    n1=n;
    while(n1>1)
    {
        if(n1%2!=0)
        {
            f=1;
            break;
        }
        n1=n1/2;
    }
if(f==0)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}

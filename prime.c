/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,c=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {
        c=1;
        break;
    }}
    if(c==0)
    {
        printf("prime");
    }
else
    {
        printf("not");
    }
return 0;
}


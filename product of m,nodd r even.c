/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,sum,m;
    printf("enter no");
    scanf("%d%d",&n,&m);
    sum=n*m;
    if(sum%2==0)
    {
        printf("even");
    }
    else
    {
printf("odd");
}
    return 0;
}

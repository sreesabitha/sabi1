/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,fact=1;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    
    printf("%d",fact);


    return 0;
}

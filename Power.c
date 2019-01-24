/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.



#include <stdio.h>

int main()
{
    int i,n,k,pow=1;
    printf("enter value of n and k");
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i++)
    {
        pow=pow*n; 
    }
    printf("%d",pow);

    return 0;
}

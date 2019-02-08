/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ 
    int i,n,sum=0,res;
    printf("enter no");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
        res=sum/n;
    }
    printf("%d ",res);
    return 0;
}

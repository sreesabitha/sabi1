/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,k,i,res,p=1,s=1;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    for(i=1;i<=(n-k);i++)
    {
        p=p*i;
    }
    res=(s/p);
    printf("%d",res);
    

    return 0;
}

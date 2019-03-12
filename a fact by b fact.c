/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,i,fact=1,fact1=1,res;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    for(i=1;i<=b;i++)
    {
        fact1=fact1*i;
    }
    res=fact/fact1;
    printf("%d",res);

    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int bin=0,r,power=1,n,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        bin=bin+power*r;
        n=n/2;
        power=power*10;
    }
    while(bin)
    {
        bin=bin/10;
        c++;
    }
    printf("%d",c);
    return 0;
}

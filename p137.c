/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,r,bin=0,power=1,c1=0,c,r1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        bin=bin+r*power;
        power=power*10;
        n=n/2;
    }
    c=0;
    while(bin)
    {
        r1=bin%10;
        c++;
        if(r1==1)
        {
            c1++;
            break;
        }
        bin=bin/10;
    }
    printf("%d",c);

    return 0;
}

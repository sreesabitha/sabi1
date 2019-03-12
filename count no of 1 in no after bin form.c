/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,bin=0,rem,pow=1,rem1,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        bin=bin+rem*pow;
        n=n/2;
        pow=pow*10;
    }
    while(bin)
    {
        rem1=bin%10;
        bin=bin/10;
        if(rem1==1)
        {
            c++;
        }
    }
    printf("%d",c);

    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,rem,bin=0,pow=1;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        bin=rem*pow+bin;
        n=n/2;
        pow=pow*10;
    }
    printf("%d",bin);

    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,rem,dec=0,pow=1;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        dec=rem*pow+dec;
        n=n/10;
        pow=pow*2;
    }
    printf("%d",dec);

    return 0;
}

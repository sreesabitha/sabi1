/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    long int bin,hd=0,power=1,rem;
    scanf("%ld",&bin);
    while(bin>0)
    {
        rem=bin%10;
        hd=hd+power*rem;
        power=power*2;
        bin=bin/10;
    }
    printf("%lx",hd);

    return 0;
}

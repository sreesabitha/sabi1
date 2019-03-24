/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    long int bin,oct=0,power=1,rem;
    scanf("%ld",&bin);
    while(bin>0)
    {
        rem=bin%10;
        oct=oct+power*rem;
        power=power*2;
        bin=bin/10;
    }
    printf("%lo",oct);

    return 0;
}

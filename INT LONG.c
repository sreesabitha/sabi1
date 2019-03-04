/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=-32768&&n<=32767)
    {
        printf("INT");
    }
    else
    {
        printf("LONG");
    }

    return 0;
}

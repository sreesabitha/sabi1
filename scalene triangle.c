/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a!=b)&&(b!=c)&&(c!=a))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}

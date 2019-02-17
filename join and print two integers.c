/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,pow=10,res;
    scanf("%d %d",&a,&b);
    while(b>=pow)
    {
        pow=pow*10;
    }
    res=a*pow+b;
    printf("%d",res);

    return 0;
}

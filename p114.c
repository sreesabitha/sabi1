/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,i,res,p;
    scanf("%d %d %d",&a,&b,&c);
    p=pow(a,b);
    res=p%c;
    printf("%d",res);

    return 0;
}

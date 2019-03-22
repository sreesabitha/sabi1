/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,k;
    float res;
    scanf("%d %d",&n,&k);
    res=n>>k;
    printf("%.2f",res);

    return 0;
}

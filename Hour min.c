/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,rem,q;
    printf("enter a");
    scanf("%d",&a);
    q=a/60;
    rem=a%60;
    printf("%d %d ",q,rem);
return 0;
}

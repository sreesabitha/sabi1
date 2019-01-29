/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,sub,rem,q;
    printf("enter values");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=(60*a)+b;
    f=(60*c)+d;
    sub=e-f;
    q=sub/10;
    rem=sub%10;
    printf("%d %d ",q,rem);
 return 0;
}

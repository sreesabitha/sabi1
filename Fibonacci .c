/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=0,n,b=1,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<=1)
{
    c=i;
}
else
{
    c=a+b;
    a=b;
    b=c;
}
printf("%d",c);
}
    return 0;
}

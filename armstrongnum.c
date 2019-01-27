/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,c=0,rem,result=0,s;
    printf("enter n");
    scanf("%d",&n);
    s=n;
    while(s>0)
    {
    s=s/10;
    c++;
    }
    s=n;
    while(s>0)
    {
        rem=s%10;
        result=result+pow(rem,c);
        s=s/10;
    }
    if(n==result)
    {
    printf("armstrong");
    }
    else
    {
        printf("not");
    }
return 0;
}


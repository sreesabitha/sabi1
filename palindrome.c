/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,rem,temp=0,s;
    printf("enter n");
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        rem=n%10;
        temp=temp*10+rem;
        n=n/10;
    }
    if(s==temp)
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }
return 0;
}


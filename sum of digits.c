/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,rem,sum=0;
    printf("enter no");
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
printf("%d",sum);
    return 0;
}

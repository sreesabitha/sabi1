/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d",n);
    }
    else
    {
printf("%d",n-1);
}
    return 0;
}

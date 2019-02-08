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
    if(n>=1&&n<=10)
    {
printf("valid");
}
else
{
    printf("not valid");
}
    return 0;
}

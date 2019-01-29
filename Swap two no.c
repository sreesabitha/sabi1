/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,t; 
    printf("enter value");
    scanf("%d%d",&a,&b);
    t=a; 
    a=b;
    b=t;
    printf("%d %d",a,b); 

    return 0;
}

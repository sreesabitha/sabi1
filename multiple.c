/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,multiple=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
    multiple=multiple+n;
    printf("%d ",multiple);
    }
return 0;
}


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,i;
    printf("enter n");
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        if(i%2==0)
        {
        printf("%d ",i);
    }
    }
return 0;
}


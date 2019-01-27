/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,i,c,j;
    printf("enter n");
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
    c=0;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
    c++;
    break;
    }
    }
    if(c==0)
    {
        printf("%d",i);
    }
    }
return 0;
}


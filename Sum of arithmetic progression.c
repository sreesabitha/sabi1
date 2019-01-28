/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N,a,d,i,sum=0;
    scanf("%d%d%d",&N,&a,&d);
    for(i=0;i<N;i++)
    {
        sum=sum+(a+i*d);
    }
    printf("%d",sum);

    return 0;
}

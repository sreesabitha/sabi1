/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,f=0;
    scanf("%d",&n);
    while(n>1)
    {
        if(n%2!=0)
        {
            f=1;
            break;
        }
        n=n/2;
    }
    if(f==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

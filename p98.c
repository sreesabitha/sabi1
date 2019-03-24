/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,k,n1,r,c=0,c1=0;
    scanf("%d %d",&n,&k);
    n1=n;
    while(n1>0)
    {
        r=n1%10;
        c1++;
        if(r>=0 && r<=k)
        {
            c++;
        }
        n1=n1/10;
    }
    if(c==c1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }


    return 0;
}
